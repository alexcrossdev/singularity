#ifndef SG_PROTO_PROTOCOL_H
#define SG_PROTO_PROTOCOL_H

#include "core/buf.h"
#include "net/io.h"

#define PRELOGIN_MAX_FRAME 1024u
#define PROTOCOL_MINIMUM_SUPPORTED 777u

typedef struct protocol_layer {
    u32 protocol_version;
    const char *minecraft_version;
    b8 (*status)(struct server *, conn *, s32, buf_reader *);
    b8 (*login)(struct server *, conn *, s32, buf_reader *);
    b8 (*configuration)(struct server *, conn *, s32, buf_reader *);
    b8 (*play)(struct server *, conn *, s32, buf_reader *);
    b8 (*send_keepalive)(conn *, s64);
} protocol_layer;

const protocol_layer *protocol_layer_find(u32 protocol_version);
const protocol_layer *protocol_layer_default(void);
int send_packet(conn *c, const buf_writer *body);

#endif
