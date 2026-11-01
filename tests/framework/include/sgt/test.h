/*
 * test.h
 * Testing framework
 *
 * Copyright (c) 2026 Alex Cross
 */

#ifndef SG_TEST_H
#define SG_TEST_H

#include <singularity/types.h>

typedef struct sgt_context sgt_context;

typedef void (*sgt_fn)(sgt_context *ctx);

typedef struct {
    const char *suite;
    const char *name;
    sgt_fn function;
} sgt_case;

struct sgt_context {
    const sgt_case *test;
    u32 assertion_count;
    u32 failure_count;
};

void sgt_fail(
    sgt_context *ctx,
    const char *file,
    u32 line,
    const char *expr
);

b8 sgt_failed(const sgt_context *ctx);

#define SGT_CASE(name) \
    void name(sgt_context *ctx)

#define SGT_CHECK(ctx, expr)            \
    do {                                \
        (ctx)->assertion_count++;       \
        if (!(expr)) {                  \
            sgt_fail((ctx), __FILE__,   \
            (u32)__LINE__,              \
            #expr);                     \
        }                               \
    } while (0)

#define SGT_REQUIRE(ctx, expr)            \
    do {                                \
        (ctx)->assertion_count++;       \
        if (!(expr)) {                  \
            sgt_fail((ctx), __FILE__,   \
            (u32)__LINE__,              \
            #expr);                     \
            return;                     \
        }                               \
    } while (0)

#define SGT_CHECK_NULL(ctx, value)      \
    SGT_CHECK((ctx), (value) == nullptr)


#define SGT_CHECK_NOT_NULL(ctx, value)      \
    SGT_CHECK((ctx), (value) != nullptr)

#define SGT_CHECK_TRUE(ctx, value)      \
    SGT_CHECK((ctx), (value) == true)

#define SGT_CHECK_FALSE(ctx, value)      \
    SGT_CHECK((ctx), (value) == false)

#endif
