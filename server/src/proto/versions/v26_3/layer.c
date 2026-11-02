#include "proto/protocol.h"
#include "proto/handlers.h"
#include "proto/versions/v26_3/proto.h"

static b8 send_keepalive(conn *c, s64 token)
{
    u8 buf[16];
    buf_writer packet = buf_writer_init(buf, sizeof(buf));
    buf_varint_write(&packet, PKT_26_3_PLAY_S2C_KEEP_ALIVE);
    buf_s64_write(&packet, token);
    return !packet.err && send_packet(c, &packet) == 0;
}

const protocol_layer protocol_layer_v26_3 = {
    .protocol_version = MC_PROTOCOL_VERSION,
    .minecraft_version = MC_VERSION_NAME,
    .status = status_handle,
    .login = login_handle,
    .configuration = configuration_handle,
    .play = play_handle,
    .send_keepalive = send_keepalive,
};
