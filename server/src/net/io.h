#ifndef HS_NET_IO_H
#define HS_NET_IO_H

#include <singularity/base.h>
#include <singularity/processor.h>
#include <stdatomic.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <pthread.h>

struct server;
struct protocol_layer;

typedef enum {
    CS_HANDSHAKE,
    CS_STATUS,
    CS_LOGIN,
    CS_CONFIGURATION,
    CS_PLAY,
    CS_CLOSED
} conn_state;

enum { EPI_LISTEN = 1, EPI_CONN = 2, EPI_WAKE = 3 };
typedef struct {
    u8 kind;
} epitem;

typedef struct io_message {
    struct io_message *next;
    u32 len;
    s32 exclude_entity_id;
    s32 target_entity_id;
    u8 data[];
} io_message;

#define READ_BUFFER_CAP 2048u
#define WRITE_BUFFER_MAX (2u * 1024u * 1024u)

typedef struct conn {
    epitem item;
    s32 fd;
    conn_state state;
    b8 close_after_flush;
    b8 want_out;
    b8 status_requested;
    u64 last_active_ms;
    u64 last_keepalive_ms;
    s64 keepalive_token;
    char username[17];
    f64 player_x, player_y, player_z;
    s32 chunk_center_x, chunk_center_z;
    s32 chunk_stream_x, chunk_stream_z;
    s32 chunk_stream_old_x, chunk_stream_old_z;
    s32 chunk_stream_next_x, chunk_stream_next_z;
    s32 entity_id;
    f32 player_yaw, player_pitch;
    f64 speed_multiplier;
    s32 selected_block_state;
    s32 hotbar_block_states[9];
    u8 selected_hotbar_slot;
    u8 player_pose;
    u8 game_mode;
    u8 player_input_flags;
    s32 inventory_item_ids[46];
    s32 inventory_counts[46];
    u8 player_uuid[16];
    b8 player_registered;
    b8 has_player_position;
    b8 has_chunk_center;
    b8 chunk_stream_pending;
    struct io_thread *io;
    const struct protocol_layer *protocol_layer;
    struct conn *prev, *next;
    struct conn *dead_next;

    u32 read_len;
    u8 *write_buf;
    u32 write_len, write_off, write_cap;
    u8 read_buf[READ_BUFFER_CAP];
} conn;

typedef struct io_thread {
    pthread_t th;
    struct server *srv;
    s32 id;
    s32 epfd;
    s32 listen_fd;
    s32 wake_fd;
    epitem listen_item;
    epitem wake_item;
    pthread_mutex_t message_lock;
    io_message *messages_head, *messages_tail;
    conn *head;
    conn *dead;
    u32 nconns;

    alignas(CACHELINE) atomic_uint_fast64_t accepted;
    atomic_uint_fast64_t closed;
    atomic_uint_fast64_t bytes_in;
    atomic_uint_fast64_t bytes_out;
} io_thread;

s32 io_thread_start(io_thread *io, struct server *srv, s32 id, s32 listen_fd);
void io_thread_join(io_thread *io);

s32 conn_send(conn *c, const void *data, u32 n);

void conn_close_after_flush(conn *c);
void server_broadcast_packet(struct server *srv, const void *body, u32 body_len,
                             s32 exclude_entity_id);
void server_send_packet_to_entity(struct server *srv, const void *body,
                                  u32 body_len, s32 entity_id);

#endif
