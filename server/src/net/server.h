#ifndef HS_NET_SERVER_H
#define HS_NET_SERVER_H

#include <singularity/base.h>
#include <stdatomic.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include "net/io.h"

typedef struct {
    const char *bind_addr;
    u16 port;
    s32 io_threads;
    u32 max_players;
    u32 max_conns;
    const char *motd;
} server_config;

typedef struct {
    s32 entity_id;
    char username[17];
    u8 uuid[16];
    f64 x, y, z;
    f32 yaw, pitch;
    s32 held_item_id, held_item_count;
    u8 pose, game_mode;
} server_player;

typedef struct {
    s32 x, y, z;
    s32 state_id;
} server_block_override;

typedef struct server {
    server_config cfg;
    atomic_bool stop;
    atomic_uint online;
    char motd_escaped[512];
    io_thread *io;
    s32 nio;
    pthread_mutex_t players_lock;
    server_player *players;
    u32 player_count, player_capacity;
    s32 next_entity_id;
    pthread_mutex_t world_lock;
    server_block_override *blocks;
    u32 block_count, block_capacity;
} server;

typedef struct {
    u64 accepted, closed, bytes_in, bytes_out;
} server_stats;

server *server_create(const server_config *cfg);
s32 server_start(server *s);
void server_stop(server *s);
void server_destroy(server *s);
void server_get_stats(server *s, server_stats *out);

#endif
