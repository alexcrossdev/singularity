#ifndef HS_PROTO_TRIM_MATERIAL_REGISTRY_H
#define HS_PROTO_TRIM_MATERIAL_REGISTRY_H

#include "proto/registry_data.h"

#define TRIM_MATERIAL_REGISTRY_ENTRY_COUNT 11
#define TRIM_MATERIAL_NBT_MAX 256

b8 trim_material_registry_build(
    registry_data_entry *entries,
    u8 nbt[][TRIM_MATERIAL_NBT_MAX],
    u32 capacity
);

#endif
