/*
 * assert.h
 * Processor utilties and constants
 *
 * Copyright (c) 2026 Alex Cross
 */

#ifndef SG_ASSERT_H
#define SG_ASSERT_H

#include "singularity/types.h"

#if defined(__clang__) || defined(__GNUC__)
    #define SG_NORETURN     __attribute__((noreturn))
    #define SG_BUILTIN_UNREACHABLE()  __builtin_unreachable()
#else
    #define SG_NORETURN
    #define SG_BUILTIN_UNREACHABLE() UNUSED(0)
#endif


/* Configure assertions */
#ifndef SG_ASSERTIONS_ENABLED
    #ifdef NDEBUG
        #define SG_ASSERTIONS_ENABLED 0
    #else
        #define SG_ASSERTIONS_ENABLED 1
    #endif
#endif

SG_NORETURN void sg_assert_fail(
        const char *expr,
        const char *file,
        u32 line,
        const char *function
);

/* If the compiler is changed all i need to do i change this define */
#define SG_STATIC_ASSERT(condition, message)    \
    static_assert((condition), message)

#if SG_ASSERTIONS_ENABLED
    #define SG_ASSERT(condition)                \
        do {                                    \
            if (!(condition)) {                 \
                sg_assert_fail(                 \
                    #condition,                 \
                    __FILE__,                   \
                    (u32)__LINE__,              \
                    __func__                    \
                );                              \
            }                                   \
        } while (0);

    #define SG_ASSERT_MSG(condition, message)   \
        do {                                    \
            if (!(condition)) {                 \
                sg_assert_fail(                 \
                    #message,                   \
                    __FILE__,                   \
                    (u32)__LINE__,              \
                    __func__                    \
                );                              \
            }                                   \
        } while (0);
#else
    #define SG_ASSERT(condition)                \
        UNUSED(condition)

    #define SG_ASSERT_MSG(condition, message)   \
        UNUSED(condition)
#endif

#if SG_ASSERTIONS_ENABLED
    #define SG_UNREACHABLE()                    \
        do {                                    \
            sg_assert_fail(                     \
                "UNREACHABLE_CODE",             \
                __FILE__,                       \
                (u32)__LINE__,                  \
                __func__                        \
            );                                  \
        } while (0)
#else
    #define SG_UNREACHABLE()                    \
        SG_BUILTIN_UNREACHABLE()
#endif

#endif
