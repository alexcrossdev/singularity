#include "core/nbt.h"

static void nbt_write_u16(buf_writer *w, u16 value)
{
    buf_u8_write(w, (u8)(value >> 8));
    buf_u8_write(w, (u8)value);
}

static void nbt_write_u32(buf_writer *w, s32 value)
{
    buf_u8_write(w, (s8)(value >> 24));
    buf_u8_write(w, (s8)(value >> 16));
    buf_u8_write(w, (s8)(value >> 8));
    buf_u8_write(w, (s8)value);
}

static void nbt_write_u64(buf_writer *w, u64 value)
{
    for (int shift = 56; shift >= 0; shift -= 8)
        buf_u8_write(w, (u8)(value >> shift));
}

void nbt_write_s8(buf_writer *w, s8 value)
{
    buf_u8_write(w, (u8)value);
}

void nbt_write_s16(buf_writer *w, s16 value)
{
    nbt_write_u16(w, (u16)value);
}

void nbt_write_s32(buf_writer *w, s32 value)
{
    nbt_write_u32(w, (u32)value);
}

void nbt_write_s64(buf_writer *w, s64 value)
{
    nbt_write_u64(w, (u64)value);
}

void nbt_write_f32(buf_writer *w, f32 value)
{
    u32 bits;
    static_assert(sizeof(bits) == sizeof(value), "NBT float must be 32 bits");

    memcpy(&bits, &value, sizeof(bits));
    nbt_write_u32(w, bits);
}

void nbt_write_f64(buf_writer *w, f64 value)
{
    u64 bits;
    static_assert(sizeof(bits) == sizeof(value), "NBT double must be 64 bits");

    memcpy(&bits, &value, sizeof(bits));
    nbt_write_u64(w, bits);
}


b8 nbt_write_string_payload(buf_writer *w, const char *value, u16 len)
{
    if (w->err || (len != 0 && value == NULL))
        return false;

    nbt_write_u16(w, len);
    buf_bytes_write(w, value, len);

    return !w->err;
}

b8 nbt_write_named_header(buf_writer *w, nbt_tag_type type, const char *name, u16 name_len)
{
    if (w->err || type <= NBT_TAG_END || type > NBT_TAG_LONG_ARRAY ||
            (name_len != 0 && name == NULL))
        return false;

    buf_u8_write(w, (u8)type);

    if (w->err)
        return false;

    if (!nbt_write_string_payload(w, name, name_len))
        return false;

    return !w->err;
}

b8 nbt_write_s8_tag(
    buf_writer *w, const char *name, u16 name_len, s8 value
)
{
    if (!nbt_write_named_header(w, NBT_TAG_BYTE, name, name_len))
        return false;

    nbt_write_s8(w, value);

    return !w->err;
}

b8 nbt_write_s16_tag(
    buf_writer *w, const char *name, u16 name_len, s16 value
)
{
    if (!nbt_write_named_header(w, NBT_TAG_SHORT, name, name_len))
        return false;

    nbt_write_s16(w, value);

    return !w->err;
}


b8 nbt_write_s32_tag(
    buf_writer *w, const char *name, u16 name_len, s32 value
)
{
    if (!nbt_write_named_header(w, NBT_TAG_INT, name, name_len))
        return false;

    nbt_write_s32(w, value);

    return !w->err;
}


b8 nbt_write_s64_tag(
    buf_writer *w, const char *name, u16 name_len, s64 value
)
{
    if (!nbt_write_named_header(w, NBT_TAG_LONG, name, name_len))
        return false;

    nbt_write_s64(w, value);

    return !w->err;
}

b8 nbt_write_f32_tag(
    buf_writer *w, const char *name, u16 name_len, f32 value
)
{
    if (!nbt_write_named_header(w, NBT_TAG_FLOAT, name, name_len))
        return false;

    nbt_write_f32(w, value);

    return !w->err;
}

b8 nbt_write_f64_tag(
    buf_writer *w, const char *name, u16 name_len, f64 value
)
{
    if (!nbt_write_named_header(w, NBT_TAG_DOUBLE, name, name_len))
        return false;

    nbt_write_f64(w, value);

    return !w->err;
}

b8 nbt_write_string_tag(
    buf_writer *w,
    const char *name,
    u16 name_len,
    const char *value,
    u16 value_len
)
{
    if (!nbt_write_named_header(w, NBT_TAG_STRING, name, name_len))
        return false;

    return nbt_write_string_payload(w, value, value_len);
}

b8 nbt_write_compound_start(
    buf_writer *w, const char *name, u16 name_len
)
{
    return nbt_write_named_header(w, NBT_TAG_COMPOUND, name, name_len);
}

b8 nbt_write_named_root_compound(
    buf_writer *w, const char *name, u16 name_len
)
{
    return nbt_write_named_header(w, NBT_TAG_COMPOUND, name, name_len);
}

void nbt_write_end(buf_writer *w)
{
    buf_u8_write(w, NBT_TAG_END);
}

b8 nbt_write_list_header(
    buf_writer *w,
    const char *name,
    u16 name_len,
    nbt_tag_type element_type,
    s32 count
)
{
    if (w->err || count < 0 || element_type < NBT_TAG_END || element_type > NBT_TAG_LONG_ARRAY)
        return false;

    if (count == 0)
        element_type = NBT_TAG_END;
    else if (element_type == NBT_TAG_END)
        return false;

    if (!nbt_write_named_header(w, NBT_TAG_LIST, name, name_len))
        return false;

    buf_u8_write(w, (u8)element_type);
    nbt_write_s32(w, count);

    return !w->err;
}

void nbt_write_network_root_compound(buf_writer *w)
{
    buf_u8_write(w, NBT_TAG_COMPOUND);
}

b8 nbt_write_s8_array_payload(buf_writer *w, const u8 *values, s32 count)
{
    if (w->err || count < 0 || (count > 0 && values == NULL))
        return false;

    nbt_write_s32(w, count);
    buf_bytes_write(w, values, (u32)count);

    return !w->err;
}

b8 nbt_write_s32_array_payload(buf_writer *w, const s32 *values, s32 count)
{
    if (w->err || count < 0 || (count > 0 && values == NULL))
        return false;

    if ((u32)count > UINT32_MAX / sizeof(s32))
        return false;

    nbt_write_s32(w, count);

    for (s32 i = 0; i < count; i++)
        nbt_write_s32(w, values[i]);

    return !w->err;
}

b8 nbt_write_s64_array_payload(buf_writer *w, const s64 *values, s32 count)
{
    if (w->err || count < 0 || (count > 0 && values == NULL))
        return false;

    if ((u32)count > UINT32_MAX / sizeof(s64))
        return false;

    nbt_write_s32(w, count);

    for (s32 i = 0; i < count; i++)
        nbt_write_s64(w, values[i]);

    return !w->err;
}

b8 nbt_write_s8_array_tag(
    buf_writer *w, const char *name, u16 name_len,
    const u8 *values, s32 count
)
{
    if (!nbt_write_named_header(w, NBT_TAG_BYTE_ARRAY, name, name_len))
        return false;

    return nbt_write_s8_array_payload(w, values, count);
}

b8 nbt_write_s32_array_tag(
    buf_writer *w, const char *name, u16 name_len,
    const s32 *values, s32 count
)
{
    if (!nbt_write_named_header(w, NBT_TAG_INT_ARRAY, name, name_len))
        return false;

    return nbt_write_s32_array_payload(w, values, count);
}

b8 nbt_write_s64_array_tag(
    buf_writer *w, const char *name, u16 name_len,
    const s64 *values, s32 count
)
{
    if (!nbt_write_named_header(w, NBT_TAG_LONG_ARRAY, name, name_len))
        return false;

    return nbt_write_s64_array_payload(w, values, count);
}
