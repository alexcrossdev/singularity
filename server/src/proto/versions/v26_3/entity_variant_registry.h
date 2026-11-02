#ifndef HS_PROTO_ENTITY_VARIANT_REGISTRY_H
#define HS_PROTO_ENTITY_VARIANT_REGISTRY_H

#include "core/buf.h"

typedef b8 (*entity_variant_nbt_writer)(buf_writer *w);

b8 entity_variant_registry_write_cat_variant_tabby(buf_writer *w);
b8 entity_variant_registry_write_cat_sound_classic(buf_writer *w);
b8 entity_variant_registry_write_chicken_sound_classic(buf_writer *w);
b8 entity_variant_registry_write_chicken_variant_temperate(buf_writer *w);
b8 entity_variant_registry_write_cow_sound_classic(buf_writer *w);
b8 entity_variant_registry_write_cow_variant_temperate(buf_writer *w);
b8 entity_variant_registry_write_frog_variant_temperate(buf_writer *w);
b8 entity_variant_registry_write_painting_kebab(buf_writer *w);
b8 entity_variant_registry_write_pig_sound_classic(buf_writer *w);
b8 entity_variant_registry_write_pig_variant_temperate(buf_writer *w);
b8 entity_variant_registry_write_wolf_sound_classic(buf_writer *w);
b8 entity_variant_registry_write_wolf_variant_pale(buf_writer *w);
b8 entity_variant_registry_write_zombie_nautilus_variant_temperate(buf_writer *w);

#endif
