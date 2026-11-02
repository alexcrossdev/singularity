#include "proto/versions/v26_3/trim_material_registry.h"

#include "core/nbt.h"

#include <string.h>
#include <stdio.h>

typedef struct {
    const char *id;
    const char *color;
} trim_material_def;

static const trim_material_def trim_materials[] = {
    { "minecraft:amethyst",  "#9A5CC6" },
    { "minecraft:copper",    "#B4684D" },
    { "minecraft:diamond",   "#6EECD2" },
    { "minecraft:emerald",   "#11A036" },
    { "minecraft:gold",      "#DEB12D" },
    { "minecraft:iron",      "#ECECEC" },
    { "minecraft:lapis",     "#416E97" },
    { "minecraft:netherite", "#625859" },
    { "minecraft:quartz",    "#E3D4C4" },
    { "minecraft:redstone",  "#971607" },
    { "minecraft:resin",     "#FC7812" },
};

static b8 write_trim_material_nbt(
    buf_writer *w,
    const char *name,
    const char *color
) {
    static const char *palette_prefix = "minecraft:trim/";

    char palette_id[64];
    size_t name_len = strlen(name);
    size_t prefix_len = strlen(palette_prefix);

    if (name_len <= strlen("minecraft:") ||
        prefix_len + name_len - strlen("minecraft:") >= sizeof(palette_id)) {
        return false;
    }

    memcpy(palette_id, palette_prefix, prefix_len);
    memcpy(
        palette_id + prefix_len,
        name + strlen("minecraft:"),
        name_len - strlen("minecraft:") + 1
    );

    nbt_write_network_root_compound(w);

    if (!nbt_write_compound_start(w, "description", 11))
        return false;

    if (!nbt_write_string_tag(w, "color", 5, color, 7))
        return false;

    const char *translate = name + strlen("minecraft:");
    char translation_key[64];

    int translation_len = snprintf(
        translation_key,
        sizeof(translation_key),
        "trim_material.minecraft.%s",
        translate
    );

    if (translation_len < 0 ||
        (size_t)translation_len >= sizeof(translation_key))
        return false;

    if (!nbt_write_string_tag(
            w,
            "translate",
            9,
            translation_key,
            (u16)translation_len))
        return false;

    nbt_write_end(w);

    if (!nbt_write_string_tag(
            w,
            "palette_id",
            10,
            palette_id,
            (u16)strlen(palette_id)))
        return false;

    nbt_write_end(w);

    return !w->err;
}

b8 trim_material_registry_build(
    registry_data_entry *entries,
    u8 nbt[][TRIM_MATERIAL_NBT_MAX],
    u32 capacity
) {
    if (!entries || !nbt ||
        capacity < TRIM_MATERIAL_REGISTRY_ENTRY_COUNT)
        return false;

    for (u32 i = 0; i < TRIM_MATERIAL_REGISTRY_ENTRY_COUNT; i++) {
        const trim_material_def *def = &trim_materials[i];

        buf_writer w = buf_writer_init(nbt[i], TRIM_MATERIAL_NBT_MAX);

        if (!write_trim_material_nbt(&w, def->id, def->color))
            return false;

        entries[i].id = def->id;
        entries[i].id_len = (u32)strlen(def->id);
        entries[i].nbt = nbt[i];
        entries[i].nbt_len = w.len;
    }

    return true;
}
