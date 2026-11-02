#ifndef HS_PROTO_REGISTRY_DATA_H
#define HS_PROTO_REGISTRY_DATA_H

#include "core/buf.h"

typedef struct {
    const char *id;
    u32 id_len;

    const u8* nbt;
    u32 nbt_len;
} registry_data_entry;

b8 registry_data_write(
    buf_writer *body,
    const char *registry_id,
    u32 registry_id_len,
    const registry_data_entry *entries,
    u32 entry_count
);

#endif
