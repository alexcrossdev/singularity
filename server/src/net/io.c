#include "net/io.h"
#include "core/buf.h"
#include "proto/protocol.h"
#include "proto/handlers.h"
#include "net/server.h"

#include <singularity/log.h>
#include <singularity/base.h>

#include <errno.h>
#include <netinet/in.h>
#include <netinet/tcp.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <sys/epoll.h>
#include <sys/eventfd.h>
#include <sys/socket.h>
#include <time.h>
#include <unistd.h>

#define MAX_EVENTS 256
#define PRELOGIN_TIMEOUT_MS 10000u
#define SWEEP_INTERVAL_MS 1000u
#define PLAY_KEEPALIVE_INTERVAL_MS 10000u

static u64 now_ms(void)
{
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC_COARSE, &ts);
    return (u64)ts.tv_sec * 1000u + (u64)ts.tv_nsec / 1000000u;
}

static inline void stat_add(atomic_uint_fast64_t *c, u64 value)
{
    atomic_store_explicit(c, atomic_load_explicit(c, memory_order_relaxed) + value,
            memory_order_relaxed);
}

static void conn_close(io_thread *io, conn *c)
{
    if (c->state == CS_CLOSED)
        return;
    if (c->player_registered)
        play_player_disconnect(c);
    if (c->state == CS_PLAY)
        play_save_player_position(c);
    c->state = CS_CLOSED;
    epoll_ctl(io->epfd, EPOLL_CTL_DEL, c->fd, NULL);
    close(c->fd);

    if (c->prev)
        c->prev->next = c->next;
    else
        io->head = c->next;

    if (c->next)
        c->next->prev = c->prev;

    io->nconns--;

    c->dead_next = io->dead;
    io->dead = c;

    stat_add(&io->closed, true);
}

static void free_dead(io_thread *io)
{
    conn *c = io->dead;
    while (c) {
        conn *next = c->dead_next;
        free(c->write_buf);
        free(c);
        c = next;
    }
    io->dead = NULL;
}

static void conn_set_events(conn *c)
{
    struct epoll_event ev = {
        .events = EPOLLIN | (c->want_out ? EPOLLOUT : 0u),
        .data.ptr = &c->item
    };
    epoll_ctl(c->io->epfd, EPOLL_CTL_MOD, c->fd, &ev);
}

static inline b8 conn_has_pending(const conn *c)
{
    return c->write_off != c->write_len;
}

static void conn_finish(conn *c)
{
    if (c->close_after_flush && !conn_has_pending(c))
        conn_close(c->io, c);
}

static void conn_flush(io_thread *io, conn *c)
{
    while (conn_has_pending(c)) {
        s32 w = send(c->fd, c->write_buf + c->write_off, c->write_len - c->write_off, MSG_NOSIGNAL);
        if (w > 0) {
            c->write_off += (u32)w;
            stat_add(&io->bytes_out, (u64)w);
        } else if (w < 0 && errno == EINTR) {
            continue;
        } else if (w < 0 && (errno == EAGAIN || errno == EWOULDBLOCK)) {
            return;
        } else {
            conn_close(io, c);
            return;
        }
    }

    c->write_off = c->write_len = 0;
    if (c->want_out) {
        c->want_out = false;
        conn_set_events(c);
    }
    conn_finish(c);
}

static s32 frame_len(const u8 *ptr, u32 avail, u32 *len, u32 *hdr)
{
    u32 value = 0;
    for (u32 i = 0; i < 3; i++) {
        if (i >= avail)
            return 0;

        value |= (u32)(ptr[i] & 0x7F) << (7 * i);
        if (!(ptr[i] & 0x80)) {
            *len = value;
            *hdr = i + 1;
            return 1;
        }
    }
    return -1;
}

static void process_frames(io_thread *io, conn *c)
{
    u32 off = 0;
    while (c->state != CS_CLOSED && !c->close_after_flush && off < c->read_len) {
        u32 len = 0;
        u32 hdr = 0;
        u32 avail = c->read_len - off;
        int rc = frame_len(c->read_buf + off, avail, &len, &hdr);
        if (rc == 0)
            break;
        if (rc < 0 || len == 0 || len > PRELOGIN_MAX_FRAME) {
            conn_close(io, c);
            return;
        }
        if (avail < hdr + len)
            break;

        buf_reader r = buf_reader_init(c->read_buf + off + hdr, len);
        s32 id = buf_varint_read(&r);
        const protocol_layer *layer = c->protocol_layer ? c->protocol_layer :
                                      protocol_layer_default();
        b8 ok;
        switch (c->state) {
            case CS_HANDSHAKE:
                ok = !r.err && handshake_handle(c, &r) && !r.err && r.p == r.end;
                break;
            case CS_STATUS:
                ok = !r.err && layer->status(io->srv, c, id, &r) && !r.err && r.p == r.end;
                break;
            case CS_LOGIN:
                ok = !r.err && c->protocol_layer && layer->login(io->srv, c, id, &r) && !r.err && r.p == r.end;
                break;
            case CS_CONFIGURATION:
                ok = !r.err && c->protocol_layer && layer->configuration(io->srv, c, id, &r) && !r.err && r.p == r.end;
                break;
            case CS_PLAY:
                ok = !r.err && c->protocol_layer && layer->play(io->srv, c, id, &r) && !r.err && r.p == r.end;
                break;
            case CS_CLOSED:
            default:
                ok = false;
        }
        off += hdr + len;
        if (!ok) {
            switch (c->state) {
                case CS_HANDSHAKE:
                    SG_LOG_ERROR("io-%d: unknown packet: 0x%02X; state: CS_HANDSHAKE", c->io->id, id);
                    break;
                case CS_STATUS:
                    SG_LOG_ERROR("io-%d: unknown packet: 0x%02X; state: CS_STATUS", c->io->id, id);
                    break;
                case CS_LOGIN:
                    SG_LOG_ERROR("io-%d: unknown packet: 0x%02X; state: CS_LOGIN", c->io->id, id);
                    break;
                case CS_CONFIGURATION:
                    SG_LOG_ERROR("io-%d: unknown packet: 0x%02X; state: CS_CONFIGURATION", c->io->id, id);
                    break;
                case CS_PLAY:
                    SG_LOG_ERROR("io-%d: unknown packet: 0x%02X; state: CS_PLAY", c->io->id, id);
                    break;
                default:
                    SG_LOG_ERROR("io-%d: unknown packet: 0x%02X; state: INVALID", c->io->id, id);
            }
            conn_close(io, c);
            return;
        }
    }

    if (c->state == CS_CLOSED)
        return;
    if (c->close_after_flush) {
        c->read_len = 0;
    } else if (off > 0) {
        memmove(c->read_buf, c->read_buf + off, c->read_len - off);
        c->read_len -= (u32)off;
    }
    conn_finish(c);
}

static void conn_on_readable(io_thread *io, conn *c)
{
    if (c->read_len >= READ_BUFFER_CAP) {
        conn_close(io, c);
        return;
    }

    s32 n = recv(c->fd, c->read_buf + c->read_len, READ_BUFFER_CAP - c->read_len, 0);
    if (n == 0) {
        conn_close(io, c);
        return;
    }
    if (n < 0) {
        if (errno != EAGAIN && errno != EWOULDBLOCK && errno != EINTR)
            conn_close(io, c);
        return;
    }
    c->read_len += (u32)n;
    c->last_active_ms = now_ms();
    stat_add(&io->bytes_in, (u64)n);
    process_frames(io, c);
}

static void accept_all(io_thread *io)
{
    u32 per_thread_cap = io->srv->cfg.max_conns / (u32)io->srv->nio + 1;

    for (;;) {
        s32 fd = accept4(io->listen_fd, NULL, NULL, SOCK_NONBLOCK | SOCK_CLOEXEC);
        if (fd < 0) {
            if (errno == EINTR || errno == ECONNABORTED)
                continue;
            if (errno == EAGAIN || errno == EWOULDBLOCK)
                return;
            if (errno == EMFILE || errno == ENFILE) {
                SG_LOG_WARN("io-%d: out of file descriptors", io->id);
                struct timespec ts = { 0, 10 * 1000 * 1000 };
                nanosleep(&ts, NULL);
                return;
            }
            SG_LOG_WARN("io-%d: accept: %s", io->id, strerror(errno));
            return;
        }

        if (io->nconns >= per_thread_cap) {
            close(fd);
            continue;
        }

        s32 one = 1;
        setsockopt(fd, IPPROTO_TCP, TCP_NODELAY, &one, sizeof(one));

        conn *c = calloc(1, sizeof(*c));
        if (!c) {
            close(fd);
            continue;
        }
        c->item.kind = EPI_CONN;
        c->fd = fd;
        c->io = io;
        c->state = CS_HANDSHAKE;
        c->last_active_ms = now_ms();

        struct epoll_event ev = { .events = EPOLLIN, .data.ptr = &c->item };
        if (epoll_ctl(io->epfd, EPOLL_CTL_ADD, fd, &ev) < 0) {
            close(fd);
            free(c);
            continue;
        }
        c->next = io->head;
        if (io->head)
            io->head->prev = c;
        io->head = c;
        io->nconns++;
        stat_add(&io->accepted, 1);
    }
}

static void process_messages(io_thread *io)
{
    io_message *messages;
    pthread_mutex_lock(&io->message_lock);
    messages = io->messages_head;
    io->messages_head = io->messages_tail = NULL;
    pthread_mutex_unlock(&io->message_lock);

    while (messages) {
        io_message *next_message = messages->next;
        conn *c = io->head;
        while (c) {
            conn *next = c->next;
            if (c->state == CS_PLAY &&
                (messages->target_entity_id < 0 ||
                 c->entity_id == messages->target_entity_id) &&
                (messages->exclude_entity_id < 0 ||
                 c->entity_id != messages->exclude_entity_id))
                (void)conn_send(c, messages->data, messages->len);
            c = next;
        }
        free(messages);
        messages = next_message;
    }
}

static void sweep_timeouts(io_thread *io)
{
    u64 now = now_ms();
    conn *c = io->head;
    while (c) {
        conn *next = c->next;
        if (c->state == CS_PLAY) {
            if (!c->last_keepalive_ms)
                c->last_keepalive_ms = now;
            else if (now - c->last_keepalive_ms >= PLAY_KEEPALIVE_INTERVAL_MS) {
                c->keepalive_token = (s64)now;
                const protocol_layer *layer = c->protocol_layer ? c->protocol_layer :
                                              protocol_layer_default();
                if (!layer->send_keepalive ||
                    !layer->send_keepalive(c, c->keepalive_token)) {
                    if (c->state != CS_CLOSED)
                        conn_close(io, c);
                } else {
                    c->last_keepalive_ms = now;
                    SG_LOG_DEBUG("io-%d: sent PLAY_KEEP_ALIVE token=%lld", io->id,
                              (long long)c->keepalive_token);
                }
            }
        } else if (now > c->last_active_ms && now - c->last_active_ms > PRELOGIN_TIMEOUT_MS) {
            conn_close(io, c);
        }
        c = next;
    }
}

/**
 *  IO Thread Function
 */
static void *io_main(void *arg)
{
    io_thread *io = arg;
    char name[16];
    snprintf(name, sizeof(name), "io-%d", io->id);
    pthread_setname_np(pthread_self(), name);

    struct epoll_event evs[MAX_EVENTS];
    u64 next_sweep = now_ms() + SWEEP_INTERVAL_MS;

    while (!atomic_load_explicit(&io->srv->stop, memory_order_acquire)) {
        int n = epoll_wait(io->epfd, evs, MAX_EVENTS, 250);
        if (n < 0) {
            if (errno == EINTR)
                continue;
            SG_LOG_ERROR("io-%d: epoll_wait: %s", io->id, strerror(errno));
            break;
        }
        for (int i = 0; i < n; i++) {
            epitem *it = evs[i].data.ptr;
            if (it->kind == EPI_LISTEN) {
                accept_all(io);
                continue;
            }
            if (it->kind == EPI_WAKE) {
                u64 value;
                while (read(io->wake_fd, &value, sizeof(value)) > 0) {}
                process_messages(io);
                continue;
            }
            conn *c = (conn *)it;
            if (c->state == CS_CLOSED)
                continue;
            u32 e = evs[i].events;
            if (e & (EPOLLERR | EPOLLHUP)) {
                conn_close(io, c);
                continue;
            }
            if (e & EPOLLOUT) {
                conn_flush(io, c);
                if (c->state == CS_CLOSED)
                    continue;
            }
            if (e & EPOLLIN)
                conn_on_readable(io, c);
        }
        process_messages(io);
        free_dead(io);

        u64 now = now_ms();
        if (now >= next_sweep) {
            sweep_timeouts(io);
            free_dead(io);
            next_sweep = now + SWEEP_INTERVAL_MS;
        }
    }

    while (io->head)
        conn_close(io, io->head);
    free_dead(io);
    close(io->epfd);
    close(io->listen_fd);
    close(io->wake_fd);

    return NULL;
}

s32 io_thread_start(io_thread *io, struct server *srv, s32 id, s32 listen_fd)
{
    memset(io, 0, sizeof(*io));
    io->srv = srv;
    io->id = id;
    io->listen_fd = listen_fd;
    io->wake_fd = -1;
    io->listen_item.kind = EPI_LISTEN;
    io->wake_item.kind = EPI_WAKE;
    if (pthread_mutex_init(&io->message_lock, NULL) != 0)
        return -1;

    io->wake_fd = eventfd(0, EFD_NONBLOCK | EFD_CLOEXEC);
    if (io->wake_fd < 0) {
        pthread_mutex_destroy(&io->message_lock);
        return -1;
    }

    io->epfd = epoll_create1(EPOLL_CLOEXEC);
    if (io->epfd < 0) {
        close(io->wake_fd);
        pthread_mutex_destroy(&io->message_lock);
        return -1;
    }
    struct epoll_event ev = { .events = EPOLLIN, .data.ptr = &io->listen_item };
    if (epoll_ctl(io->epfd, EPOLL_CTL_ADD, listen_fd, &ev) < 0) {
        close(io->epfd);
        close(io->wake_fd);
        pthread_mutex_destroy(&io->message_lock);
        return -1;
    }
    struct epoll_event wake_ev = { .events = EPOLLIN, .data.ptr = &io->wake_item };
    if (epoll_ctl(io->epfd, EPOLL_CTL_ADD, io->wake_fd, &wake_ev) < 0) {
        close(io->epfd);
        close(io->wake_fd);
        pthread_mutex_destroy(&io->message_lock);
        return -1;
    }

    if (pthread_create(&io->th, NULL, io_main, io) != 0) {
        close(io->epfd);
        close(io->wake_fd);
        pthread_mutex_destroy(&io->message_lock);
        return -1;
    }

    return 0;
}

void io_thread_join(io_thread *io)
{
    pthread_join(io->th, NULL);
    io_message *m = io->messages_head;
    while (m) {
        io_message *next = m->next;
        free(m);
        m = next;
    }
    pthread_mutex_destroy(&io->message_lock);
}

static void server_queue_packet(struct server *srv, const void *body,
                                u32 body_len, s32 exclude_entity_id,
                                s32 target_entity_id)
{
    if (atomic_load_explicit(&srv->stop, memory_order_acquire))
        return;
    if (body_len > UINT32_MAX - 5u)
        return;
    u32 frame_cap = body_len + 5u;
    u8 *frame = malloc(frame_cap);
    if (!frame)
        return;
    buf_writer w = buf_writer_init(frame, frame_cap);
    buf_frame_write(&w, &(buf_writer){ .p = (u8 *)body, .len = body_len,
                                       .cap = body_len, .err = false });
    if (w.err) {
        free(frame);
        return;
    }

    for (s32 i = 0; i < srv->nio; i++) {
        io_thread *io = &srv->io[i];
        io_message *m = malloc(sizeof(*m) + w.len);
        if (!m)
            continue;
        m->next = NULL;
        m->len = w.len;
        m->exclude_entity_id = exclude_entity_id;
        m->target_entity_id = target_entity_id;
        memcpy(m->data, frame, w.len);
        pthread_mutex_lock(&io->message_lock);
        if (io->messages_tail)
            io->messages_tail->next = m;
        else
            io->messages_head = m;
        io->messages_tail = m;
        pthread_mutex_unlock(&io->message_lock);
        u64 one = 1;
        (void)write(io->wake_fd, &one, sizeof(one));
    }
    free(frame);
}

void server_broadcast_packet(struct server *srv, const void *body, u32 body_len,
                             s32 exclude_entity_id)
{
    server_queue_packet(srv, body, body_len, exclude_entity_id, -1);
}

void server_send_packet_to_entity(struct server *srv, const void *body,
                                  u32 body_len, s32 entity_id)
{
    server_queue_packet(srv, body, body_len, -1, entity_id);
}

s32 conn_send(conn *c, const void *data, u32 n)
{
    io_thread *io = c->io;
    const u8 *ptr = data;

    if (c->state == CS_CLOSED)
        return -1;

    if (!conn_has_pending(c)) {
        c->write_off = c->write_len = 0;
        while (n > 0) {
            s32 w = send(c->fd, ptr, n, MSG_NOSIGNAL);
            if (w > 0) {
                ptr += w;
                n -= (u32)w;
                stat_add(&io->bytes_out, (u64)w);
            } else if (w < 0 && errno == EINTR) {
                continue;
            } else if (w < 0 && (errno == EAGAIN || errno == EWOULDBLOCK)) {
                break;
            } else {
                conn_close(io, c);
                return -1;
            }
        }
    }

    if (n == 0)
        return 0;

    u32 pending = c->write_len - c->write_off;
    if (pending + n > WRITE_BUFFER_MAX) {
        conn_close(io, c);
        return -1;
    }

    if (c->write_len + n > c->write_cap) {
        if (c->write_off) {
            memmove(c->write_buf, c->write_buf + c->write_off, pending);
            c->write_len = (u32)pending;
            c->write_off = 0;
        }

        if (c->write_len + n > c->write_cap) {
            u32 cap = c->write_cap ? c->write_cap : 512;
            while (cap < c->write_len + n)
                cap *= 2;
            uint8_t *nb = realloc(c->write_buf, cap);
            if (!nb) {
                conn_close(io, c);
                return -1;
            }
            c->write_buf = nb;
            c->write_cap = cap;
        }
    }
    memcpy(c->write_buf + c->write_len, ptr, n);
    c->write_len += (u32)n;
    if (!c->want_out) {
        c->want_out = true;
        conn_set_events(c);
    }

    return 0;
}

void conn_close_after_flush(conn *c)
{
    c->close_after_flush = true;
}
