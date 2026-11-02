#ifndef HS_PROTO_DAMAGE_TYPE_REGISTRY_H
#define HS_PROTO_DAMAGE_TYPE_REGISTRY_H

#include "core/buf.h"
#include "proto/registry_data.h"

#define DAMAGE_TYPE_REGISTRY_ENTRY_COUNT 51
#define DAMAGE_TYPE_NBT_MAX 256

b8 damage_type_registry_build(
    registry_data_entry *entries,
    u8 nbt[][DAMAGE_TYPE_NBT_MAX],
    u32 capacity
);

b8 damage_type_registry_write_tags(buf_writer *w);

#endif
