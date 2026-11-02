#ifndef HS_PROTO_HANDLERS_H
#define HS_PROTO_HANDLERS_H

#include "core/buf.h"
#include "net/io.h"

struct server;

b8 handshake_handle(conn *c, buf_reader *r);
b8 status_handle(struct server *srv, conn *c, s32 id, buf_reader *r);
b8 login_handle(struct server *srv, conn *c, s32 id, buf_reader *r);
b8 configuration_handle(struct server *srv, conn *c, s32 id, buf_reader *r);
b8 play_handle(struct server *srv, conn *c, s32 id, buf_reader *r);
b8 play_send_join(conn *c);
void play_save_player_position(conn *c);
void play_player_disconnect(conn *c);

#endif
