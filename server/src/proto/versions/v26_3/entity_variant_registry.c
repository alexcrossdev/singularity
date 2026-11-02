#include "core/nbt.h"
#include "proto/versions/v26_3/entity_variant_registry.h"

#include <string.h>
#include <stdio.h>

#define NBT_STRING(w, name, value) \
    nbt_write_string_tag( \
        (w), (name), sizeof(name) - 1, \
        (value), sizeof(value) - 1)

static b8 write_spawn_conditions(buf_writer *w)
{
    if (!nbt_write_list_header(
            w, "spawn_conditions", 15,
            NBT_TAG_COMPOUND, 1))
        return false;

    if (!nbt_write_s32_tag(w, "priority", 8, 0))
        return false;

    nbt_write_end(w);
    return !w->err;
}

static b8 write_sound_group(
    buf_writer *w,
    const char *name,
    u16 name_len,
    const char *const *fields,
    const char *const *sounds,
    u32 count)
{
    if (!nbt_write_compound_start(w, name, name_len))
        return false;

    for (u32 i = 0; i < count; i++) {
        if (!nbt_write_string_tag(
                w,
                fields[i],
                (u16)strlen(fields[i]),
                sounds[i],
                (u16)strlen(sounds[i])))
            return false;
    }

    nbt_write_end(w);
    return !w->err;
}

static b8 write_animal_sound_variant(
    buf_writer *w,
    const char *entity,
    const char *const *fields,
    const char *const *adult,
    const char *const *baby,
    u32 count)
{
    char sound[128];
    const char *adult_sounds[8];
    const char *baby_sounds[8];

    if (count > 8)
        return false;

    for (u32 i = 0; i < count; i++) {
        snprintf(sound, sizeof(sound), "minecraft:entity.%s.%s",
                 entity, fields[i]);

        adult_sounds[i] = strdup(sound);

        snprintf(sound, sizeof(sound), "minecraft:entity.baby_%s.%s",
                 entity, fields[i]);

        baby_sounds[i] = strdup(sound);

        if (!adult_sounds[i] || !baby_sounds[i])
            return false;
    }

    nbt_write_network_root_compound(w);

    b8 ok = write_sound_group(
        w, "adult_sounds", 12, fields, adult_sounds, count);

    if (ok && baby)
        ok = write_sound_group(
            w, "baby_sounds", 11, fields, baby_sounds, count);

    nbt_write_end(w);

    for (u32 i = 0; i < count; i++) {
        free((void *)adult_sounds[i]);
        free((void *)baby_sounds[i]);
    }

    (void)adult;
    return ok && !w->err;
}

static b8 write_simple_variant(
    buf_writer *w,
    const char *asset_id,
    const char *baby_asset_id)
{
    nbt_write_network_root_compound(w);

    if (!NBT_STRING(w, "asset_id", asset_id))
        return false;

    if (baby_asset_id &&
        !NBT_STRING(w, "baby_asset_id", baby_asset_id))
        return false;

    if (!write_spawn_conditions(w))
        return false;

    nbt_write_end(w);
    return !w->err;
}

b8 entity_variant_registry_write_cat_sound_classic(buf_writer *w)
{
    static const char *fields[] = {
        "ambient_sound", "beg_for_food_sound", "death_sound",
        "eat_sound", "hiss_sound", "hurt_sound",
        "purr_sound", "purreow_sound", "stray_ambient_sound"
    };

    static const char *adult[] = {
        "minecraft:entity.cat.ambient",
        "minecraft:entity.cat.beg_for_food",
        "minecraft:entity.cat.death",
        "minecraft:entity.cat.eat",
        "minecraft:entity.cat.hiss",
        "minecraft:entity.cat.hurt",
        "minecraft:entity.cat.purr",
        "minecraft:entity.cat.purreow",
        "minecraft:entity.cat.stray_ambient"
    };

    static const char *baby[] = {
        "minecraft:entity.baby_cat.ambient",
        "minecraft:entity.baby_cat.beg_for_food",
        "minecraft:entity.baby_cat.death",
        "minecraft:entity.baby_cat.eat",
        "minecraft:entity.baby_cat.hiss",
        "minecraft:entity.baby_cat.hurt",
        "minecraft:entity.baby_cat.purr",
        "minecraft:entity.baby_cat.purreow",
        "minecraft:entity.baby_cat.stray_ambient"
    };

    nbt_write_network_root_compound(w);

    if (!write_sound_group(w, "adult_sounds", 12, fields, adult, 9))
        return false;

    if (!write_sound_group(w, "baby_sounds", 11, fields, baby, 9))
        return false;

    nbt_write_end(w);
    return !w->err;
}

b8 entity_variant_registry_write_chicken_sound_classic(buf_writer *w)
{
    static const char *fields[] = {
        "ambient_sound", "death_sound", "hurt_sound", "step_sound"
    };
    static const char *adult[] = {
        "minecraft:entity.chicken.ambient",
        "minecraft:entity.chicken.death",
        "minecraft:entity.chicken.hurt",
        "minecraft:entity.chicken.step"
    };
    static const char *baby[] = {
        "minecraft:entity.baby_chicken.ambient",
        "minecraft:entity.baby_chicken.death",
        "minecraft:entity.baby_chicken.hurt",
        "minecraft:entity.baby_chicken.step"
    };

    nbt_write_network_root_compound(w);

    if (!write_sound_group(w, "adult_sounds", 12, fields, adult, 4))
        return false;
    if (!write_sound_group(w, "baby_sounds", 11, fields, baby, 4))
        return false;

    nbt_write_end(w);
    return !w->err;
}

b8 entity_variant_registry_write_chicken_variant_temperate(buf_writer *w)
{
    return write_simple_variant(
        w,
        "minecraft:entity/chicken/chicken_temperate",
        "minecraft:entity/chicken/chicken_temperate_baby");
}

b8 entity_variant_registry_write_cow_sound_classic(buf_writer *w)
{
    static const char *fields[] = {
        "ambient_sound", "death_sound", "hurt_sound", "step_sound"
    };
    static const char *sounds[] = {
        "minecraft:entity.cow.ambient",
        "minecraft:entity.cow.death",
        "minecraft:entity.cow.hurt",
        "minecraft:entity.cow.step"
    };

    nbt_write_network_root_compound(w);

    for (u32 i = 0; i < 4; i++) {
        if (!nbt_write_string_tag(
                w, fields[i], strlen(fields[i]),
                sounds[i], strlen(sounds[i])))
            return false;
    }

    nbt_write_end(w);
    return !w->err;
}

b8 entity_variant_registry_write_cow_variant_temperate(buf_writer *w)
{
    return write_simple_variant(
        w,
        "minecraft:entity/cow/cow_temperate",
        "minecraft:entity/cow/cow_temperate_baby");
}

b8 entity_variant_registry_write_frog_variant_temperate(buf_writer *w)
{
    return write_simple_variant(
        w,
        "minecraft:entity/frog/frog_temperate",
        NULL);
}

b8 entity_variant_registry_write_pig_sound_classic(buf_writer *w)
{
    static const char *fields[] = {
        "ambient_sound", "death_sound", "eat_sound",
        "hurt_sound", "step_sound"
    };
    static const char *adult[] = {
        "minecraft:entity.pig.ambient",
        "minecraft:entity.pig.death",
        "minecraft:entity.pig.eat",
        "minecraft:entity.pig.hurt",
        "minecraft:entity.pig.step"
    };
    static const char *baby[] = {
        "minecraft:entity.baby_pig.ambient",
        "minecraft:entity.baby_pig.death",
        "minecraft:entity.baby_pig.eat",
        "minecraft:entity.baby_pig.hurt",
        "minecraft:entity.baby_pig.step"
    };

    nbt_write_network_root_compound(w);

    if (!write_sound_group(w, "adult_sounds", 12, fields, adult, 5))
        return false;
    if (!write_sound_group(w, "baby_sounds", 11, fields, baby, 5))
        return false;

    nbt_write_end(w);
    return !w->err;
}

b8 entity_variant_registry_write_pig_variant_temperate(buf_writer *w)
{
    return write_simple_variant(
        w,
        "minecraft:entity/pig/pig_temperate",
        "minecraft:entity/pig/pig_temperate_baby");
}

b8 entity_variant_registry_write_wolf_sound_classic(buf_writer *w)
{
    static const char *fields[] = {
        "ambient_sound", "death_sound", "growl_sound",
        "hurt_sound", "pant_sound", "step_sound", "whine_sound"
    };
    static const char *adult[] = {
        "minecraft:entity.wolf.ambient",
        "minecraft:entity.wolf.death",
        "minecraft:entity.wolf.growl",
        "minecraft:entity.wolf.hurt",
        "minecraft:entity.wolf.pant",
        "minecraft:entity.wolf.step",
        "minecraft:entity.wolf.whine"
    };
    static const char *baby[] = {
        "minecraft:entity.baby_wolf.ambient",
        "minecraft:entity.baby_wolf.death",
        "minecraft:entity.baby_wolf.growl",
        "minecraft:entity.baby_wolf.hurt",
        "minecraft:entity.baby_wolf.pant",
        "minecraft:entity.baby_wolf.step",
        "minecraft:entity.baby_wolf.whine"
    };

    nbt_write_network_root_compound(w);

    if (!write_sound_group(w, "adult_sounds", 12, fields, adult, 7))
        return false;
    if (!write_sound_group(w, "baby_sounds", 11, fields, baby, 7))
        return false;

    nbt_write_end(w);
    return !w->err;
}

b8 entity_variant_registry_write_wolf_variant_pale(buf_writer *w)
{
    static const char *assets[] = {
        "minecraft:entity/wolf/wolf_angry",
        "minecraft:entity/wolf/wolf_tame",
        "minecraft:entity/wolf/wolf"
    };
    static const char *baby_assets[] = {
        "minecraft:entity/wolf/wolf_angry_baby",
        "minecraft:entity/wolf/wolf_tame_baby",
        "minecraft:entity/wolf/wolf_baby"
    };
    static const char *names[] = { "angry", "tame", "wild" };

    nbt_write_network_root_compound(w);

    if (!nbt_write_compound_start(w, "assets", 6))
        return false;
    for (u32 i = 0; i < 3; i++) {
        if (!nbt_write_string_tag(
                w, names[i], strlen(names[i]),
                assets[i], strlen(assets[i])))
            return false;
    }
    nbt_write_end(w);

    if (!nbt_write_compound_start(w, "baby_assets", 11))
        return false;
    for (u32 i = 0; i < 3; i++) {
        if (!nbt_write_string_tag(
                w, names[i], strlen(names[i]),
                baby_assets[i], strlen(baby_assets[i])))
            return false;
    }
    nbt_write_end(w);

    if (!write_spawn_conditions(w))
        return false;

    nbt_write_end(w);
    return !w->err;
}

b8 entity_variant_registry_write_zombie_nautilus_variant_temperate(buf_writer *w)
{
    return write_simple_variant(
        w,
        "minecraft:entity/nautilus/zombie_nautilus",
        NULL);
}

b8 entity_variant_registry_write_painting_kebab(buf_writer *w)
{
    nbt_write_network_root_compound(w);

    if (!NBT_STRING(w, "asset_id", "minecraft:kebab"))
        return false;

    if (!nbt_write_compound_start(w, "author", 6))
        return false;
    if (!NBT_STRING(w, "color", "gray"))
        return false;
    if (!NBT_STRING(w, "translate", "painting.minecraft.kebab.author"))
        return false;
    nbt_write_end(w);

    if (!nbt_write_s32_tag(w, "height", 6, 1))
        return false;

    if (!nbt_write_compound_start(w, "title", 5))
        return false;
    if (!NBT_STRING(w, "color", "yellow"))
        return false;
    if (!NBT_STRING(w, "translate", "painting.minecraft.kebab.title"))
        return false;
    nbt_write_end(w);

    if (!nbt_write_s32_tag(w, "width", 5, 1))
        return false;

    nbt_write_end(w);
    return !w->err;
}

b8 entity_variant_registry_write_cat_variant_tabby(buf_writer *w)
{
    if (!w || w->err)
        return false;

    nbt_write_network_root_compound(w);

    if (!nbt_write_string_tag(
            w, "asset_id", 8,
            "minecraft:entity/cat/cat_tabby",
            sizeof("minecraft:entity/cat/cat_tabby") - 1))
        return false;

    if (!nbt_write_string_tag(
            w, "baby_asset_id", 13,
            "minecraft:entity/cat/cat_tabby_baby",
            sizeof("minecraft:entity/cat/cat_tabby_baby") - 1))
        return false;

    if (!nbt_write_list_header(
            w, "spawn_conditions", 15,
            NBT_TAG_COMPOUND, 1))
        return false;

    if (!nbt_write_s32_tag(w, "priority", 8, 0))
        return false;

    nbt_write_end(w); /* Spawn condition */
    nbt_write_end(w); /* Root compound */

    return !w->err;
}
