/*
 * log.h
 * Singularity logger
 *
 * Copyright (c) 2026 Alex Cross
 */

#ifndef SG_LOG_H
#define SG_LOG_H

#include <singularity/types.h>

typedef enum {
    SG_LOG_LEVEL_TRACE = 0,
    SG_LOG_LEVEL_DEBUG,
    SG_LOG_LEVEL_INFO,
    SG_LOG_LEVEL_WARN,
    SG_LOG_LEVEL_ERROR,
    SG_LOG_LEVEL_FATAL,
    SG_LOG_LEVEL_OFF
} sg_log_level;

#ifndef SG_LOG_COMPILE_LEVEL
    #define SG_LOG_COMPILE_LEVEL SG_LOG_LEVEL_TRACE
#endif

void sg_log_set_level(sg_log_level level);
sg_log_level sg_log_get_level(void);

#if defined(__clang__) || defined(__GNUC__)
    __attribute__((format(printf, 5, 6)))
#endif
void sg_log_write(
    sg_log_level level,
    const char *file,
    u32 line,
    const char *function,
    const char *format,
    ...
);

#define SG_LOG(level, ...)                                      \
    do {                                                        \
        if ((level) >= SG_LOG_COMPILE_LEVEL &&                  \
            (level) < SG_LOG_LEVEL_OFF) {                       \
            sg_log_write(                                       \
                (level),                                        \
                __FILE__,                                       \
                __LINE__,                                       \
                __func__,                                       \
                __VA_ARGS__                                     \
            );                                                  \
        }                                                       \
    } while (0)

#define SG_LOG_TRACE(...) \
    SG_LOG(SG_LOG_LEVEL_TRACE, __VA_ARGS__)

#define SG_LOG_DEBUG(...) \
    SG_LOG(SG_LOG_LEVEL_DEBUG, __VA_ARGS__)

#define SG_LOG_INFO(...) \
    SG_LOG(SG_LOG_LEVEL_INFO, __VA_ARGS__)

#define SG_LOG_WARN(...) \
    SG_LOG(SG_LOG_LEVEL_WARN, __VA_ARGS__)

#define SG_LOG_ERROR(...) \
    SG_LOG(SG_LOG_LEVEL_ERROR, __VA_ARGS__)

#define SG_LOG_FATAL(...) \
    SG_LOG(SG_LOG_LEVEL_FATAL, __VA_ARGS__)

#endif
