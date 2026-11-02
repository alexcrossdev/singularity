#include "proto/handlers.h"

#include <singularity/log.h>
#include "proto/protocol.h"

#include "net/io.h"

#define PKT_C2S_HANDSHAKE       0x00

#define HSK_INTENT_STATUS       0x01
#define HSK_INTENT_LOGIN        0x02
#define HSK_INTENT_TRANSFER     0x03

b8 handshake_handle(conn *c, buf_reader *r)
{
    /* Handshake packet structure */
    u32 protocol_version = buf_varint_read(r);
    const char *client_addr;
    (void)buf_string_read(r, 255 * 3, &client_addr);
    (void)buf_u16_read(r);
    s32 intent = buf_varint_read(r);

    if (r->err)
        return false;
    c->protocol_layer = protocol_layer_find(protocol_version);

    switch (intent) {
        case HSK_INTENT_STATUS:
            c->state = CS_STATUS;
            SG_LOG_DEBUG("io-%d: PKT_C2S_HANDSHAKE: INTENT_STATUS", c->io->id);
            return true;

        case HSK_INTENT_LOGIN:
        case HSK_INTENT_TRANSFER:
            if (!c->protocol_layer) {
                if (protocol_version < PROTOCOL_MINIMUM_SUPPORTED)
                    SG_LOG_ERROR("io-%d: rejecting older client protocol %u; minimum is %u",
                              c->io->id, protocol_version,
                              PROTOCOL_MINIMUM_SUPPORTED);
                else
                    SG_LOG_ERROR("io-%d: no protocol layer for client protocol %u",
                              c->io->id, protocol_version);
                return false;
            }
            c->state = CS_LOGIN;
            SG_LOG_DEBUG("io-%d: PKT_C2S_HANDSHAKE: intent=%d protocol=%s",
                      c->io->id, intent, c->protocol_layer->minecraft_version);
            return true;

        default:
            return false;
    }
}
