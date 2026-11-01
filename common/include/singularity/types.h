/*
 * types.h
 * Primitive Types
 *
 * Copyright (c) 2026 Alex Cross
 */

#ifndef SG_TYPES_H
#define SG_TYPES_H

typedef char                s8;
typedef short               s16;
typedef int                 s32;
typedef long int            s64;

typedef unsigned char       u8;
typedef unsigned short      u16;
typedef unsigned int        u32;
typedef unsigned long int   u64;

typedef char                b8;
typedef int                 b32;

typedef float               f32;
typedef double              f64;

static_assert(sizeof(s8) == 1, "s8 is required to be 1 byte");
static_assert(sizeof(s16) == 2, "s16 is required to be 2 bytes");
static_assert(sizeof(s32) == 4, "s32 is required to be 4 bytes");
static_assert(sizeof(s64) == 8, "s64 is required to be 8 bytes");

static_assert(sizeof(u8) == 1, "s8 is required to be 1 byte");
static_assert(sizeof(u16) == 2, "s16 is required to be 2 bytes");
static_assert(sizeof(u32) == 4, "s32 is required to be 4 bytes");
static_assert(sizeof(u64) == 8, "s64 is required to be 8 bytes");

static_assert(sizeof(b8) == 1, "b8 is required to be 1 bytes");
static_assert(sizeof(b32) == 4, "b32 is required to be 4 bytes");

static_assert(sizeof(f32) == 4, "f32 is required to be 4 bytes");
static_assert(sizeof(f64) == 8, "f64 is required to be 8 bytes");

#define U32_MAX     4294967295
#define S32_MAX     2147483647
#define S32_MIN     -2147483648

#define U64_MAX     18446744073709551615
#define S64_MAX     9223372036854775807
#define S64_MIN     -9223372036854775808

#endif
