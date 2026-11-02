#include "proto/handlers.h"

#include "core/buf.h"
#include <singularity/base.h>
#include <singularity/log.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include "net/io.h"
#include "net/server.h"
#include "proto/versions/v26_3/proto.h"

#include <openssl/evp.h>
#include <string.h>

#define PKT_S2C_LOGIN_DISCONNECT            0x00
#define PKT_S2C_LOGIN_ENCRYPTION_REQUEST    0x01
#define PKT_S2C_LOGIN_SUCCESS               0x02
#define PKT_S2C_LOGIN_SET_COMPRESSION       0x03
#define PKT_S2C_LOGIN_PLUGIN_RESPONSE       0x04
#define PKT_S2C_LOGIN_COOKIE_REQUEST        0x05

#define PKT_C2S_LOGIN_START                 0x00
#define PKT_C2S_LOGIN_ENCRYPTION_RESPONSE   0x01
#define PKT_C2S_LOGIN_PLUGIN_RESPONSE       0x02
#define PKT_C2S_LOGIN_ACKNOWLEDGED          0x03
#define PKT_C2S_LOGIN_COOKIE_RESPONSE       0x04

/*
*/

static b8 offline_uuid(const char *username, u8 uuid[16])
{
    char input[sizeof("OfflinePlayer:") + 16];
    int input_len = snprintf(input, sizeof(input),
                             "OfflinePlayer:%s", username);

    if (input_len < 0 || (size_t)input_len >= sizeof(input))
        return false;

    u8 digest[EVP_MAX_MD_SIZE];
    unsigned int digest_len = 0;

    if (EVP_Digest(input, (size_t)input_len,
                   digest, &digest_len, EVP_md5(), NULL) != 1 ||
        digest_len != 16)
        return false;

    memcpy(uuid, digest, 16);

    // Set UUID version 3 (name-based MD5).
    uuid[6] = (uuid[6] & 0x0F) | 0x30;

    // Set the RFC 4122 variant.
    uuid[8] = (uuid[8] & 0x3F) | 0x80;

    return true;
}

static b8 player_name_in_use(server *srv, const char *name)
{
    b8 used = false;
    pthread_mutex_lock(&srv->players_lock);
    for (u32 i = 0; i < srv->player_count; i++) {
        if (strcmp(srv->players[i].username, name) == 0) {
            used = true;
            break;
        }
    }
    pthread_mutex_unlock(&srv->players_lock);
    return used;
}

static void unique_player_name(server *srv, const char *requested, char out[17])
{
    snprintf(out, 17, "%s", requested);
    if (!player_name_in_use(srv, out)) return;

    for (u32 suffix = 2; suffix < 100000; suffix++) {
        char number[8];
        int n = snprintf(number, sizeof(number), "%u", suffix);
        if (n <= 0 || n >= (int)sizeof(number)) continue;
        size_t base_len = strlen(requested);
        if (base_len + (size_t)n > 16) base_len = 16 - (size_t)n;
        memcpy(out, requested, base_len);
        memcpy(out + base_len, number, (size_t)n + 1);
        if (!player_name_in_use(srv, out)) return;
    }
}

static b8 send_login_success(
    conn *c,
    const char *username,
    u32 username_len,
    const u8 uuid[16])
{
    u8 buf[128];
    buf_writer body = buf_writer_init(buf, sizeof(buf));

    buf_varint_write(&body, PKT_S2C_LOGIN_SUCCESS);

    // Game Profile
    buf_bytes_write(&body, uuid, 16);
    buf_string_write(&body, username, username_len);
    buf_varint_write(&body, 0); // No profile properties

    u8 session_id[16] = {0};
    buf_bytes_write(&body, session_id, sizeof(session_id));

    return !body.err && send_packet(c, &body) == 0;
}

b8 login_handle(struct server *srv, conn *c, s32 id, buf_reader *r)
{
    switch (id) {
        case PKT_C2S_LOGIN_START: {
            SG_LOG_DEBUG("io-%d: PKT_C2S_LOGIN_START", c->io->id);
            const char *username = NULL;
            u32 username_len = buf_string_read(r, 16, &username);

            if (r->err || username_len == 0 || username_len > 16)
                return false;

            for (u32 i = 0; i < username_len; i++) {
                char ch = username[i];

                if (!((ch >= 'a' && ch <= 'z') ||
                      (ch >= 'A' && ch <= 'Z') ||
                      (ch >= '0' && ch <= '9') ||
                      ch == '_'))
                    return false;
            }

            if (!buf_reader_needs(r, 16))
                return false;

            r->p += 16;

            char username_buf[17];
            memcpy(username_buf, username, username_len);
            username_buf[username_len] = '\0';
            unique_player_name(srv, username_buf, c->username);
            u32 assigned_len = (u32)strlen(c->username);

            u8 uuid[16];
            offline_uuid(c->username, uuid);
            memcpy(c->player_uuid, uuid, sizeof(uuid));

            SG_LOG_DEBUG("io-%d: offline login: requested=%s assigned=%s",
                      c->io->id, username_buf, c->username);

            if (!send_login_success(c, c->username, assigned_len, uuid))
                return false;
            u32 online = atomic_load_explicit(&srv->online, memory_order_acquire);
            atomic_store_explicit(&srv->online, online + 1, memory_order_release);
            return true;
        }
        case PKT_C2S_LOGIN_ACKNOWLEDGED: {
            SG_LOG_DEBUG("io-%d: PKT_C2S_LOGIN_ACKNOWLEDGED", c->io->id);
            c->state = CS_CONFIGURATION;

            return true;
        }
        default:
            return false;
    }
}
