#include "net/io.h"
#include "proto/handlers.h"

#include <singularity/log.h>

#include <stdio.h>

#include "proto/versions/v26_3/proto.h"
#include "net/server.h"

/* Clientbound packets */
#define PKT_S2C_STATUS_RESPONSE         0x00
#define PKT_S2C_STATUS_PONG_RESPONSE    0x01

/* Serverbound packets */
#define PKT_C2S_STATUS_REQUEST          0x00
#define PKT_C2S_STATUS_PING_REQUEST     0x01

static b8 send_status_response(struct server *srv, conn *c)
{
    char json[900];
    s32 n = snprintf(json, sizeof(json),
                     "{\"version\":{\"name\":\"" MC_VERSION_NAME "\",\"protocol\":%d},"
                     "\"players\":{\"max\":%u,\"online\":%u},"
                     "\"description\":{\"text\":\"%s\"},"
                     "\"enforcesSecureChat\":false}",
                     MC_PROTOCOL_VERSION, srv->cfg.max_players,
                     atomic_load_explicit(&srv->online, memory_order_relaxed), srv->motd_escaped);
    if (n < 0 || (size_t)n >= sizeof(json))
        return false;

    u8 buf[1000];
    buf_writer body = buf_writer_init(buf, sizeof buf);
    buf_varint_write(&body, PKT_S2C_STATUS_RESPONSE);
    buf_string_write(&body, json, (size_t)n);
    return !body.err && send_packet(c, &body) == 0;
}

b8 status_handle(struct server *srv, conn *c, s32 id, buf_reader *r) {
    switch (id) {
        case PKT_C2S_STATUS_REQUEST: {
            if (c->status_requested)
                return false;
            c->status_requested = true;
            SG_LOG_DEBUG("io-%d: PKT_C2S_STATUS_REQUEST", c->io->id);
            return send_status_response(srv, c);
        }

        case PKT_C2S_STATUS_PING_REQUEST: {
            s64 payload = buf_s64_read(r);
            if (r->err)
                return false;

            b8 buf[16];
            buf_writer body = buf_writer_init(buf, sizeof(buf));
            buf_varint_write(&body, PKT_S2C_STATUS_PONG_RESPONSE);
            buf_s64_write(&body, payload);
            if (send_packet(c, &body))
                return false;

            SG_LOG_DEBUG("io-%d: PKT_C2S_STATUS_PING_REQUEST", c->io->id);

            /* Close connection after status sent */
            conn_close_after_flush(c);
            return true;
        }

        default:
            return false;
   }
}
