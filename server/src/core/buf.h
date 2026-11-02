#ifndef HS_CORE_BUF_H
#define HS_CORE_BUF_H

#include <singularity/base.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

typedef struct {
    const u8 *p;
    const u8 *end;
    b8 err;
} buf_reader;

static inline buf_reader buf_reader_init(const void *data, u32 len)
{
    buf_reader reader = { (u8 *)data, (const u8 *)data + len, false };
    return reader;
}

static inline u32 buf_reader_remaining(const buf_reader *reader)
{
    return (u32)(reader->end - reader->p);
}

static inline bool buf_reader_needs(buf_reader *reader, u32 num_bytes)
{
    if (UNLIKELY(reader->err || buf_reader_remaining(reader) < num_bytes)) {
        reader->err = true;
        return false;
    }
    return true;
}

static inline u8 buf_u8_read(buf_reader *reader)
{
    if (!buf_reader_needs(reader, 1))
        return 0;
    return *reader->p++;
}

static inline u16 buf_u16_read(buf_reader *reader)
{
    if (!buf_reader_needs(reader, 2))
        return 0;
    u16 value = (u16)((reader->p[0] << 8) | reader->p[1]);
    reader->p += 2;
    return value;
}

static inline s64 buf_s64_read(buf_reader *reader)
{
    if (!buf_reader_needs(reader, 8))
        return 0;
    u64 value = 0;
    for (int i = 0; i < 8; i++)
        value = (value << 8) | reader->p[i];
    reader->p += 8;
    return (s64)value;
}

static inline s32 buf_varint_read(buf_reader *reader)
{
    u32 value = 0;
    for (u32 i = 0; i < 5; i++) {
        if (!buf_reader_needs(reader, 1))
            return 0;
        u8 byte = *reader->p++;
        value |= (u32)(byte & 0x7F) << (7 * i);
        if (!(byte & 0x80))
            return (s32)value;
    }
    reader->err = true;
    return 0;
}

static inline u32 buf_string_read(buf_reader *reader, u32 max_bytes, const char **out)
{
    s32 n = buf_varint_read(reader);
    *out = NULL;
    if (reader->err || n < 0 || (u32)n > max_bytes || !buf_reader_needs(reader, (u32)n)) {
        reader->err = true;
        return 0;
    }
    *out = (const char *)reader->p;
    reader->p += n;
    return (u32)n;
}

typedef struct {
    u8 *p;
    u32 len;
    u32 cap;
    b8 err;
} buf_writer;

static inline buf_writer buf_writer_init(void *buf, u32 cap)
{
    buf_writer writer = { (u8 *)buf, 0, cap, false };
    return writer;
}

static inline b8 buf_writer_needs(buf_writer *writer, u32 num_bytes)
{
    if (UNLIKELY(writer->err || writer->cap - writer->len < num_bytes)) {
        writer->err = true;
        return false;
    }
    return true;
}

static inline void buf_u8_write(buf_writer *writer, u8 value)
{
    if (buf_writer_needs(writer, 1))
        writer->p[writer->len++] = value;
}

static inline void buf_s64_write(buf_writer *writer, s64 value)
{
    if (!buf_writer_needs(writer, 8))
        return;
    u64 usign = (u64)value;
    for (int i = 7; i >= 0; i--)
        writer->p[writer->len++] = (u8)(usign >> (8 * i));
}

static inline void buf_varint_write(buf_writer *writer, s32 value)
{
    u32 usign = (u32)value;
    do {
        u8 byte = usign & 0x7F;
        usign >>= 7;
        if (usign)
            byte |= 0x80;
        buf_u8_write(writer, byte);
    } while (usign);
}

static inline void buf_bytes_write(buf_writer *writer, const void *data, u32 n)
{
    if (!buf_writer_needs(writer, n))
        return;
    memcpy(writer->p + writer->len, data, n);
    writer->len += n;
}

static inline void buf_string_write(buf_writer *writer, const char *s, u32 n)
{
    buf_varint_write(writer, (s32)n);
    buf_bytes_write(writer, s, n);
}

static inline void buf_frame_write(buf_writer *out, const buf_writer *body)
{
    buf_varint_write(out, (s32)body->len);
    buf_bytes_write(out, body->p, body->len);
}

#endif
