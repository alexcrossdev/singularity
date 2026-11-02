#include "proto/protocol.h"

#include "core/buf.h"

int send_packet(conn *c, const buf_writer *body)
{
    if (!body || body->err || body->len > UINT32_MAX - 5u)
        return -1;

    u32 capacity = body->len + 5u;
    u8 *out = malloc(capacity);
    if (!out)
        return -1;

    buf_writer w = buf_writer_init(out, capacity);
    buf_frame_write(&w, body);
    if (w.err) {
        free(out);
        return -1;
    }

    int rc = conn_send(c, w.p, w.len);
    free(out);
    return rc;
}

