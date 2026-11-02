#ifndef HS_CORE_NBT_H
#define HS_CORE_NBT_H

#include "core/buf.h"

typedef enum {
    NBT_TAG_END        = 0,
    NBT_TAG_BYTE       = 1,
    NBT_TAG_SHORT      = 2,
    NBT_TAG_INT        = 3,
    NBT_TAG_LONG       = 4,
    NBT_TAG_FLOAT      = 5,
    NBT_TAG_DOUBLE     = 6,
    NBT_TAG_BYTE_ARRAY = 7,
    NBT_TAG_STRING     = 8,
    NBT_TAG_LIST       = 9,
    NBT_TAG_COMPOUND   = 10,
    NBT_TAG_INT_ARRAY  = 11,
    NBT_TAG_LONG_ARRAY = 12
} nbt_tag_type;

void nbt_write_s8(buf_writer *w, s8 value);
void nbt_write_s16(buf_writer *w, s16 value);
void nbt_write_s32(buf_writer *w, s32 value);
void nbt_write_s64(buf_writer *w, s64 value);
void nbt_write_f32(buf_writer *w, f32 value);
void nbt_write_f64(buf_writer *w, f64 value);

b8 nbt_write_string_payload(buf_writer *w, const char *value, u16 len);
b8 nbt_write_named_header(buf_writer *w, nbt_tag_type type, const char *name, u16 name_len);

b8 nbt_write_s8_tag(
    buf_writer *w, const char *name, u16 name_len, s8 value
);

b8 nbt_write_s16_tag(
    buf_writer *w, const char *name, u16 name_len, s16 value
);

b8 nbt_write_s32_tag(
    buf_writer *w, const char *name, u16 name_len, s32 value
);

b8 nbt_write_s64_tag(
    buf_writer *w, const char *name, u16 name_len, s64 value
);

b8 nbt_write_f32_tag(
    buf_writer *w, const char *name, u16 name_len, f32 value
);

b8 nbt_write_f64_tag(
    buf_writer *w, const char *name, u16 name_len, f64 value
);

b8 nbt_write_string_tag(
    buf_writer *w,
    const char *name,
    u16 name_len,
    const char *value,
    u16 value_len
);

b8 nbt_write_compound_start(
    buf_writer *w, const char *name, u16 name_len
);

b8 nbt_write_named_root_compound(
    buf_writer *w, const char *name, u16 name_len
);

void nbt_write_end(buf_writer *w);

b8 nbt_write_list_header(
    buf_writer *w,
    const char *name,
    u16 name_len,
    nbt_tag_type element_type,
    s32 count
);

void nbt_write_network_root_compound(buf_writer *w);

b8 nbt_write_s8_array_payload(buf_writer *w, const u8 *values, s32 count);
b8 nbt_write_s32_array_payload(buf_writer *w, const s32 *values, s32 count);
b8 nbt_write_s64_array_payload(buf_writer *w, const s64 *values, s32 count);

b8 nbt_write_s8_array_tag(
    buf_writer *w, const char *name, u16 name_len,
    const u8 *values, s32 count
);

b8 nbt_write_s32_array_tag(
    buf_writer *w, const char *name, u16 name_len,
    const s32 *values, s32 count
);

b8 nbt_write_s64_array_tag(
    buf_writer *w, const char *name, u16 name_len,
    const s64 *values, s32 count
);

#endif
