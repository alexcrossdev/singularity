#include "proto/versions/v26_3/dimension_registry.h"

#include "core/nbt.h"

static b8 dimension_write_overworld_strings(buf_writer *w)
{
    /*
     * Use a direct block ID instead of a tag reference.
     * Minecraft 26.2+ supports direct IDs for infiniburn.
     */
    static const char infiniburn[] = "minecraft:netherrack";

    if (!nbt_write_string_tag(
            w,
            "infiniburn",
            sizeof("infiniburn") - 1,
            infiniburn,
            sizeof(infiniburn) - 1))
        return false;

    /*
     * Omit timeline and world_clock for now.
     * Both are optional dimension type fields.
     */

    return !w->err;
}

static b8 dimension_write_overworld_spawn_light(buf_writer *w)
{
    if (!nbt_write_compound_start(
            w, "monster_spawn_light_level", 25))
        return false;

    if (!nbt_write_string_tag(
            w, "type", 4, "minecraft:uniform", 17))
        return false;

    if (!nbt_write_s32_tag(w, "min_inclusive", 13, 0))
        return false;

    if (!nbt_write_s32_tag(w, "max_inclusive", 13, 7))
        return false;

    nbt_write_end(w);

    return !w->err;
}

static b8 dimension_write_overworld_simple_attributes(buf_writer *w)
{
    if (!nbt_write_compound_start(w, "attributes", 10))
        return false;

    /* Gameplay attributes */
    if (!nbt_write_s8_tag(
            w, "minecraft:gameplay/nether_portal_spawns_piglin",
            sizeof("minecraft:gameplay/nether_portal_spawns_piglin") - 1,
            1))
        return false;

    if (!nbt_write_s8_tag(
            w, "minecraft:gameplay/respawn_anchor_works",
            sizeof("minecraft:gameplay/respawn_anchor_works") - 1,
            0))
        return false;

    /* Visual attributes */
    if (!nbt_write_string_tag(
            w, "minecraft:visual/ambient_light_color",
            sizeof("minecraft:visual/ambient_light_color") - 1,
            "#0a0a0a", 7))
        return false;

    if (!nbt_write_string_tag(
            w, "minecraft:visual/cloud_color",
            sizeof("minecraft:visual/cloud_color") - 1,
            "#ccffffff", 9))
        return false;

    if (!nbt_write_f32_tag(
            w, "minecraft:visual/cloud_height",
            sizeof("minecraft:visual/cloud_height") - 1,
            192.33f))
        return false;

    if (!nbt_write_string_tag(
            w, "minecraft:visual/fog_color",
            sizeof("minecraft:visual/fog_color") - 1,
            "#c0d8ff", 7))
        return false;

    if (!nbt_write_string_tag(
            w, "minecraft:visual/sky_color",
            sizeof("minecraft:visual/sky_color") - 1,
            "#78a7ff", 7))
        return false;

    nbt_write_end(w);

    return !w->err;
}

b8 dimension_registry_write_overworld_nbt(buf_writer *w)
{
    if (!w || w->err)
        return false;

    nbt_write_network_root_compound(w);

    if (!nbt_write_f32_tag(w, "ambient_light", 13, 0.0f))
        return false;

    if (!nbt_write_f64_tag(w, "coordinate_scale", 16, 1.0))
        return false;

    if (!nbt_write_s8_tag(w, "has_ceiling", 11, 0))
        return false;

    if (!nbt_write_s8_tag(w, "has_skylight", 12, 1))
        return false;

    if (!nbt_write_s8_tag(w, "has_ender_dragon_fight", 22, 1))
        return false;

    if (!nbt_write_s32_tag(w, "min_y", 5, -64))
        return false;

    if (!nbt_write_s32_tag(w, "height", 6, 384))
        return false;

    if (!nbt_write_s32_tag(w, "logical_height", 14, 384))
        return false;

    if (!nbt_write_s32_tag(w, "monster_spawn_block_light_limit", 31, 0))
        return false;

    if (!dimension_write_overworld_strings(w))
        return false;

    if (!dimension_write_overworld_spawn_light(w))
        return false;

    if (!dimension_write_overworld_simple_attributes(w))
        return false;

    nbt_write_end(w);

    return !w->err;
}
