#include "proto/handlers.h"

#include <singularity/log.h>

#include "core/nbt.h"
#include "net/io.h"
#include "net/server.h"
#include "proto/versions/v26_3/proto.h"
#include "blocks.h"
#include "block_states.h"
#include "registries.h"

#include <math.h>
#include <stdio.h>
#include <sys/stat.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

#define CHUNK_VIEW_RADIUS 32
#define CHUNK_SIMULATION_DISTANCE 8
#define CHUNK_BATCH_SIZE 24

#define PKT_S2C_PLAY_LOGIN \
    PKT_26_3_PLAY_S2C_LOGIN
#define PKT_S2C_PLAY_PLAYER_POSITION \
    PKT_26_3_PLAY_S2C_PLAYER_POSITION
#define PKT_S2C_PLAY_SET_CHUNK_CACHE_CENTER \
    PKT_26_3_PLAY_S2C_SET_CHUNK_CACHE_CENTER
#define PKT_S2C_PLAY_CHUNK_BATCH_FINISHED \
    PKT_26_3_PLAY_S2C_CHUNK_BATCH_FINISHED
#define PKT_S2C_PLAY_CHUNK_BATCH_START \
    PKT_26_3_PLAY_S2C_CHUNK_BATCH_START
#define PKT_S2C_PLAY_LEVEL_CHUNK_WITH_LIGHT \
    PKT_26_3_PLAY_S2C_LEVEL_CHUNK_WITH_LIGHT
#define PKT_S2C_PLAY_GAME_EVENT \
    PKT_26_3_PLAY_S2C_GAME_EVENT
#define PKT_S2C_PLAY_PLAYER_INFO_UPDATE PKT_26_3_PLAY_S2C_PLAYER_INFO_UPDATE
#define PKT_S2C_PLAY_PLAYER_INFO_REMOVE PKT_26_3_PLAY_S2C_PLAYER_INFO_REMOVE
#define PKT_S2C_PLAY_ADD_ENTITY PKT_26_3_PLAY_S2C_ADD_ENTITY
#define PKT_S2C_PLAY_REMOVE_ENTITIES PKT_26_3_PLAY_S2C_REMOVE_ENTITIES
#define PKT_S2C_PLAY_ENTITY_POSITION_SYNC PKT_26_3_PLAY_S2C_ENTITY_POSITION_SYNC
#define PKT_S2C_PLAY_BLOCK_CHANGED_ACK PKT_26_3_PLAY_S2C_BLOCK_CHANGED_ACK
#define PKT_S2C_PLAY_BLOCK_UPDATE PKT_26_3_PLAY_S2C_BLOCK_UPDATE
#define PKT_S2C_PLAY_PLAYER_ABILITIES PKT_26_3_PLAY_S2C_PLAYER_ABILITIES
#define PKT_S2C_PLAY_UPDATE_ATTRIBUTES PKT_26_3_PLAY_S2C_UPDATE_ATTRIBUTES
#define PKT_S2C_PLAY_ANIMATE PKT_26_3_PLAY_S2C_ANIMATE
#define PKT_S2C_PLAY_HURT_ANIMATION PKT_26_3_PLAY_S2C_HURT_ANIMATION
#define PKT_S2C_PLAY_ROTATE_HEAD PKT_26_3_PLAY_S2C_ROTATE_HEAD
#define PKT_S2C_PLAY_SWING_ANIMATION PKT_26_3_PLAY_S2C_SWING_ANIMATION
#define PKT_S2C_PLAY_SET_EQUIPMENT PKT_26_3_PLAY_S2C_SET_EQUIPMENT
#define PKT_S2C_PLAY_CONTAINER_SET_CONTENT PKT_26_3_PLAY_S2C_CONTAINER_SET_CONTENT

#define PKT_C2S_PLAY_ACCEPT_TELEPORTATION \
    PKT_26_3_PLAY_C2S_ACCEPT_TELEPORTATION
#define PKT_C2S_PLAY_PLAYER_LOADED \
    PKT_26_3_PLAY_C2S_PLAYER_LOADED
#define PKT_C2S_PLAY_KEEP_ALIVE \
    PKT_26_3_PLAY_C2S_KEEP_ALIVE
#define PKT_C2S_PLAY_MOVE_POS PKT_26_3_PLAY_C2S_MOVE_PLAYER_POS
#define PKT_C2S_PLAY_MOVE_POS_ROT PKT_26_3_PLAY_C2S_MOVE_PLAYER_POS_ROT
#define PKT_C2S_PLAY_MOVE_ROT PKT_26_3_PLAY_C2S_MOVE_PLAYER_ROT
#define PKT_C2S_PLAY_MOVE_STATUS PKT_26_3_PLAY_C2S_MOVE_PLAYER_STATUS_ONLY
#define PKT_C2S_PLAY_BUNDLE_ITEM_SELECTED \
    PKT_26_3_PLAY_C2S_BUNDLE_ITEM_SELECTED
#define PKT_S2C_PLAY_FORGET_CHUNK PKT_26_3_PLAY_S2C_FORGET_LEVEL_CHUNK
#define PKT_C2S_PLAY_PLAYER_ACTION PKT_26_3_PLAY_C2S_PLAYER_ACTION
#define PKT_C2S_PLAY_USE_ITEM_ON PKT_26_3_PLAY_C2S_USE_ITEM_ON
#define PKT_C2S_PLAY_SET_CARRIED_ITEM PKT_26_3_PLAY_C2S_SET_CARRIED_ITEM
#define PKT_C2S_PLAY_SET_CREATIVE_MODE_SLOT PKT_26_3_PLAY_C2S_SET_CREATIVE_MODE_SLOT
#define PKT_C2S_PLAY_ATTACK PKT_26_3_PLAY_C2S_ATTACK
#define PKT_C2S_PLAY_PUNCH PKT_26_3_PLAY_C2S_PUNCH
#define PKT_C2S_PLAY_CHAT_COMMAND PKT_26_3_PLAY_C2S_CHAT_COMMAND
#define PKT_C2S_PLAY_CHAT_COMMAND_SIGNED PKT_26_3_PLAY_C2S_CHAT_COMMAND_SIGNED
#define PKT_C2S_PLAY_CHAT PKT_26_3_PLAY_C2S_CHAT
#define PKT_C2S_PLAY_CLIENT_TICK_END PKT_26_3_PLAY_C2S_CLIENT_TICK_END
#define PKT_C2S_PLAY_INPUT PKT_26_3_PLAY_C2S_PLAYER_INPUT
#define PKT_C2S_PLAY_CHUNK_BATCH_RECEIVED PKT_26_3_PLAY_C2S_CHUNK_BATCH_RECEIVED

static void buf_s32_write(buf_writer *w, s32 value)
{
    u32 bits = (u32)value;
    buf_u8_write(w, (u8)(bits >> 24));
    buf_u8_write(w, (u8)(bits >> 16));
    buf_u8_write(w, (u8)(bits >> 8));
    buf_u8_write(w, (u8)bits);
}

static void buf_s16_write(buf_writer *w, s16 value)
{
    u16 bits = (u16)value;
    buf_u8_write(w, (u8)(bits >> 8));
    buf_u8_write(w, (u8)bits);
}

static void buf_f32_write(buf_writer *w, f32 value)
{
    u32 bits;
    memcpy(&bits, &value, sizeof(bits));
    buf_s32_write(w, (s32)bits);
}

static void buf_f64_write(buf_writer *w, f64 value)
{
    u64 bits;
    memcpy(&bits, &value, sizeof(bits));
    buf_s64_write(w, (s64)bits);
}

static void write_player_info_entry(buf_writer *w, const server_player *p)
{
    buf_bytes_write(w, p->uuid, sizeof(p->uuid));
    buf_string_write(w, p->username, (u32)strlen(p->username));
    buf_varint_write(w, 0); /* No signed skin/profile properties in offline mode. */
    buf_varint_write(w, p->game_mode);
    buf_u8_write(w, 1);     /* Listed in the tab list. */
}

static void save_player_inventory(conn *c);
static void update_current_player_pose(conn *c);
static void broadcast_player_equipment(conn *c);
static s32 chunk_coord(f64 value);
static int send_cache_center(conn *c, s32 x, s32 z);
static int send_chunk_batch(conn *c, s32 cx, s32 cz, s32 old_x, s32 old_z,
                            b8 initial);
static int send_next_chunk_batch(conn *c);
static int send_forget_chunk(conn *c, s32 x, s32 z);
void play_save_player_position(conn *c);

static void write_item_stack(buf_writer *w, s32 item_id, s32 count)
{
    if (count <= 0 || item_id < 0) {
        buf_varint_write(w, 0);
        return;
    }
    buf_varint_write(w, count);
    buf_varint_write(w, item_id);
    buf_varint_write(w, 0); /* No component overrides. */
    buf_varint_write(w, 0); /* No removed components. */
}

static int send_player_equipment(conn *c, s32 entity_id, s32 item_id, s32 count)
{
    u8 buf[32];
    buf_writer w = buf_writer_init(buf, sizeof(buf));
    buf_varint_write(&w, PKT_S2C_PLAY_SET_EQUIPMENT);
    buf_varint_write(&w, entity_id);
    buf_u8_write(&w, 0); /* Main hand. */
    write_item_stack(&w, item_id, count);
    return !w.err ? send_packet(c, &w) : -1;
}

static int send_player_inventory(conn *c)
{
    u8 buf[512];
    buf_writer w = buf_writer_init(buf, sizeof(buf));
    buf_varint_write(&w, PKT_S2C_PLAY_CONTAINER_SET_CONTENT);
    buf_varint_write(&w, 0); /* Player inventory window. */
    buf_varint_write(&w, 0); /* State id. */
    buf_varint_write(&w, 46);
    for (u32 i = 0; i < 46; i++)
        write_item_stack(&w, c->inventory_item_ids[i], c->inventory_counts[i]);
    write_item_stack(&w, -1, 0); /* Carried item. */
    return !w.err ? send_packet(c, &w) : -1;
}

static int send_command_tree(conn *c)
{
    u8 buf[256];
    buf_writer w = buf_writer_init(buf, sizeof(buf));
    buf_varint_write(&w, PKT_26_3_PLAY_S2C_COMMANDS);
    buf_varint_write(&w, 9);
    buf_u8_write(&w, 0); /* Root node. */
    buf_varint_write(&w, 3);
    buf_varint_write(&w, 1);
    buf_varint_write(&w, 4);
    buf_varint_write(&w, 6);
    buf_u8_write(&w, 1); /* Literal with children. */
    buf_varint_write(&w, 2);
    buf_varint_write(&w, 2);
    buf_varint_write(&w, 3);
    buf_string_write(&w, "gamemode", 8);
    buf_u8_write(&w, 5); /* Executable literal. */
    buf_varint_write(&w, 0);
    buf_string_write(&w, "survival", 8);
    buf_u8_write(&w, 5);
    buf_varint_write(&w, 0);
    buf_string_write(&w, "creative", 8);
    buf_u8_write(&w, 1); /* /speed literal. */
    buf_varint_write(&w, 1);
    buf_varint_write(&w, 5);
    buf_string_write(&w, "speed", 5);
    buf_u8_write(&w, 6); /* Executable double argument. */
    buf_varint_write(&w, 0);
    buf_string_write(&w, "multiplier", 10);
    buf_varint_write(&w, 2); /* brigadier:double parser ID. */
    buf_u8_write(&w, 0); /* No minimum/maximum properties. */
    buf_u8_write(&w, 1); /* /tp literal. */
    buf_varint_write(&w, 1);
    buf_varint_write(&w, 7);
    buf_string_write(&w, "tp", 2);
    buf_u8_write(&w, 6); /* Executable player argument with destination child. */
    buf_varint_write(&w, 1);
    buf_varint_write(&w, 8);
    buf_string_write(&w, "target", 6);
    buf_varint_write(&w, 5); /* brigadier:string parser ID. */
    buf_varint_write(&w, 0); /* Word mode. */
    buf_u8_write(&w, 6); /* Executable destination argument. */
    buf_varint_write(&w, 0);
    buf_string_write(&w, "destination", 11);
    buf_varint_write(&w, 5); /* brigadier:string parser ID. */
    buf_varint_write(&w, 0); /* Word mode. */
    buf_varint_write(&w, 0); /* Root node index. */
    return !w.err ? send_packet(c, &w) : -1;
}

static void write_player_info_packet(buf_writer *w, const server_player *players,
                                     u32 count)
{
    buf_varint_write(w, PKT_S2C_PLAY_PLAYER_INFO_UPDATE);
    buf_u8_write(w, 0x0d); /* Add player, update game mode, update listed. */
    buf_varint_write(w, (s32)count);
    for (u32 i = 0; i < count; i++)
        write_player_info_entry(w, &players[i]);
}

static int send_player_entity(conn *c, const server_player *p)
{
    u8 buf[96];
    buf_writer w = buf_writer_init(buf, sizeof(buf));
    buf_varint_write(&w, PKT_S2C_PLAY_ADD_ENTITY);
    buf_varint_write(&w, p->entity_id);
    buf_bytes_write(&w, p->uuid, sizeof(p->uuid));
    buf_varint_write(&w, 159); /* minecraft:player entity type */
    buf_f64_write(&w, p->x);
    buf_f64_write(&w, p->y);
    buf_f64_write(&w, p->z);
    buf_u8_write(&w, 0); /* Zero initial velocity, LP Vec3 codec. */
    buf_u8_write(&w, (u8)(s32)(p->pitch * (256.0f / 360.0f)));
    buf_u8_write(&w, (u8)(s32)(p->yaw * (256.0f / 360.0f)));
    buf_u8_write(&w, (u8)(s32)(p->yaw * (256.0f / 360.0f)));
    buf_varint_write(&w, 0); /* Entity data. */
    return !w.err ? send_packet(c, &w) : -1;
}

static void write_player_entity_packet(buf_writer *w, const server_player *p)
{
    buf_varint_write(w, PKT_S2C_PLAY_ADD_ENTITY);
    buf_varint_write(w, p->entity_id);
    buf_bytes_write(w, p->uuid, sizeof(p->uuid));
    buf_varint_write(w, 159);
    buf_f64_write(w, p->x);
    buf_f64_write(w, p->y);
    buf_f64_write(w, p->z);
    buf_u8_write(w, 0);
    buf_u8_write(w, (u8)(s32)(p->pitch * (256.0f / 360.0f)));
    buf_u8_write(w, (u8)(s32)(p->yaw * (256.0f / 360.0f)));
    buf_u8_write(w, (u8)(s32)(p->yaw * (256.0f / 360.0f)));
    buf_varint_write(w, 0);
}

static b8 player_registry_add(conn *c, server_player **snapshot, u32 *snapshot_count)
{
    server *srv = c->io->srv;
    pthread_mutex_lock(&srv->players_lock);
    if (srv->player_count >= srv->player_capacity) {
        pthread_mutex_unlock(&srv->players_lock);
        return false;
    }
    server_player *p = &srv->players[srv->player_count++];
    p->entity_id = c->entity_id;
    memcpy(p->username, c->username, sizeof(p->username));
    memcpy(p->uuid, c->player_uuid, sizeof(p->uuid));
    p->x = c->player_x; p->y = c->player_y; p->z = c->player_z;
    p->yaw = c->player_yaw; p->pitch = c->player_pitch;
    p->held_item_id = c->inventory_item_ids[36 + c->selected_hotbar_slot];
    p->held_item_count = c->inventory_counts[36 + c->selected_hotbar_slot];
    p->pose = c->player_pose;
    p->game_mode = c->game_mode;
    c->entity_id = p->entity_id;
    c->player_registered = true;
    server_player *copy = malloc(srv->player_count * sizeof(*copy));
    if (!copy) {
        srv->player_count--;
        c->player_registered = false;
        pthread_mutex_unlock(&srv->players_lock);
        return false;
    }
    memcpy(copy, srv->players, srv->player_count * sizeof(*copy));
    *snapshot = copy;
    *snapshot_count = srv->player_count;
    pthread_mutex_unlock(&srv->players_lock);
    return true;
}

static void player_registry_update(conn *c)
{
    server *srv = c->io->srv;
    pthread_mutex_lock(&srv->players_lock);
    for (u32 i = 0; i < srv->player_count; i++) {
        server_player *p = &srv->players[i];
        if (p->entity_id != c->entity_id) continue;
        p->x = c->player_x; p->y = c->player_y; p->z = c->player_z;
        p->yaw = c->player_yaw; p->pitch = c->player_pitch;
        p->held_item_id = c->inventory_item_ids[36 + c->selected_hotbar_slot];
        p->held_item_count = c->inventory_counts[36 + c->selected_hotbar_slot];
        p->pose = c->player_pose;
        p->game_mode = c->game_mode;
        break;
    }
    pthread_mutex_unlock(&srv->players_lock);
}

static void broadcast_player_position(conn *c, b8 on_ground)
{
    u8 buf[96];
    buf_writer w = buf_writer_init(buf, sizeof(buf));
    buf_varint_write(&w, PKT_S2C_PLAY_ENTITY_POSITION_SYNC);
    buf_varint_write(&w, c->entity_id);
    buf_varint_write(&w, 0); /* Linear position path. */
    buf_f64_write(&w, c->player_x);
    buf_f64_write(&w, c->player_y);
    buf_f64_write(&w, c->player_z);
    buf_f32_write(&w, c->player_yaw);
    buf_f32_write(&w, c->player_pitch);
    buf_u8_write(&w, on_ground);
    if (!w.err)
        server_broadcast_packet(c->io->srv, w.p, w.len, c->entity_id);
    u8 head_buf[16];
    w = buf_writer_init(head_buf, sizeof(head_buf));
    buf_varint_write(&w, PKT_S2C_PLAY_ROTATE_HEAD);
    buf_varint_write(&w, c->entity_id);
    buf_u8_write(&w, (u8)(s32)(c->player_yaw * (256.0f / 360.0f)));
    if (!w.err) server_broadcast_packet(c->io->srv, w.p, w.len, c->entity_id);
}

static void write_player_pose_packet(buf_writer *w, s32 entity_id, u8 pose)
{
    buf_varint_write(w, PKT_26_3_PLAY_S2C_SET_ENTITY_DATA);
    buf_varint_write(w, entity_id);
    buf_u8_write(w, 6);  /* Entity pose metadata index. */
    buf_varint_write(w, 20); /* Pose serializer. */
    buf_varint_write(w, pose);
    buf_u8_write(w, 0xff); /* Metadata terminator. */
}

static void send_player_pose(conn *c, s32 entity_id, u8 pose)
{
    u8 buf[16];
    buf_writer w = buf_writer_init(buf, sizeof(buf));
    write_player_pose_packet(&w, entity_id, pose);
    if (!w.err) (void)send_packet(c, &w);
}

static void broadcast_player_pose(conn *c)
{
    u8 buf[16];
    buf_writer w = buf_writer_init(buf, sizeof(buf));
    write_player_pose_packet(&w, c->entity_id, c->player_pose);
    if (!w.err)
        server_broadcast_packet(c->io->srv, w.p, w.len, c->entity_id);
}

static int send_player_abilities(conn *c);

static void send_game_mode_event(conn *c)
{
    u8 buf[8];
    buf_writer w = buf_writer_init(buf, sizeof(buf));
    buf_varint_write(&w, PKT_S2C_PLAY_GAME_EVENT);
    buf_u8_write(&w, 3); /* Change game mode. */
    buf_f32_write(&w, (f32)c->game_mode);
    if (!w.err) (void)send_packet(c, &w);
}

static void broadcast_game_mode_update(conn *c)
{
    u8 buf[32];
    buf_writer w = buf_writer_init(buf, sizeof(buf));
    buf_varint_write(&w, PKT_S2C_PLAY_PLAYER_INFO_UPDATE);
    buf_u8_write(&w, 0x04); /* Update game mode only. */
    buf_varint_write(&w, 1);
    buf_bytes_write(&w, c->player_uuid, sizeof(c->player_uuid));
    buf_varint_write(&w, c->game_mode);
    if (!w.err) server_broadcast_packet(c->io->srv, w.p, w.len, -1);
}

static void set_player_game_mode(conn *c, u8 mode)
{
    if (c->game_mode == mode) return;
    c->game_mode = mode;
    player_registry_update(c);
    send_game_mode_event(c);
    (void)send_player_abilities(c);
    broadcast_game_mode_update(c);
}

static void send_command_message(conn *c, const char *message)
{
    u8 buf[256];
    buf_writer w = buf_writer_init(buf, sizeof(buf));
    buf_varint_write(&w, PKT_26_3_PLAY_S2C_SYSTEM_CHAT);
    nbt_write_network_root_compound(&w);
    if (!nbt_write_string_tag(&w, "text", 4, message,
                              (u16)strlen(message))) return;
    nbt_write_end(&w);
    buf_u8_write(&w, 1); /* Overlay. */
    if (!w.err) (void)send_packet(c, &w);
}

static void broadcast_chat_message(conn *c, const char *message, u32 message_len)
{
    char text[320];
    int n = snprintf(text, sizeof(text), "<%s> %.*s", c->username,
                     (int)message_len, message);
    if (n < 0 || n >= (int)sizeof(text)) return;

    u8 buf[384];
    buf_writer w = buf_writer_init(buf, sizeof(buf));
    buf_varint_write(&w, PKT_26_3_PLAY_S2C_SYSTEM_CHAT);
    nbt_write_network_root_compound(&w);
    if (!nbt_write_string_tag(&w, "text", 4, text, (u16)n)) return;
    nbt_write_end(&w);
    buf_u8_write(&w, 0); /* Show in the chat window, not the action bar. */
    if (!w.err) server_broadcast_packet(c->io->srv, w.p, w.len, -1);
}

static b8 handle_chat_message(conn *c, buf_reader *r)
{
    const char *message = NULL;
    u32 len = buf_string_read(r, 256, &message);
    if (r->err) return false;
    r->p = r->end; /* Unsigned offline chat needs no signature validation. */
    if (!message || len == 0) return true;
    broadcast_chat_message(c, message, len);
    return true;
}

static void set_player_speed(conn *c, f64 multiplier)
{
    c->speed_multiplier = multiplier;
    u8 buf[64];
    buf_writer w = buf_writer_init(buf, sizeof(buf));
    buf_varint_write(&w, PKT_S2C_PLAY_UPDATE_ATTRIBUTES);
    buf_varint_write(&w, c->entity_id);
    buf_varint_write(&w, 1);  /* One attribute. */
    buf_varint_write(&w, 26); /* minecraft:movement_speed in 26.3. */
    buf_f64_write(&w, 0.1 * multiplier);
    buf_varint_write(&w, 0); /* No attribute modifiers. */
    if (!w.err) (void)send_packet(c, &w);
    char message[80];
    snprintf(message, sizeof(message), "Speed set to %.2gx", multiplier);
    send_command_message(c, message);
}

static b8 find_player(server *srv, const char *name, server_player *out)
{
    b8 found = false;
    pthread_mutex_lock(&srv->players_lock);
    for (u32 i = 0; i < srv->player_count; i++) {
        if (strcmp(srv->players[i].username, name) == 0) {
            *out = srv->players[i];
            found = true;
            break;
        }
    }
    pthread_mutex_unlock(&srv->players_lock);
    return found;
}

static void write_player_position_packet(buf_writer *w, s32 teleport_id,
                                         f64 x, f64 y, f64 z,
                                         f32 yaw, f32 pitch)
{
    buf_varint_write(w, PKT_S2C_PLAY_PLAYER_POSITION);
    buf_varint_write(w, teleport_id);
    buf_f64_write(w, x); buf_f64_write(w, y); buf_f64_write(w, z);
    buf_f64_write(w, 0.0); buf_f64_write(w, 0.0); buf_f64_write(w, 0.0);
    buf_f32_write(w, yaw); buf_f32_write(w, pitch);
    buf_s32_write(w, 0); /* No relative fields. */
}

static void teleport_player(conn *c, f64 x, f64 y, f64 z, f32 yaw, f32 pitch)
{
    c->player_x = x; c->player_y = y; c->player_z = z;
    c->player_yaw = yaw; c->player_pitch = pitch;
    c->has_player_position = true;
    player_registry_update(c);
    u8 buf[96];
    buf_writer w = buf_writer_init(buf, sizeof(buf));
    write_player_position_packet(&w, 1, x, y, z, yaw, pitch);
    if (!w.err) (void)send_packet(c, &w);
    broadcast_player_position(c, true);
    s32 cx = chunk_coord(x), cz = chunk_coord(z);
    if (!c->has_chunk_center || cx != c->chunk_center_x || cz != c->chunk_center_z) {
        s32 old_x = c->chunk_center_x, old_z = c->chunk_center_z;
        (void)send_cache_center(c, cx, cz);
        for (s32 oz = old_z - CHUNK_VIEW_RADIUS; oz <= old_z + CHUNK_VIEW_RADIUS; oz++)
            for (s32 ox = old_x - CHUNK_VIEW_RADIUS; ox <= old_x + CHUNK_VIEW_RADIUS; ox++)
                if (ox < cx - CHUNK_VIEW_RADIUS || ox > cx + CHUNK_VIEW_RADIUS ||
                    oz < cz - CHUNK_VIEW_RADIUS || oz > cz + CHUNK_VIEW_RADIUS)
                    (void)send_forget_chunk(c, ox, oz);
        c->chunk_center_x = cx; c->chunk_center_z = cz; c->has_chunk_center = true;
        (void)send_chunk_batch(c, cx, cz, old_x, old_z, false);
    }
    play_save_player_position(c);
}

static void teleport_entity(server *srv, const server_player *target,
                            f64 x, f64 y, f64 z, f32 yaw, f32 pitch)
{
    pthread_mutex_lock(&srv->players_lock);
    for (u32 i = 0; i < srv->player_count; i++) {
        if (srv->players[i].entity_id == target->entity_id) {
            srv->players[i].x = x; srv->players[i].y = y; srv->players[i].z = z;
            srv->players[i].yaw = yaw; srv->players[i].pitch = pitch;
            break;
        }
    }
    pthread_mutex_unlock(&srv->players_lock);

    u8 position_buf[96];
    buf_writer position = buf_writer_init(position_buf, sizeof(position_buf));
    write_player_position_packet(&position, 1, x, y, z, yaw, pitch);

    u8 sync_buf[64];
    buf_writer sync = buf_writer_init(sync_buf, sizeof(sync_buf));
    buf_varint_write(&sync, PKT_S2C_PLAY_ENTITY_POSITION_SYNC);
    buf_varint_write(&sync, target->entity_id);
    buf_varint_write(&sync, 0);
    buf_f64_write(&sync, x); buf_f64_write(&sync, y); buf_f64_write(&sync, z);
    buf_f32_write(&sync, yaw); buf_f32_write(&sync, pitch);
    buf_u8_write(&sync, 1);
    if (!sync.err) server_broadcast_packet(srv, sync.p, sync.len, -1);
    if (!position.err)
        server_send_packet_to_entity(srv, position.p, position.len, target->entity_id);
}

static void handle_teleport_command(conn *c, const char *arg1, const char *arg2)
{
    server *srv = c->io->srv;
    server_player first, destination;
    if (!arg2) {
        if (!find_player(srv, arg1, &destination)) {
            send_command_message(c, "Player not found");
            return;
        }
        teleport_player(c, destination.x, destination.y, destination.z,
                        destination.yaw, destination.pitch);
        send_command_message(c, "Teleported to player");
        return;
    }
    if (strcmp(arg1, "@s") == 0 || strcmp(arg1, "me") == 0) {
        if (!find_player(srv, arg2, &destination)) {
            send_command_message(c, "Player not found");
            return;
        }
        teleport_player(c, destination.x, destination.y, destination.z,
                        destination.yaw, destination.pitch);
        return;
    }
    if (!find_player(srv, arg1, &first)) {
        send_command_message(c, "Player not found");
        return;
    }
    if (strcmp(arg2, "@s") == 0 || strcmp(arg2, "me") == 0) {
        teleport_entity(srv, &first, c->player_x, c->player_y, c->player_z,
                        c->player_yaw, c->player_pitch);
        send_command_message(c, "Teleported player to you");
        return;
    }
    if (!find_player(srv, arg2, &destination)) {
        send_command_message(c, "Player not found");
        return;
    }
    teleport_entity(srv, &first, destination.x, destination.y, destination.z,
                    destination.yaw, destination.pitch);
    send_command_message(c, "Teleported player");
}

static void handle_chat_command(conn *c, buf_reader *r)
{
    const char *command = NULL;
    u32 len = buf_string_read(r, 256, &command);
    if (r->err || !command) return;
    r->p = r->end;
    while (len && command[0] == '/') { command++; len--; }
    if ((len == 17 && memcmp(command, "gamemode survival", 17) == 0) ||
        (len == 10 && memcmp(command, "gamemode s", 10) == 0) ||
        (len == 3 && memcmp(command, "gms", 3) == 0))
        set_player_game_mode(c, 0);
    else if ((len == 17 && memcmp(command, "gamemode creative", 17) == 0) ||
             (len == 10 && memcmp(command, "gamemode c", 10) == 0) ||
             (len == 3 && memcmp(command, "gmc", 3) == 0))
        set_player_game_mode(c, 1);
    else if (len > 6 && memcmp(command, "speed ", 6) == 0) {
        char value[32];
        u32 n = len - 6;
        if (n >= sizeof(value)) { send_command_message(c, "Usage: /speed <multiplier 0.1-1000>"); return; }
        memcpy(value, command + 6, n); value[n] = '\0';
        char *end = NULL;
        double multiplier = strtod(value, &end);
        if (!end || *end || !isfinite(multiplier) || multiplier < 0.1 || multiplier > 1000.0)
            send_command_message(c, "Usage: /speed <multiplier 0.1-1000>");
        else
            set_player_speed(c, multiplier);
    } else if (len > 3 && memcmp(command, "tp ", 3) == 0) {
        char args[64];
        u32 n = len - 3;
        if (n >= sizeof(args)) { send_command_message(c, "Usage: /tp <player> [destination]"); return; }
        memcpy(args, command + 3, n); args[n] = '\0';
        char *arg1 = args;
        char *space = strchr(args, ' ');
        if (space) {
            *space++ = '\0';
            while (*space == ' ') space++;
            if (!*space || strchr(space, ' ')) { send_command_message(c, "Usage: /tp <player> [destination]"); return; }
            handle_teleport_command(c, arg1, space);
        } else {
            handle_teleport_command(c, arg1, NULL);
        }
    }
}

static b8 handle_player_input(conn *c, buf_reader *r)
{
    u8 flags = buf_u8_read(r);
    if (r->err) return false;
    r->p = r->end;
    c->player_input_flags = flags;
    update_current_player_pose(c);
    return true;
}

void play_player_disconnect(conn *c)
{
    if (!c->player_registered) return;
    server *srv = c->io->srv;
    pthread_mutex_lock(&srv->players_lock);
    u32 index = srv->player_count;
    for (u32 i = 0; i < srv->player_count; i++)
        if (srv->players[i].entity_id == c->entity_id) { index = i; break; }
    if (index < srv->player_count) {
        if (index + 1 < srv->player_count)
            memmove(&srv->players[index], &srv->players[index + 1],
                    (srv->player_count - index - 1) * sizeof(*srv->players));
        srv->player_count--;
    }
    c->player_registered = false;
    pthread_mutex_unlock(&srv->players_lock);

    u32 online = atomic_load_explicit(&srv->online, memory_order_acquire);
    atomic_store_explicit(&srv->online, online - 1, memory_order_release);

    u8 buf[32];
    buf_writer w = buf_writer_init(buf, sizeof(buf));
    buf_varint_write(&w, PKT_S2C_PLAY_PLAYER_INFO_REMOVE);
    buf_varint_write(&w, 1);
    buf_bytes_write(&w, c->player_uuid, sizeof(c->player_uuid));
    if (!w.err) server_broadcast_packet(srv, w.p, w.len, -1);
    w = buf_writer_init(buf, sizeof(buf));
    buf_varint_write(&w, PKT_S2C_PLAY_REMOVE_ENTITIES);
    buf_varint_write(&w, 1);
    buf_varint_write(&w, c->entity_id);
    if (!w.err) server_broadcast_packet(srv, w.p, w.len, -1);
}

static int send_flat_chunk(conn *c, s32 chunk_x, s32 chunk_z)
{
    /* Void world with one stone block at world position (0, 0, 0). */
    u8 chunk_data_buf[8192];
    buf_writer chunk_data = buf_writer_init(chunk_data_buf, sizeof(chunk_data_buf));

    /* 26.3 heightmaps are a VarInt map of type -> packed long array. */
    buf_varint_write(&chunk_data, 3);
    for (s32 map = 0; map < 3; map++) {
        buf_varint_write(&chunk_data, map == 0 ? 1 : map == 1 ? 4 : 5);
        buf_varint_write(&chunk_data, 37);
        for (s32 word = 0; word < 37; word++) {
            u64 packed = 0;
            for (s32 slot = 0; slot < 7; slot++) {
                s32 index = word * 7 + slot;
                if (index == 0 && chunk_x == 0 && chunk_z == 0)
                    packed |= (u64)65 << (slot * 9); /* first air at y=1 */
            }
            buf_s64_write(&chunk_data, (s64)packed);
        }
    }

    u8 sections_buf[8192];
    buf_writer sections = buf_writer_init(sections_buf, sizeof(sections_buf));
    for (s32 section = 0; section < 24; section++) {
        b8 has_block = chunk_x == 0 && chunk_z == 0 && section == 4;
        buf_s16_write(&sections, has_block ? 1 : 0);
        buf_s16_write(&sections, 0); /* Fluid count. */
        if (has_block) {
            buf_u8_write(&sections, 4);
            buf_varint_write(&sections, 2);
            buf_varint_write(&sections, 1);
            buf_varint_write(&sections, 0); /* stone */
            for (s32 word = 0; word < 256; word++) {
                u64 packed = 0;
                for (s32 slot = 0; slot < 16; slot++) {
                    s32 block = word * 16 + slot;
                    s32 palette = block == 0 ? 0 : 1;
                    packed |= (u64)palette << (slot * 4);
                }
                buf_s64_write(&sections, (s64)packed);
            }
        } else {
            buf_u8_write(&sections, 0);
            buf_varint_write(&sections, 0); /* Single-value palette: air. */
        }
        buf_u8_write(&sections, 0);
        buf_varint_write(&sections, 41); /* plains biome registry id */
    }
    if (sections.err)
        return -1;
    buf_varint_write(&chunk_data, (s32)sections.len);
    buf_bytes_write(&chunk_data, sections.p, sections.len);
    buf_varint_write(&chunk_data, 0); /* No block entities. */
    if (chunk_data.err)
        return -1;

    u8 packet_buf[56000];
    buf_writer packet = buf_writer_init(packet_buf, sizeof(packet_buf));
    buf_varint_write(&packet, PKT_S2C_PLAY_LEVEL_CHUNK_WITH_LIGHT);
    buf_s32_write(&packet, chunk_x);
    buf_s32_write(&packet, chunk_z);
    buf_bytes_write(&packet, chunk_data.p, chunk_data.len);

    /* 26.3 light masks are byte-array BitSets; section bits are offset by one. */
    buf_varint_write(&packet, 4); /* Sky light mask byte count. */
    buf_u8_write(&packet, 0xfe);
    buf_u8_write(&packet, 0xff);
    buf_u8_write(&packet, 0xff);
    buf_u8_write(&packet, 0x01); /* Sections 0..23 (mask bits 1..24). */
    buf_varint_write(&packet, 0); /* Block light mask. */
    buf_varint_write(&packet, 4); /* Empty sky mask. */
    buf_u8_write(&packet, 0x01);
    buf_u8_write(&packet, 0);
    buf_u8_write(&packet, 0);
    buf_u8_write(&packet, 0x02); /* Boundary light sections. */
    buf_varint_write(&packet, 4); /* Empty block mask. */
    buf_u8_write(&packet, 0xff);
    buf_u8_write(&packet, 0xff);
    buf_u8_write(&packet, 0xff);
    buf_u8_write(&packet, 0x03); /* All 26 block-light sections are empty. */
    buf_varint_write(&packet, 24);
    for (s32 i = 0; i < 24; i++) {
        buf_varint_write(&packet, 2048);
        for (s32 j = 0; j < 2048; j++)
            buf_u8_write(&packet, 0xff);
    }
    buf_varint_write(&packet, 0); /* No block light arrays. */
    if (packet.err)
        return -1;
    int rc = send_packet(c, &packet);
    SG_LOG_DEBUG("io-%d: sending flat chunk (sections=%u packet=%u) rc=%d",
              c->io->id, sections.len, packet.len, rc);
    return rc;
}

static int send_chunk_overrides(conn *c, s32 chunk_x, s32 chunk_z);

static f64 buf_f64_read(buf_reader *r)
{
    u64 bits = (u64)buf_s64_read(r);
    f64 value;
    memcpy(&value, &bits, sizeof(value));
    return value;
}

static f32 buf_f32_read(buf_reader *r)
{
    u32 bits = ((u32)buf_u8_read(r) << 24) | ((u32)buf_u8_read(r) << 16) |
               ((u32)buf_u8_read(r) << 8) | (u32)buf_u8_read(r);
    f32 value;
    memcpy(&value, &bits, sizeof(value));
    return value;
}

static b8 handle_player_move(conn *c, s32 id, buf_reader *r)
{
    f64 x = c->player_x, y = c->player_y, z = c->player_z;
    f32 yaw = c->player_yaw, pitch = c->player_pitch;
    if (id == PKT_C2S_PLAY_MOVE_POS || id == PKT_C2S_PLAY_MOVE_POS_ROT) {
        x = buf_f64_read(r);
        y = buf_f64_read(r);
        z = buf_f64_read(r);
    }
    if (id == PKT_C2S_PLAY_MOVE_ROT || id == PKT_C2S_PLAY_MOVE_POS_ROT) {
        yaw = buf_f32_read(r);
        pitch = buf_f32_read(r);
    }
    u8 flags = buf_u8_read(r); /* on-ground and horizontal-collision flags */
    if (r->err || !isfinite(x) || !isfinite(y) || !isfinite(z) ||
        !isfinite(yaw) || !isfinite(pitch) ||
        x < -30000000 || x > 30000000 || z < -30000000 || z > 30000000 ||
        y < -64 || y > 320) {
        r->p = r->end;
        return !r->err;
    }
    r->p = r->end;
    c->player_x = x;
    c->player_y = y;
    c->player_z = z;
    c->player_yaw = yaw;
    c->player_pitch = pitch;
    c->has_player_position = true;
    update_current_player_pose(c);
    if (c->player_registered) {
        player_registry_update(c);
        broadcast_player_position(c, flags & 1);
    }

    s32 cx = chunk_coord(x), cz = chunk_coord(z);
    if (!c->has_chunk_center || (cx == c->chunk_center_x && cz == c->chunk_center_z))
        return true;
    s32 old_x = c->chunk_center_x, old_z = c->chunk_center_z;
    if (send_cache_center(c, cx, cz) < 0)
        return false;
    for (s32 oz = old_z - CHUNK_VIEW_RADIUS; oz <= old_z + CHUNK_VIEW_RADIUS; oz++) {
        for (s32 ox = old_x - CHUNK_VIEW_RADIUS; ox <= old_x + CHUNK_VIEW_RADIUS; ox++) {
            if (ox < cx - CHUNK_VIEW_RADIUS || ox > cx + CHUNK_VIEW_RADIUS ||
                oz < cz - CHUNK_VIEW_RADIUS || oz > cz + CHUNK_VIEW_RADIUS)
                if (send_forget_chunk(c, ox, oz) < 0) return false;
        }
    }
    c->chunk_center_x = cx;
    c->chunk_center_z = cz;
    c->has_chunk_center = true;
    if (send_chunk_batch(c, cx, cz, old_x, old_z, false) < 0)
        return false;
    play_save_player_position(c);
    SG_LOG_DEBUG("io-%d: streamed chunks around %d,%d", c->io->id, cx, cz);
    return true;
}

static int send_play_login(conn *c)
{
    static const char overworld[] = "minecraft:overworld";
    u8 buf[128];
    buf_writer body = buf_writer_init(buf, sizeof(buf));

    buf_varint_write(&body, PKT_S2C_PLAY_LOGIN);
    buf_s32_write(&body, c->entity_id); /* Player entity ID. */
    buf_u8_write(&body, 0);  /* Not hardcore. */

    /* Available dimensions. */
    buf_varint_write(&body, 1);
    buf_string_write(&body, overworld, sizeof(overworld) - 1);

    buf_varint_write(&body, 20); /* Maximum players. */
    buf_varint_write(&body, CHUNK_VIEW_RADIUS);
    buf_varint_write(&body, CHUNK_SIMULATION_DISTANCE);
    buf_u8_write(&body, 0);      /* Reduced debug info. */
    buf_u8_write(&body, 1);      /* Show death screen. */
    buf_u8_write(&body, 0);      /* Limited crafting. */

    /* CommonPlayerSpawnInfo: overworld is entry zero in dimension_type. */
    buf_varint_write(&body, 0); /* Dimension type holder ID. */
    buf_string_write(&body, overworld, sizeof(overworld) - 1);
    buf_s64_write(&body, 0);    /* Hashed seed. */
    buf_varint_write(&body, 1); /* Creative game type for world interaction testing. */
    buf_varint_write(&body, -1); /* No previous game type. */
    buf_u8_write(&body, 0);     /* Not debug. */
    buf_u8_write(&body, 1);     /* Flat world. */
    buf_u8_write(&body, 0);     /* No last death location. */
    buf_varint_write(&body, 0); /* Portal cooldown. */
    buf_varint_write(&body, 63); /* Overworld sea level. */

    buf_u8_write(&body, 0); /* Offline mode. */
    buf_u8_write(&body, 0); /* Secure chat not enforced. */

    if (body.err)
        return -1;

    int rc = send_packet(c, &body);
    SG_LOG_DEBUG("io-%d: sending PLAY_LOGIN rc=%d", c->io->id, rc);
    return rc;
}

static s32 chunk_coord(f64 value)
{
    f64 scaled = value / 16.0;
    s32 result = (s32)scaled;
    return scaled < (f64)result ? result - 1 : result;
}

static b8 load_player_position(conn *c)
{
    if (!c->username[0]) return false;
    char path[64];
    snprintf(path, sizeof(path), "server/players/%s.pos", c->username);
    FILE *f = fopen(path, "r");
    if (!f) return false;
    int got = fscanf(f, "%lf %lf %lf %f %f", &c->player_x, &c->player_y,
                     &c->player_z, &c->player_yaw, &c->player_pitch);
    fclose(f);
    if (got < 3 || !isfinite(c->player_x) || !isfinite(c->player_y) ||
        !isfinite(c->player_z) || c->player_y < -63 || c->player_y > 320 ||
        c->player_x < -30000000 || c->player_x > 30000000 ||
        c->player_z < -30000000 || c->player_z > 30000000)
        return false;
    if (got < 5) c->player_yaw = c->player_pitch = 0.0f;
    c->has_player_position = true;
    return true;
}

void play_save_player_position(conn *c)
{
    if (!c->has_player_position || !c->username[0]) return;
    if (mkdir("server/players", 0755) < 0 && errno != EEXIST) return;
    char path[64], temp[72];
    snprintf(path, sizeof(path), "server/players/%s.pos", c->username);
    snprintf(temp, sizeof(temp), "server/players/%s.tmp", c->username);
    FILE *f = fopen(temp, "w");
    if (!f) return;
    int ok = fprintf(f, "%.17g %.17g %.17g %.9g %.9g\n", c->player_x,
                     c->player_y, c->player_z, c->player_yaw,
                     c->player_pitch) > 0;
    if (fclose(f) != 0) ok = 0;
    if (!ok || rename(temp, path) != 0) remove(temp);
    save_player_inventory(c);
}

static int send_cache_center(conn *c, s32 x, s32 z)
{
    u8 buf[16];
    buf_writer w = buf_writer_init(buf, sizeof(buf));
    buf_varint_write(&w, PKT_S2C_PLAY_SET_CHUNK_CACHE_CENTER);
    buf_varint_write(&w, x);
    buf_varint_write(&w, z);
    return !w.err ? send_packet(c, &w) : -1;
}

static int send_chunk_batch(conn *c, s32 cx, s32 cz, s32 old_x, s32 old_z,
                            b8 initial)
{
    c->chunk_stream_x = cx;
    c->chunk_stream_z = cz;
    c->chunk_stream_old_x = old_x;
    c->chunk_stream_old_z = old_z;
    c->chunk_stream_next_x = cx - CHUNK_VIEW_RADIUS;
    c->chunk_stream_next_z = cz - CHUNK_VIEW_RADIUS;
    c->chunk_stream_pending = true;
    if (initial)
        c->chunk_stream_old_x = c->chunk_stream_old_z = INT32_MIN;
    return send_next_chunk_batch(c);
}

static int send_next_chunk_batch(conn *c)
{
    if (!c->chunk_stream_pending) return 0;
    u8 buf[16];
    buf_writer w = buf_writer_init(buf, sizeof(buf));
    buf_varint_write(&w, PKT_S2C_PLAY_CHUNK_BATCH_START);
    if (w.err || send_packet(c, &w) < 0) return -1;
    s32 count = 0;
    while (count < CHUNK_BATCH_SIZE &&
           c->chunk_stream_next_z <= c->chunk_stream_z + CHUNK_VIEW_RADIUS) {
        s32 x = c->chunk_stream_next_x;
        s32 z = c->chunk_stream_next_z;
        c->chunk_stream_next_x++;
        if (c->chunk_stream_next_x > c->chunk_stream_x + CHUNK_VIEW_RADIUS) {
            c->chunk_stream_next_x = c->chunk_stream_x - CHUNK_VIEW_RADIUS;
            c->chunk_stream_next_z++;
        }
        if (c->chunk_stream_old_x != INT32_MIN &&
            x >= c->chunk_stream_old_x - CHUNK_VIEW_RADIUS &&
            x <= c->chunk_stream_old_x + CHUNK_VIEW_RADIUS &&
            z >= c->chunk_stream_old_z - CHUNK_VIEW_RADIUS &&
            z <= c->chunk_stream_old_z + CHUNK_VIEW_RADIUS)
            continue;
        if (send_flat_chunk(c, x, z) < 0 ||
            send_chunk_overrides(c, x, z) < 0)
            return -1;
        count++;
    }
    c->chunk_stream_pending = c->chunk_stream_next_z <=
                              c->chunk_stream_z + CHUNK_VIEW_RADIUS;
    w = buf_writer_init(buf, sizeof(buf));
    buf_varint_write(&w, PKT_S2C_PLAY_CHUNK_BATCH_FINISHED);
    buf_varint_write(&w, count);
    return !w.err ? send_packet(c, &w) : -1;
}

static int send_forget_chunk(conn *c, s32 x, s32 z)
{
    u8 buf[16];
    buf_writer w = buf_writer_init(buf, sizeof(buf));
    buf_varint_write(&w, PKT_S2C_PLAY_FORGET_CHUNK);
    buf_s64_write(&w, (s64)(((u64)(u32)z << 32) | (u32)x));
    return !w.err ? send_packet(c, &w) : -1;
}

static void unpack_block_pos(s64 packed_pos, s32 *x, s32 *y, s32 *z)
{
    u64 packed = (u64)packed_pos;
    *x = (s32)(packed >> 38);
    *z = (s32)((packed >> 12) & 0x3ffffffu);
    *y = (s32)(packed & 0xfffu);
    if (*x & 0x02000000) *x -= 0x04000000;
    if (*z & 0x02000000) *z -= 0x04000000;
    if (*y & 0x800) *y -= 0x1000;
}

static s64 pack_block_pos(s32 x, s32 y, s32 z)
{
    u64 packed = ((u64)(u32)x & 0x3ffffffu) << 38;
    packed |= ((u64)(u32)z & 0x3ffffffu) << 12;
    packed |= (u64)(u32)y & 0xfffu;
    return (s64)packed;
}

static s32 flat_world_state(s32 x, s32 y, s32 z)
{
    return x == 0 && y == 0 && z == 0 ? 1 : 0;
}

static s32 world_block_state(server *srv, s32 x, s32 y, s32 z)
{
    s32 state = flat_world_state(x, y, z);
    pthread_mutex_lock(&srv->world_lock);
    for (u32 i = 0; i < srv->block_count; i++) {
        server_block_override *b = &srv->blocks[i];
        if (b->x == x && b->y == y && b->z == z) {
            state = b->state_id;
            break;
        }
    }
    pthread_mutex_unlock(&srv->world_lock);
    return state;
}

static void update_current_player_pose(conn *c)
{
    server *srv = c->io->srv;
    s32 bx = (s32)c->player_x;
    s32 by = (s32)c->player_y;
    s32 bz = (s32)c->player_z;
    if (c->player_x < bx) bx--;
    if (c->player_y < by) by--;
    if (c->player_z < bz) bz--;
    /* Test the player's full 0.6 x 1.8 block collision volume. Sampling the
     * center alone misses water when the player is swimming against an edge. */
    b8 in_water = false;
    for (s32 y = by; y <= by + 2 && !in_water; y++) {
        for (s32 x = bx - 1; x <= bx + 1 && !in_water; x++) {
            for (s32 z = bz - 1; z <= bz + 1 && !in_water; z++) {
                s32 state = world_block_state(srv, x, y, z);
                if (state > 0 &&
                    mc_26_3_get_block_from_state((block_state_id)state) == BID_26_3_WATER)
                    in_water = true;
            }
        }
    }
    b8 moving = (c->player_input_flags & 0x0f) != 0;
    b8 swimming = (c->player_input_flags & 0x40) != 0;
    u8 pose = in_water && (moving || swimming) ? 3 :
              ((c->player_input_flags & 0x20) ? 5 : 0);
    if (pose == c->player_pose) return;
    SG_LOG_DEBUG("io-%d: player %s pose %u -> %u (water=%u input=0x%02x)",
              c->io->id, c->username, c->player_pose, pose, in_water,
              c->player_input_flags);
    c->player_pose = pose;
    if (c->player_registered) {
        player_registry_update(c);
        broadcast_player_pose(c);
    }
}

static b8 set_world_block(server *srv, s32 x, s32 y, s32 z, s32 state)
{
    pthread_mutex_lock(&srv->world_lock);
    for (u32 i = 0; i < srv->block_count; i++) {
        server_block_override *b = &srv->blocks[i];
        if (b->x == x && b->y == y && b->z == z) {
            b->state_id = state;
            pthread_mutex_unlock(&srv->world_lock);
            return true;
        }
    }
    if (srv->block_count == srv->block_capacity) {
        u32 cap = srv->block_capacity ? srv->block_capacity * 2 : 256;
        server_block_override *next = realloc(srv->blocks, cap * sizeof(*next));
        if (!next) {
            pthread_mutex_unlock(&srv->world_lock);
            return false;
        }
        srv->blocks = next;
        srv->block_capacity = cap;
    }
    srv->blocks[srv->block_count++] = (server_block_override){x, y, z, state};
    pthread_mutex_unlock(&srv->world_lock);
    return true;
}

static int send_block_update(conn *c, s32 x, s32 y, s32 z, s32 state)
{
    u8 buf[24];
    buf_writer w = buf_writer_init(buf, sizeof(buf));
    buf_varint_write(&w, PKT_S2C_PLAY_BLOCK_UPDATE);
    buf_s64_write(&w, pack_block_pos(x, y, z));
    buf_varint_write(&w, state);
    return !w.err ? send_packet(c, &w) : -1;
}

static void broadcast_block_update(server *srv, s32 x, s32 y, s32 z, s32 state)
{
    u8 buf[24];
    buf_writer w = buf_writer_init(buf, sizeof(buf));
    buf_varint_write(&w, PKT_S2C_PLAY_BLOCK_UPDATE);
    buf_s64_write(&w, pack_block_pos(x, y, z));
    buf_varint_write(&w, state);
    if (!w.err) server_broadcast_packet(srv, w.p, w.len, -1);
}

static int send_chunk_overrides(conn *c, s32 chunk_x, s32 chunk_z)
{
    server *srv = c->io->srv;
    pthread_mutex_lock(&srv->world_lock);
    u32 count = 0;
    for (u32 i = 0; i < srv->block_count; i++) {
        server_block_override *b = &srv->blocks[i];
        if (chunk_coord((f64)b->x) == chunk_x && chunk_coord((f64)b->z) == chunk_z)
            count++;
    }
    server_block_override *copy = count ? malloc(count * sizeof(*copy)) : NULL;
    if (count && !copy) {
        pthread_mutex_unlock(&srv->world_lock);
        return -1;
    }
    u32 at = 0;
    for (u32 i = 0; i < srv->block_count; i++) {
        server_block_override *b = &srv->blocks[i];
        if (chunk_coord((f64)b->x) == chunk_x && chunk_coord((f64)b->z) == chunk_z)
            copy[at++] = *b;
    }
    pthread_mutex_unlock(&srv->world_lock);
    int rc = 0;
    for (u32 i = 0; i < count; i++)
        if (send_block_update(c, copy[i].x, copy[i].y, copy[i].z,
                              copy[i].state_id) < 0) { rc = -1; break; }
    free(copy);
    return rc;
}

static void send_block_ack(conn *c, s32 sequence)
{
    u8 buf[8];
    buf_writer w = buf_writer_init(buf, sizeof(buf));
    buf_varint_write(&w, PKT_S2C_PLAY_BLOCK_CHANGED_ACK);
    buf_varint_write(&w, sequence);
    if (!w.err) (void)send_packet(c, &w);
}

static b8 handle_player_action(conn *c, buf_reader *r)
{
    s32 action = buf_varint_read(r);
    s32 x, y, z;
    unpack_block_pos(buf_s64_read(r), &x, &y, &z);
    (void)buf_u8_read(r); /* face */
    s32 sequence = buf_varint_read(r);
    if (r->err) return false;
    r->p = r->end;
    send_block_ack(c, sequence);
    if ((action != 0 && action != 2) || y < -64 || y > 319 ||
        x < -30000000 || x > 30000000 || z < -30000000 || z > 30000000)
        return true;
    server *srv = c->io->srv;
    s32 old_state = world_block_state(srv, x, y, z);
    if (old_state == 0 || old_state == 88) return true;
    if (!set_world_block(srv, x, y, z, 0)) return false;
    broadcast_block_update(srv, x, y, z, 0);
    return true;
}

static void broadcast_swing_animation(conn *c, s32 hand)
{
    u8 buf[24];
    buf_writer w = buf_writer_init(buf, sizeof(buf));
    buf_varint_write(&w, PKT_S2C_PLAY_SWING_ANIMATION);
    buf_varint_write(&w, c->entity_id);
    buf_varint_write(&w, hand);
    buf_varint_write(&w, 1); /* Default whack animation. */
    buf_varint_write(&w, 6); /* Default duration. */
    if (!w.err)
        server_broadcast_packet(c->io->srv, w.p, w.len, c->entity_id);
}

static b8 handle_use_item_on(conn *c, buf_reader *r)
{
    s32 hand = buf_varint_read(r);
    s32 x, y, z;
    unpack_block_pos(buf_s64_read(r), &x, &y, &z);
    s32 face = buf_varint_read(r);
    (void)buf_f32_read(r); (void)buf_f32_read(r); (void)buf_f32_read(r);
    (void)buf_u8_read(r); /* inside block */
    (void)buf_u8_read(r); /* world border hit */
    s32 sequence = buf_varint_read(r);
    if (r->err) return false;
    r->p = r->end;
    send_block_ack(c, sequence);
    if (hand >= 0 && hand <= 1) broadcast_swing_animation(c, hand);
    if (hand != 0 || face < 0 || face > 5) return true;
    static const s8 dx[6] = {0, 0, 0, 0, -1, 1};
    static const s8 dy[6] = {-1, 1, 0, 0, 0, 0};
    static const s8 dz[6] = {0, 0, -1, 1, 0, 0};
    s32 px = x + dx[face], py = y + dy[face], pz = z + dz[face];
    if (py < -64 || py > 319 || px < -30000000 || px > 30000000 ||
        pz < -30000000 || pz > 30000000)
        return true;
    server *srv = c->io->srv;
    if (world_block_state(srv, px, py, pz) != 0) return true;
    s32 state = c->selected_block_state;
    if (state <= 0) return true;
    u8 facing;
    if (c->player_pitch > 45.0f) {
        facing = 5; /* down */
    } else if (c->player_pitch < -45.0f) {
        facing = 4; /* up */
    } else {
        f32 yaw = fmodf(c->player_yaw, 360.0f);
        if (yaw < 0.0f) yaw += 360.0f;
        if (yaw < 45.0f || yaw >= 315.0f) facing = 1; /* south */
        else if (yaw < 135.0f) facing = 2; /* west */
        else if (yaw < 225.0f) facing = 0; /* north */
        else facing = 3; /* east */
    }
    u8 axis = (facing == 0 || facing == 1) ? 2 :
              (facing == 4 || facing == 5) ? 1 : 0;
    state = (s32)mc_26_3_get_placement_state((block_state_id)state,
                                             facing, axis);
    if (!set_world_block(srv, px, py, pz, state)) return false;
    broadcast_block_update(srv, px, py, pz, state);
    if (c->game_mode == 0) {
        u32 slot = 36u + c->selected_hotbar_slot;
        if (c->inventory_counts[slot] > 0) {
            c->inventory_counts[slot]--;
            if (c->inventory_counts[slot] == 0) {
                c->inventory_item_ids[slot] = -1;
                c->selected_block_state = 0;
                c->hotbar_block_states[c->selected_hotbar_slot] = 0;
            }
            save_player_inventory(c);
            (void)send_player_inventory(c);
            broadcast_player_equipment(c);
        }
    }
    update_current_player_pose(c);
    return true;
}

static const mc_26_3_registry *find_registry(const char *name)
{
    for (u32 i = 0; i < mc_26_3_registry_count; i++)
        if (strcmp(mc_26_3_registries[i].name, name) == 0)
            return &mc_26_3_registries[i];
    return NULL;
}

static s32 block_state_for_name(const char *name)
{
    const mc_26_3_registry *blocks = find_registry("minecraft:block");
    if (!blocks) return 0;
    for (u32 i = 0; i < blocks->entry_count; i++) {
        const mc_26_3_registry_entry *entry =
            &mc_26_3_registry_entries[blocks->first_entry + i];
        if (strcmp(entry->name, name) == 0 && mc_26_3_block_exists(entry->protocol_id))
            return (s32)mc_26_3_blocks[entry->protocol_id].default_state;
    }
    return 0;
}

static s32 item_id_for_name(const char *name)
{
    const mc_26_3_registry *items = find_registry("minecraft:item");
    if (!items) return -1;
    for (u32 i = 0; i < items->entry_count; i++) {
        const mc_26_3_registry_entry *entry =
            &mc_26_3_registry_entries[items->first_entry + i];
        if (strcmp(entry->name, name) == 0) return (s32)entry->protocol_id;
    }
    return -1;
}

static s32 block_state_for_item(s32 item_id)
{
    const mc_26_3_registry *items = find_registry("minecraft:item");
    const mc_26_3_registry *blocks = find_registry("minecraft:block");
    if (!items || !blocks || item_id < 0)
        return 0;
    const char *item_name = NULL;
    for (u32 i = 0; i < items->entry_count; i++) {
        const mc_26_3_registry_entry *entry =
            &mc_26_3_registry_entries[items->first_entry + i];
        if (entry->protocol_id == (u32)item_id) {
            item_name = entry->name;
            break;
        }
    }
    if (!item_name) return 0;
    if (strcmp(item_name, "minecraft:water_bucket") == 0)
        return block_state_for_name("minecraft:water");
    for (u32 i = 0; i < blocks->entry_count; i++) {
        const mc_26_3_registry_entry *entry =
            &mc_26_3_registry_entries[blocks->first_entry + i];
        if (strcmp(entry->name, item_name) == 0 &&
            mc_26_3_block_exists(entry->protocol_id))
            return (s32)mc_26_3_blocks[entry->protocol_id].default_state;
    }
    return 0;
}

static void save_player_inventory(conn *c)
{
    if (!c->username[0]) return;
    if (mkdir("server/players", 0755) < 0 && errno != EEXIST) return;
    char path[64], temp[72];
    snprintf(path, sizeof(path), "server/players/%s.inv", c->username);
    snprintf(temp, sizeof(temp), "server/players/%s.inv.tmp", c->username);
    FILE *f = fopen(temp, "w");
    if (!f) return;
    b8 ok = fprintf(f, "%u\n", (unsigned)c->selected_hotbar_slot) > 0;
    for (u32 i = 0; ok && i < 46; i++)
        ok = fprintf(f, "%d %d\n", c->inventory_counts[i],
                     c->inventory_item_ids[i]) > 0;
    if (fclose(f) != 0) ok = false;
    if (!ok || rename(temp, path) != 0) remove(temp);
}

static b8 load_player_inventory(conn *c)
{
    if (!c->username[0]) return false;
    char path[64];
    snprintf(path, sizeof(path), "server/players/%s.inv", c->username);
    FILE *f = fopen(path, "r");
    if (!f) return false;
    unsigned selected = 0;
    b8 ok = fscanf(f, "%u", &selected) == 1 && selected < 9;
    for (u32 i = 0; ok && i < 46; i++) {
        s32 count, item_id;
        if (fscanf(f, "%d %d", &count, &item_id) != 2 || count < 0 ||
            count > 99 || item_id < -1) {
            ok = false;
            break;
        }
        c->inventory_counts[i] = count;
        c->inventory_item_ids[i] = item_id;
    }
    fclose(f);
    if (!ok) return false;
    c->selected_hotbar_slot = (u8)selected;
    s32 held_id = c->inventory_item_ids[36 + selected];
    c->selected_block_state = block_state_for_item(held_id);
    for (u32 i = 0; i < 9; i++)
        c->hotbar_block_states[i] = block_state_for_item(c->inventory_item_ids[36 + i]);
    return true;
}

static void broadcast_player_equipment(conn *c)
{
    u8 buf[32];
    buf_writer w = buf_writer_init(buf, sizeof(buf));
    u32 slot = 36u + c->selected_hotbar_slot;
    buf_varint_write(&w, PKT_S2C_PLAY_SET_EQUIPMENT);
    buf_varint_write(&w, c->entity_id);
    buf_u8_write(&w, 0);
    write_item_stack(&w, c->inventory_item_ids[slot], c->inventory_counts[slot]);
    if (!w.err)
        server_broadcast_packet(c->io->srv, w.p, w.len, c->entity_id);
}

static b8 handle_set_creative_slot(conn *c, buf_reader *r)
{
    s16 slot = (s16)buf_u16_read(r);
    s32 count = buf_varint_read(r);
    if (r->err) return false;
    if (count > 0) {
        s32 item_id = buf_varint_read(r);
        if (r->err) return false;
        s32 state = block_state_for_item(item_id);
        if (slot >= 0 && slot < 46) {
            c->inventory_item_ids[slot] = item_id;
            c->inventory_counts[slot] = count > 99 ? 99 : count;
        }
        if (slot >= 36 && slot <= 44)
            c->hotbar_block_states[slot - 36] = state;
        else if (slot >= 0 && slot <= 8)
            c->hotbar_block_states[slot] = state;
        if ((slot >= 36 && slot - 36 == c->selected_hotbar_slot) ||
            (slot >= 0 && slot == c->selected_hotbar_slot))
            c->selected_block_state = state;
    } else {
        if (slot >= 0 && slot < 46) {
            c->inventory_item_ids[slot] = -1;
            c->inventory_counts[slot] = 0;
        }
        if (slot >= 36 && slot <= 44)
            c->hotbar_block_states[slot - 36] = 0;
        else if (slot >= 0 && slot <= 8)
            c->hotbar_block_states[slot] = 0;
        if ((slot >= 36 && slot - 36 == c->selected_hotbar_slot) ||
            (slot >= 0 && slot == c->selected_hotbar_slot))
            c->selected_block_state = 0;
    }
    /* Component patches are irrelevant to block placement; discard packet remainder. */
    r->p = r->end;
    save_player_inventory(c);
    if (slot == 36 + c->selected_hotbar_slot || slot == c->selected_hotbar_slot)
        broadcast_player_equipment(c);
    return true;
}

static b8 handle_player_punch(conn *c, buf_reader *r)
{
    (void)r;
    broadcast_swing_animation(c, 0);
    return true;
}

static b8 handle_player_attack(conn *c, buf_reader *r)
{
    s32 target = buf_varint_read(r);
    if (r->err) return false;
    r->p = r->end;
    server *srv = c->io->srv;
    b8 is_player = false;
    pthread_mutex_lock(&srv->players_lock);
    for (u32 i = 0; i < srv->player_count; i++)
        if (srv->players[i].entity_id == target && target != c->entity_id) {
            is_player = true;
            break;
        }
    pthread_mutex_unlock(&srv->players_lock);
    if (!is_player) return true;

    u8 buf[16];
    buf_writer w = buf_writer_init(buf, sizeof(buf));
    buf_varint_write(&w, PKT_S2C_PLAY_HURT_ANIMATION);
    buf_varint_write(&w, target);
    buf_f32_write(&w, 0.0f);
    if (!w.err)
        server_broadcast_packet(srv, w.p, w.len, -1);
    return true;
}

static int send_play_spawn(conn *c)
{
    if (!load_player_inventory(c)) {
        s32 stone_id = item_id_for_name("minecraft:stone");
        for (u32 i = 36; i <= 44; i++) {
            c->inventory_item_ids[i] = stone_id;
            c->inventory_counts[i] = 64;
        }
        for (u32 i = 0; i < 9; i++) c->hotbar_block_states[i] = 1;
        c->selected_block_state = 1;
        c->selected_hotbar_slot = 0;
    }
    if (!load_player_position(c)) {
        c->player_x = 0.5;
        c->player_y = 63.0;
        c->player_z = 0.5;
        c->has_player_position = true;
    }
    c->chunk_center_x = chunk_coord(c->player_x);
    c->chunk_center_z = chunk_coord(c->player_z);
    c->has_chunk_center = true;
    if (send_cache_center(c, c->chunk_center_x, c->chunk_center_z) < 0)
        return -1;

    u8 position_buf[96];
    buf_writer position = buf_writer_init(position_buf, sizeof(position_buf));
    buf_varint_write(&position, PKT_S2C_PLAY_PLAYER_POSITION);
    buf_varint_write(&position, 1); /* Teleport ID. */
    buf_f64_write(&position, c->player_x);
    buf_f64_write(&position, c->player_y);
    buf_f64_write(&position, c->player_z);
    buf_f64_write(&position, 0.0);
    buf_f64_write(&position, 0.0);
    buf_f64_write(&position, 0.0);
    buf_f32_write(&position, c->player_yaw); /* Y rotation. */
    buf_f32_write(&position, c->player_pitch); /* X rotation. */
    buf_s32_write(&position, 0);    /* No relative fields. */
    if (position.err)
        return -1;

    int rc = send_packet(c, &position);
    SG_LOG_DEBUG("io-%d: sending PLAY_PLAYER_POSITION rc=%d", c->io->id, rc);
    if (rc < 0)
        return rc;

    u8 batch_buf[8];
    /* The client stays on "Loading terrain" until it receives event 13. */
    buf_writer game_event = buf_writer_init(batch_buf, sizeof(batch_buf));
    buf_varint_write(&game_event, PKT_S2C_PLAY_GAME_EVENT);
    buf_u8_write(&game_event, 13); /* Start waiting for level chunks. */
    buf_f32_write(&game_event, 0.0f);
    if (game_event.err || send_packet(c, &game_event) < 0)
        return -1;

    return send_chunk_batch(c, c->chunk_center_x, c->chunk_center_z, 0, 0, true);
}

static int send_player_abilities(conn *c)
{
    u8 buf[16];
    buf_writer w = buf_writer_init(buf, sizeof(buf));
    buf_varint_write(&w, PKT_S2C_PLAY_PLAYER_ABILITIES);
    buf_u8_write(&w, c->game_mode == 1 ? 0x0c : 0x00);
    buf_f32_write(&w, 0.05f);
    buf_f32_write(&w, 0.1f);
    return !w.err ? send_packet(c, &w) : -1;
}

b8 play_send_join(conn *c)
{
    server *srv = c->io->srv;
    c->game_mode = 1; /* Creative by default. */
    c->speed_multiplier = 1.0;
    pthread_mutex_lock(&srv->players_lock);
    c->entity_id = srv->next_entity_id++;
    pthread_mutex_unlock(&srv->players_lock);

    if (send_play_login(c) < 0 || send_play_spawn(c) < 0 ||
        send_player_abilities(c) < 0 || send_player_inventory(c) < 0 ||
        send_command_tree(c) < 0)
        return false;

    server_player *players = NULL;
    u32 count = 0;
    if (!player_registry_add(c, &players, &count))
        return false;

    u32 info_cap = 16 + count * 64;
    u8 *info_buf = malloc(info_cap);
    if (!info_buf) {
        free(players);
        return false;
    }
    buf_writer info = buf_writer_init(info_buf, info_cap);
    write_player_info_packet(&info, players, count);
    int rc = !info.err ? send_packet(c, &info) : -1;
    free(info_buf);
    if (rc < 0) {
        free(players);
        return false;
    }
    for (u32 i = 0; i < count; i++)
        if (players[i].entity_id != c->entity_id &&
            (send_player_entity(c, &players[i]) < 0 ||
             send_player_equipment(c, players[i].entity_id,
                                   players[i].held_item_id,
                                   players[i].held_item_count) < 0)) {
            free(players);
            return false;
        }
    for (u32 i = 0; i < count; i++)
        if (players[i].entity_id != c->entity_id && players[i].pose != 0)
            send_player_pose(c, players[i].entity_id, players[i].pose);

    server_player self = players[count - 1];
    u8 packet_buf[128];
    buf_writer packet = buf_writer_init(packet_buf, sizeof(packet_buf));
    write_player_info_packet(&packet, &self, 1);
    if (!packet.err)
        server_broadcast_packet(srv, packet.p, packet.len, c->entity_id);
    if (self.pose != 0) {
        packet = buf_writer_init(packet_buf, sizeof(packet_buf));
        write_player_pose_packet(&packet, self.entity_id, self.pose);
        if (!packet.err)
            server_broadcast_packet(srv, packet.p, packet.len, c->entity_id);
    }
    (void)send_player_equipment(c, c->entity_id,
                                c->inventory_item_ids[36 + c->selected_hotbar_slot],
                                c->inventory_counts[36 + c->selected_hotbar_slot]);
    broadcast_player_equipment(c);
    packet = buf_writer_init(packet_buf, sizeof(packet_buf));
    write_player_entity_packet(&packet, &self);
    if (!packet.err)
        server_broadcast_packet(srv, packet.p, packet.len, c->entity_id);
    free(players);
    return true;
}

b8 play_handle(struct server *srv, conn *c, s32 id, buf_reader *r)
{
    (void)srv;

    /*
     * TODO: Bundle was causing server to crash
     * this just consumes the packet
     */
    if (id == PKT_C2S_PLAY_BUNDLE_ITEM_SELECTED) {
        r->p = r->end;
        return true;
    }

    switch (id) {
        case PKT_C2S_PLAY_ACCEPT_TELEPORTATION: {
            s32 teleport_id = -1;
            if (buf_reader_remaining(r) != 0)
                teleport_id = buf_varint_read(r);
            if (r->err)
                return false;
            SG_LOG_DEBUG("io-%d: accepted teleport id=%d (extra=%u)",
                      c->io->id, teleport_id, buf_reader_remaining(r));
            r->p = r->end;
            return true;
        }

        case PKT_C2S_PLAY_PLAYER_LOADED:
            SG_LOG_DEBUG("io-%d: PKT_C2S_PLAY_PLAYER_LOADED", c->io->id);
            return true;

        case PKT_C2S_PLAY_KEEP_ALIVE: {
            s64 token = buf_s64_read(r);
            if (r->err)
                return false;
            if (token == c->keepalive_token)
                c->keepalive_token = 0;
            SG_LOG_DEBUG("io-%d: received PLAY_KEEP_ALIVE token=%lld", c->io->id,
                      (long long)token);
            return true;
        }

        case PKT_C2S_PLAY_MOVE_POS:
        case PKT_C2S_PLAY_MOVE_POS_ROT:
        case PKT_C2S_PLAY_MOVE_ROT:
        case PKT_C2S_PLAY_MOVE_STATUS:
            return handle_player_move(c, id, r);

        case PKT_C2S_PLAY_INPUT:
            return handle_player_input(c, r);

        case PKT_C2S_PLAY_CHUNK_BATCH_RECEIVED:
            /* Client reports its preferred throughput as a float. Keep batches
             * bounded here to avoid filling the connection write queue. */
            (void)buf_f32_read(r);
            if (r->err) return false;
            r->p = r->end;
            return send_next_chunk_batch(c) == 0;

        case PKT_C2S_PLAY_CHAT_COMMAND:
        case PKT_C2S_PLAY_CHAT_COMMAND_SIGNED:
            handle_chat_command(c, r);
            return !r->err;

        case PKT_C2S_PLAY_CHAT:
            return handle_chat_message(c, r);

        case PKT_C2S_PLAY_CLIENT_TICK_END:
            return true;

        case PKT_C2S_PLAY_SET_CARRIED_ITEM:
            c->selected_hotbar_slot = (u8)buf_u16_read(r);
            if (r->err) return false;
            if (c->selected_hotbar_slot < 9) {
                c->selected_block_state = c->hotbar_block_states[c->selected_hotbar_slot];
                save_player_inventory(c);
                broadcast_player_equipment(c);
            }
            r->p = r->end;
            return true;

        case PKT_C2S_PLAY_SET_CREATIVE_MODE_SLOT:
            return handle_set_creative_slot(c, r);

        case PKT_C2S_PLAY_PLAYER_ACTION:
            return handle_player_action(c, r);

        case PKT_C2S_PLAY_USE_ITEM_ON:
            return handle_use_item_on(c, r);

        case PKT_C2S_PLAY_PUNCH:
            return handle_player_punch(c, r);

        case PKT_C2S_PLAY_ATTACK:
            return handle_player_attack(c, r);

        /*
         * TODO: Return true to not terminate the connection, actual manage
         * the Packet.
         */
        default:
            SG_LOG_DEBUG("io-%d: ignoring play packet id=0x%02X", c->io->id, id);
            r->p = r->end;
            return true;
    }
}
