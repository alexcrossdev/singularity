/* This file is generated, do not manually update */
#ifndef SGD_V_26_3_REGISTRIES_H
#define SGD_V_26_3_REGISTRIES_H

#include <singularity/types.h>

typedef struct {
    const char *name;
    u32 protocol_id;
} mc_26_3_registry_entry;

typedef struct {
    const char *name;
    u32 protocol_id;
    u32 first_entry;
    u32 entry_count;
} mc_26_3_registry;

extern const mc_26_3_registry mc_26_3_registries[];
extern const u32 mc_26_3_registry_count;
extern const mc_26_3_registry_entry mc_26_3_registry_entries[];
extern const u32 mc_26_3_registry_entry_count;

#endif