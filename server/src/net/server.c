#include "net/server.h"
#include <singularity/base.h>
#include <singularity/log.h>
#include <singularity/processor.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <netdb.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <unistd.h>

static void json_escape(char *dst, u32 cap, const char *src)
{
    u32 o = 0;
    for (; *src; src++) {
        u8 ch = (u8)*src;
        char tmp[8];
        u32 n;
        if (ch == '"' || ch == '\\') {
            tmp[0] = '\\';
            tmp[1] = (char)ch;
            n = 2;
        } else if (ch < 0x20) {
            n = (u32)snprintf(tmp, sizeof tmp, "\\u%04x", ch);
        } else {
            tmp[0] = (char)ch;
            n = 1;
        }
        if (o + n + 1 > cap)
            break;
        memcpy(dst + o, tmp, n);
        o += n;
    }
    dst[o] = '\0';
}

server *server_create(const server_config *cfg)
{
    server *s = calloc(1, sizeof(*s));
    if (!s)
        return NULL;
    s->cfg = *cfg;
    atomic_init(&s->stop, false);
    atomic_init(&s->online, 0);
    s->player_capacity = cfg->max_players ? cfg->max_players : 20;
    s->players = calloc(s->player_capacity, sizeof(*s->players));
    if (!s->players) {
        free(s);
        return NULL;
    }
    if (pthread_mutex_init(&s->players_lock, NULL) != 0) {
        free(s->players);
        free(s);
        return NULL;
    }
    if (pthread_mutex_init(&s->world_lock, NULL) != 0) {
        pthread_mutex_destroy(&s->players_lock);
        free(s->players);
        free(s);
        return NULL;
    }
    s->next_entity_id = 2;
    json_escape(s->motd_escaped, sizeof(s->motd_escaped), cfg->motd ? cfg->motd : "");
    s->nio = cfg->io_threads > 0 ? cfg->io_threads : 1;
    s->io = aligned_alloc(CACHELINE, (u32)s->nio * sizeof(io_thread));
    if (!s->io) {
        pthread_mutex_destroy(&s->world_lock);
        pthread_mutex_destroy(&s->players_lock);
        free(s->players);
        free(s);
        return NULL;
    }
    memset(s->io, 0, (u32)s->nio * sizeof(io_thread));

    return s;
}

static int make_listener(const server_config *cfg)
{
    struct addrinfo hints = {
        .ai_family = AF_UNSPEC,
        .ai_socktype = SOCK_STREAM,
        .ai_flags = AI_PASSIVE | AI_NUMERICSERV | AI_NUMERICHOST
    };
    struct addrinfo *res = NULL;

    char port[8];
    snprintf(port, sizeof(port), "%u", cfg->port);

    s32 rc = getaddrinfo(cfg->bind_addr, port, &hints, &res);
    if (rc != 0 || !res) {
        SG_LOG_ERROR("bad bind address '%s' : %s", cfg->bind_addr, gai_strerror(rc));
        return -1;
    }

    s32 fd = socket(res->ai_family, res->ai_socktype | SOCK_NONBLOCK | SOCK_CLOEXEC, 0);
    if (fd < 0) {
        SG_LOG_ERROR("socket: %s", strerror(errno));
        freeaddrinfo(res);
        return -1;
    }
    s32 one = 1, zero = 0;
    setsockopt(fd, SOL_SOCKET, SO_REUSEADDR, &one, sizeof(one));
    setsockopt(fd, SOL_SOCKET, SO_REUSEPORT, &one, sizeof(one));
    if (res->ai_family == AF_INET6)
        setsockopt(fd, IPPROTO_IPV6, IPV6_V6ONLY, &zero, sizeof(zero));

    if (bind(fd, res->ai_addr, res->ai_addrlen) < 0 || listen(fd, 4096) < 0) {
        SG_LOG_ERROR("bind/listen %s:%u: %s", cfg->bind_addr, cfg->port, strerror(errno));
        close(fd);
        freeaddrinfo(res);
        return -1;
    }
    freeaddrinfo(res);
    return fd;
}

s32 server_start(server *s)
{
    int started = 0;
    for (int i = 0; i < s->nio; i++) {
        int fd = make_listener(&s->cfg);
        if (fd < 0)
            goto fail;
        if (io_thread_start(&s->io[i], s, i, fd) < 0) {
            close(fd);
            SG_LOG_ERROR("failed to start io-%d", i);
            goto fail;
        }
        started++;
    }
    return 0;

fail:
    atomic_store_explicit(&s->stop, true, memory_order_release);
    for (int i = 0; i < started; i++)
        io_thread_join(&s->io[i]);
    return -1;
}

void server_stop(server *s)
{
    atomic_store_explicit(&s->stop, true, memory_order_release);
    for (int i = 0; i < s->nio; i++)
        io_thread_join(&s->io[i]);
}

void server_destroy(server *s)
{
    if (!s)
        return;
    free(s->io);
    pthread_mutex_destroy(&s->world_lock);
    pthread_mutex_destroy(&s->players_lock);
    free(s->players);
    free(s->blocks);
    free(s);
}

void server_get_stats(server *s, server_stats *out)
{
    memset(out, 0, sizeof *out);
    for (int i = 0; i < s->nio; i++) {
        io_thread *io = &s->io[i];
        out->accepted += atomic_load_explicit(&io->accepted, memory_order_relaxed);
        out->closed += atomic_load_explicit(&io->closed, memory_order_relaxed);
        out->bytes_in += atomic_load_explicit(&io->bytes_in, memory_order_relaxed);
        out->bytes_out += atomic_load_explicit(&io->bytes_out, memory_order_relaxed);
    }
}
