#include "proto/versions/v26_3/damage_type_registry.h"

#include "core/nbt.h"

#include <string.h>

typedef struct {
    const char *id;
    const char *effects;
    f32 exhaustion;
    const char *message_id;
    const char *scaling;
    const char *death_message_type;
} damage_type_def;

#define DT(id, exhaustion, message, scaling) \
    { "minecraft:" id, NULL, exhaustion, message, scaling, NULL }

#define DTE(id, effects, exhaustion, message, scaling) \
    { "minecraft:" id, effects, exhaustion, message, scaling, NULL }

#define DTD(id, exhaustion, message, scaling, death_type) \
    { "minecraft:" id, NULL, exhaustion, message, scaling, death_type }

static const damage_type_def damage_types[] = {
    DT("arrow",                  0.1f, "arrow",             "when_caused_by_living_non_player"),
    DTD("bad_respawn_point",     0.1f, "badRespawnPoint",   "always", "intentional_game_design"),
    DT("cactus",                 0.1f, "cactus",            "when_caused_by_living_non_player"),
    DTE("campfire",              "burning", 0.1f, "inFire",  "when_caused_by_living_non_player"),
    DT("cramming",               0.0f, "cramming",          "when_caused_by_living_non_player"),
    DT("dragon_breath",          0.0f, "dragonBreath",      "when_caused_by_living_non_player"),
    DTE("drown",                 "drowning", 0.0f, "drown",  "when_caused_by_living_non_player"),
    DT("dry_out",                0.1f, "dryout",            "when_caused_by_living_non_player"),
    DTD("ender_pearl",           0.0f, "fall",              "when_caused_by_living_non_player", "fall_variants"),
    DT("explosion",              0.1f, "explosion",         "always"),
    DTD("fall",                  0.0f, "fall",              "when_caused_by_living_non_player", "fall_variants"),
    DT("falling_anvil",          0.1f, "anvil",             "when_caused_by_living_non_player"),
    DT("falling_block",          0.1f, "fallingBlock",      "when_caused_by_living_non_player"),
    DT("falling_stalactite",     0.1f, "fallingStalactite",  "when_caused_by_living_non_player"),
    DTE("fireball",              "burning", 0.1f, "fireball","when_caused_by_living_non_player"),
    DT("fireworks",              0.1f, "fireworks",         "when_caused_by_living_non_player"),
    DT("fly_into_wall",          0.0f, "flyIntoWall",       "when_caused_by_living_non_player"),
    DTE("freeze",                "freezing", 0.0f, "freeze", "when_caused_by_living_non_player"),
    DT("generic",                0.0f, "generic",           "when_caused_by_living_non_player"),
    DT("generic_kill",           0.0f, "genericKill",       "when_caused_by_living_non_player"),
    DTE("hot_floor",             "burning", 0.1f, "hotFloor","when_caused_by_living_non_player"),
    DTE("in_fire",               "burning", 0.1f, "inFire",  "when_caused_by_living_non_player"),
    DT("in_wall",                0.0f, "inWall",            "when_caused_by_living_non_player"),
    DT("indirect_magic",         0.0f, "indirectMagic",     "when_caused_by_living_non_player"),
    DTE("lava",                  "burning", 0.1f, "lava",    "when_caused_by_living_non_player"),
    DT("lightning_bolt",         0.1f, "lightningBolt",     "when_caused_by_living_non_player"),
    DT("mace_smash",              0.1f, "mace_smash",       "when_caused_by_living_non_player"),
    DT("magic",                  0.0f, "magic",             "when_caused_by_living_non_player"),
    DT("mob_attack",             0.1f, "mob",               "when_caused_by_living_non_player"),
    DT("mob_attack_no_aggro",    0.1f, "mob",               "when_caused_by_living_non_player"),
    DT("mob_projectile",         0.1f, "mob",               "when_caused_by_living_non_player"),
    DTE("on_fire",               "burning", 0.0f, "onFire",  "when_caused_by_living_non_player"),
    DT("out_of_world",           0.0f, "outOfWorld",        "when_caused_by_living_non_player"),
    DT("outside_border",         0.0f, "outsideBorder",     "when_caused_by_living_non_player"),
    DT("player_attack",          0.1f, "player",            "when_caused_by_living_non_player"),
    DT("player_explosion",       0.1f, "explosion.player",  "always"),
    DT("sonic_boom",             0.0f, "sonic_boom",        "always"),
    DT("spear",                  0.1f, "spear",             "when_caused_by_living_non_player"),
    DT("spit",                   0.1f, "mob",               "when_caused_by_living_non_player"),
    DT("stalagmite",             0.0f, "stalagmite",        "when_caused_by_living_non_player"),
    DT("starve",                 0.0f, "starve",            "when_caused_by_living_non_player"),
    DT("sting",                  0.1f, "sting",             "when_caused_by_living_non_player"),
    DTE("sulfur_cube_hot",       "burning", 0.1f, "sulfurCubeHot", "when_caused_by_living_non_player"),
    DTE("sweet_berry_bush",      "poking", 0.1f, "sweetBerryBush", "when_caused_by_living_non_player"),
    DTE("thorns",                "thorns", 0.1f, "thorns",   "when_caused_by_living_non_player"),
    DT("thrown",                 0.1f, "thrown",             "when_caused_by_living_non_player"),
    DT("trident",                0.1f, "trident",            "when_caused_by_living_non_player"),
    DTE("unattributed_fireball", "burning", 0.1f, "onFire",  "when_caused_by_living_non_player"),
    DT("wind_charge",            0.1f, "mob",               "when_caused_by_living_non_player"),
    DT("wither",                 0.0f, "wither",             "when_caused_by_living_non_player"),
    DT("wither_skull",           0.1f, "witherSkull",        "when_caused_by_living_non_player"),
};

static b8 write_damage_type_nbt(
    buf_writer *w,
    const damage_type_def *def
)
{
    nbt_write_network_root_compound(w);

    if (def->effects &&
        !nbt_write_string_tag(
            w, "effects", 7,
            def->effects, (u16)strlen(def->effects)))
        return false;

    if (!nbt_write_f32_tag(w, "exhaustion", 10, def->exhaustion))
        return false;

    if (!nbt_write_string_tag(
            w, "message_id", 10,
            def->message_id, (u16)strlen(def->message_id)))
        return false;

    if (!nbt_write_string_tag(
            w, "scaling", 7,
            def->scaling, (u16)strlen(def->scaling)))
        return false;

    if (def->death_message_type &&
        !nbt_write_string_tag(
            w, "death_message_type", 18,
            def->death_message_type,
            (u16)strlen(def->death_message_type)))
        return false;

    nbt_write_end(w);

    return !w->err;
}

b8 damage_type_registry_build(
    registry_data_entry *entries,
    u8 nbt[][DAMAGE_TYPE_NBT_MAX],
    u32 capacity
)
{
    const u32 count =
        (u32)(sizeof(damage_types) / sizeof(damage_types[0]));

    if (!entries || !nbt || capacity < count)
        return false;

    for (u32 i = 0; i < count; i++) {
        buf_writer w = buf_writer_init(nbt[i], DAMAGE_TYPE_NBT_MAX);

        if (!write_damage_type_nbt(&w, &damage_types[i]))
            return false;

        entries[i] = (registry_data_entry) {
            .id = damage_types[i].id,
            .id_len = (u32)strlen(damage_types[i].id),
            .nbt = nbt[i],
            .nbt_len = w.len
        };
    }

    return true;
}

/* ------------------------------------------------------------------------- */
/* Damage type tags                                                           */
/* ------------------------------------------------------------------------- */

typedef struct {
    const char *id;
    const char *const *values;
    u32 value_count;
} damage_tag_def;

#define TAG(id, ...) \
    { "minecraft:" id, \
      (const char *const[]){ __VA_ARGS__ }, \
      (u32)(sizeof((const char *const[]){ __VA_ARGS__ }) / sizeof(const char *)) }

#define EMPTY_TAG(id) \
    { "minecraft:" id, NULL, 0 }

static const damage_tag_def damage_tags[] = {
    TAG("always_hurts_ender_dragons",
        "#minecraft:is_explosion"),

    TAG("always_kills_armor_stands",
        "minecraft:arrow", "minecraft:trident", "minecraft:fireball",
        "minecraft:wither_skull", "minecraft:wind_charge"),

    TAG("always_most_significant_fall",
        "minecraft:out_of_world"),

    TAG("always_triggers_silverfish",
        "minecraft:magic"),

    TAG("avoids_guardian_thorns",
        "minecraft:magic", "minecraft:thorns", "#minecraft:is_explosion"),

    TAG("burn_from_stepping",
        "minecraft:campfire", "minecraft:hot_floor",
        "minecraft:sulfur_cube_hot"),

    TAG("burns_armor_stands",
        "minecraft:on_fire"),

    TAG("bypasses_armor",
        "minecraft:on_fire", "minecraft:in_wall", "minecraft:cramming",
        "minecraft:drown", "minecraft:fly_into_wall", "minecraft:generic",
        "minecraft:wither", "minecraft:dragon_breath", "minecraft:starve",
        "minecraft:fall", "minecraft:ender_pearl", "minecraft:freeze",
        "minecraft:stalagmite", "minecraft:magic", "minecraft:indirect_magic",
        "minecraft:out_of_world", "minecraft:generic_kill",
        "minecraft:sonic_boom", "minecraft:outside_border"),

    EMPTY_TAG("bypasses_cooldown"),

    TAG("bypasses_effects",
        "minecraft:starve"),

    TAG("bypasses_enchantments",
        "minecraft:sonic_boom"),

    TAG("bypasses_invulnerability",
        "minecraft:out_of_world", "minecraft:generic_kill"),

    TAG("bypasses_resistance",
        "minecraft:out_of_world", "minecraft:generic_kill"),

    TAG("bypasses_shield",
        "#minecraft:bypasses_armor",
        "minecraft:cactus", "minecraft:campfire", "minecraft:dry_out",
        "minecraft:falling_anvil", "minecraft:falling_stalactite",
        "minecraft:hot_floor", "minecraft:sulfur_cube_hot",
        "minecraft:in_fire", "minecraft:lava", "minecraft:lightning_bolt",
        "minecraft:sweet_berry_bush"),

    TAG("bypasses_wolf_armor",
        "#minecraft:bypasses_invulnerability",
        "minecraft:cramming", "minecraft:drown", "minecraft:dry_out",
        "minecraft:freeze", "minecraft:in_wall", "minecraft:indirect_magic",
        "minecraft:magic", "minecraft:outside_border", "minecraft:starve",
        "minecraft:thorns", "minecraft:wither"),

    TAG("can_break_armor_stand",
        "minecraft:player_explosion", "#minecraft:is_player_attack"),

    TAG("damages_helmet",
        "minecraft:falling_anvil", "minecraft:falling_block",
        "minecraft:falling_stalactite"),

    TAG("ignites_armor_stands",
        "minecraft:in_fire", "minecraft:campfire"),

    TAG("is_drowning",
        "minecraft:drown"),

    TAG("is_explosion",
        "minecraft:fireworks", "minecraft:explosion",
        "minecraft:player_explosion", "minecraft:bad_respawn_point"),

    TAG("is_fall",
        "minecraft:fall", "minecraft:ender_pearl", "minecraft:stalagmite"),

    TAG("is_fire",
        "minecraft:in_fire", "minecraft:campfire", "minecraft:on_fire",
        "minecraft:lava", "minecraft:hot_floor", "minecraft:sulfur_cube_hot",
        "minecraft:unattributed_fireball", "minecraft:fireball"),

    TAG("is_freezing",
        "minecraft:freeze"),

    TAG("is_lightning",
        "minecraft:lightning_bolt"),

    TAG("is_player_attack",
        "minecraft:player_attack", "minecraft:spear", "minecraft:mace_smash"),

    TAG("is_projectile",
        "minecraft:arrow", "minecraft:trident", "minecraft:mob_projectile",
        "minecraft:unattributed_fireball", "minecraft:fireball",
        "minecraft:wither_skull", "minecraft:thrown", "minecraft:wind_charge"),

    TAG("mace_smash",
        "minecraft:mace_smash"),

    TAG("no_anger",
        "minecraft:mob_attack_no_aggro"),

    TAG("no_impact",
        "minecraft:drown"),

    TAG("no_knockback",
        "minecraft:explosion", "minecraft:player_explosion",
        "minecraft:bad_respawn_point", "minecraft:in_fire",
        "minecraft:lightning_bolt", "minecraft:on_fire", "minecraft:lava",
        "minecraft:hot_floor", "minecraft:sulfur_cube_hot", "minecraft:in_wall",
        "minecraft:cramming", "minecraft:drown", "minecraft:starve",
        "minecraft:cactus", "minecraft:fall", "minecraft:ender_pearl",
        "minecraft:fly_into_wall", "minecraft:out_of_world",
        "minecraft:generic", "minecraft:magic", "minecraft:wither",
        "minecraft:dragon_breath", "minecraft:dry_out",
        "minecraft:sweet_berry_bush", "minecraft:freeze",
        "minecraft:stalagmite", "minecraft:outside_border",
        "minecraft:generic_kill", "minecraft:campfire", "minecraft:spear"),

    TAG("no_wolf_retaliation",
        "minecraft:sulfur_cube_hot"),

    TAG("panic_causes",
        "#minecraft:panic_environmental_causes",
        "minecraft:arrow", "minecraft:dragon_breath", "minecraft:explosion",
        "minecraft:fireball", "minecraft:fireworks", "minecraft:indirect_magic",
        "minecraft:magic", "minecraft:mob_attack", "minecraft:mob_projectile",
        "minecraft:player_explosion", "minecraft:sonic_boom", "minecraft:sting",
        "minecraft:thrown", "minecraft:trident", "minecraft:unattributed_fireball",
        "minecraft:wind_charge", "minecraft:wither", "minecraft:wither_skull",
        "#minecraft:is_player_attack"),

    TAG("panic_environmental_causes",
        "minecraft:cactus", "minecraft:freeze", "minecraft:hot_floor",
        "minecraft:sulfur_cube_hot", "minecraft:in_fire", "minecraft:lava",
        "minecraft:lightning_bolt", "minecraft:on_fire"),

    TAG("sulfur_cube_with_block_immune_to",
        "minecraft:arrow", "minecraft:cactus", "minecraft:dry_out",
        "minecraft:fall", "minecraft:falling_anvil", "minecraft:falling_block",
        "minecraft:falling_stalactite", "minecraft:freeze",
        "minecraft:mace_smash", "minecraft:hot_floor", "minecraft:mob_attack",
        "minecraft:mob_attack_no_aggro", "minecraft:mob_projectile",
        "minecraft:player_attack", "minecraft:spear", "minecraft:spit",
        "minecraft:stalagmite", "minecraft:sting", "minecraft:sulfur_cube_hot",
        "minecraft:sweet_berry_bush", "minecraft:thrown", "minecraft:trident",
        "minecraft:wind_charge", "#minecraft:is_explosion"),

    TAG("witch_resistant_to",
        "minecraft:magic", "minecraft:indirect_magic",
        "minecraft:sonic_boom", "minecraft:thorns"),

    TAG("wither_immune_to",
        "minecraft:drown")
};

#undef TAG
#undef EMPTY_TAG

#define DAMAGE_TAG_COUNT \
    ((u32)(sizeof(damage_tags) / sizeof(damage_tags[0])))

static s32 damage_type_id(const char *id)
{
    for (u32 i = 0; i < DAMAGE_TYPE_REGISTRY_ENTRY_COUNT; i++) {
        if (strcmp(damage_types[i].id, id) == 0)
            return (s32)i;
    }

    return -1;
}

static s32 damage_tag_id(const char *id)
{
    for (u32 i = 0; i < DAMAGE_TAG_COUNT; i++) {
        if (strcmp(damage_tags[i].id, id) == 0)
            return (s32)i;
    }

    return -1;
}

static b8 expand_damage_tag(
    u32 tag_index,
    b8 *members,
    u32 depth
)
{
    if (depth > DAMAGE_TAG_COUNT)
        return false;

    const damage_tag_def *tag = &damage_tags[tag_index];

    for (u32 i = 0; i < tag->value_count; i++) {
        const char *value = tag->values[i];

        if (value[0] == '#') {
            s32 nested = damage_tag_id(value + 1);

            if (nested < 0)
                return false;

            if (!expand_damage_tag((u32)nested, members, depth + 1))
                return false;
        } else {
            s32 id = damage_type_id(value);

            if (id < 0)
                return false;

            members[id] = true;
        }
    }

    return true;
}

b8 damage_type_registry_write_tags(buf_writer *w)
{
    if (!w || w->err)
        return false;

    /* Clientbound Update Tags packet. */
    buf_varint_write(w, 0x0E);

    /* Tags required by registries and item component initializers. */
    buf_varint_write(w, 4);
    buf_string_write(w, "minecraft:damage_type", 21);

    buf_varint_write(w, DAMAGE_TAG_COUNT);

    for (u32 i = 0; i < DAMAGE_TAG_COUNT; i++) {
        b8 members[DAMAGE_TYPE_REGISTRY_ENTRY_COUNT] = { false };

        if (!expand_damage_tag(i, members, 0))
            return false;

        buf_string_write(
            w,
            damage_tags[i].id,
            (u32)strlen(damage_tags[i].id));

        u32 count = 0;

        for (u32 j = 0; j < DAMAGE_TYPE_REGISTRY_ENTRY_COUNT; j++) {
            if (members[j])
                count++;
        }

        buf_varint_write(w, (s32)count);

        for (u32 j = 0; j < DAMAGE_TYPE_REGISTRY_ENTRY_COUNT; j++) {
            if (members[j])
                buf_varint_write(w, (s32)j);
        }
    }

    /* Block tags referenced by dimension_type.infiniburn. */
    buf_string_write(w, "minecraft:block", 15);
    buf_varint_write(w, 3);
    buf_string_write(w, "minecraft:infiniburn_end", 24);
    buf_varint_write(w, 3);
    buf_varint_write(w, 36);  /* minecraft:bedrock */
    buf_varint_write(w, 334); /* minecraft:netherrack */
    buf_varint_write(w, 729); /* minecraft:magma_block */
    buf_string_write(w, "minecraft:infiniburn_nether", 27);
    buf_varint_write(w, 2);
    buf_varint_write(w, 334);
    buf_varint_write(w, 729);
    buf_string_write(w, "minecraft:infiniburn_overworld", 30);
    buf_varint_write(w, 2);
    buf_varint_write(w, 334);
    buf_varint_write(w, 729);

    /* Timeline registry entries are sorted by identifier during codegen:
     * day=0, early_game=1, moon=2, villager_schedule=3. */
    buf_string_write(w, "minecraft:timeline", 18);
    buf_varint_write(w, 4);
    buf_string_write(w, "minecraft:in_end", 16);
    buf_varint_write(w, 1);
    buf_varint_write(w, 3);
    buf_string_write(w, "minecraft:in_nether", 19);
    buf_varint_write(w, 1);
    buf_varint_write(w, 3);
    buf_string_write(w, "minecraft:in_overworld", 22);
    buf_varint_write(w, 3);
    buf_varint_write(w, 0);
    buf_varint_write(w, 1);
    buf_varint_write(w, 2);
    buf_string_write(w, "minecraft:universal", 19);
    buf_varint_write(w, 1);
    buf_varint_write(w, 3);

    /* Banner pattern tags used by item component initializers. */
    static const struct {
        const char *id;
        u32 entry_id;
    } banner_pattern_tags[] = {
        {"minecraft:pattern_item/bordure_indented", 6},
        {"minecraft:pattern_item/creeper", 4},
        {"minecraft:pattern_item/field_masoned", 2},
        {"minecraft:pattern_item/flow", 11},
        {"minecraft:pattern_item/flower", 12},
        {"minecraft:pattern_item/globe", 13},
        {"minecraft:pattern_item/guster", 16},
        {"minecraft:pattern_item/mojang", 21},
        {"minecraft:pattern_item/piglin", 22},
        {"minecraft:pattern_item/skull", 24},
    };
    buf_string_write(w, "minecraft:banner_pattern", sizeof("minecraft:banner_pattern") - 1);
    buf_varint_write(w, (s32)(sizeof(banner_pattern_tags) / sizeof(banner_pattern_tags[0])));
    for (u32 i = 0; i < sizeof(banner_pattern_tags) / sizeof(banner_pattern_tags[0]); i++) {
        buf_string_write(w, banner_pattern_tags[i].id, (u32)strlen(banner_pattern_tags[i].id));
        buf_varint_write(w, 1);
        buf_varint_write(w, (s32)banner_pattern_tags[i].entry_id);
    }

    return !w->err;
}
