
/*
 * log.c
 * Logging Implementation
 *
 * Copyright (c) 2026 Alex Cross
 */

#include <singularity/log.h>

#include <stdarg.h>
#include <stdatomic.h>
#include <stdio.h>
#include <time.h>

static _Atomic sg_log_level sg_log_runtime_level =
    SG_LOG_COMPILE_LEVEL;

static const char *const sg_log_level_names[] = {
    [SG_LOG_LEVEL_TRACE] = "TRACE",
    [SG_LOG_LEVEL_DEBUG] = "DEBUG",
    [SG_LOG_LEVEL_INFO]  = "INFO",
    [SG_LOG_LEVEL_WARN]  = "WARN",
    [SG_LOG_LEVEL_ERROR] = "ERROR",
    [SG_LOG_LEVEL_FATAL] = "FATAL",
};

static const char *sg_log_get_filename(const char *path)
{
    const char *filename = path;

    for (const char *p = path; *p != '\0'; ++p) {
        if (*p == '/' || *p == '\\') {
            filename = p + 1;
        }
    }

    return filename;
}

void sg_log_set_level(sg_log_level level)
{
    if (level < SG_LOG_LEVEL_TRACE || level > SG_LOG_LEVEL_OFF) {
        return;
    }

    atomic_store_explicit(
        &sg_log_runtime_level,
        level,
        memory_order_relaxed
    );
}

sg_log_level sg_log_get_level(void)
{
    return atomic_load_explicit(
        &sg_log_runtime_level,
        memory_order_relaxed
    );
}

void sg_log_write(
    sg_log_level level,
    const char *file,
    unsigned int line,
    const char *function,
    const char *format,
    ...
)
{
    if (level < SG_LOG_LEVEL_TRACE || level >= SG_LOG_LEVEL_OFF) {
        return;
    }

    if (level < atomic_load_explicit(
            &sg_log_runtime_level,
            memory_order_relaxed
        )) {
        return;
    }

    char buffer[1024];

    struct timespec ts;
    struct tm tm;

    if (timespec_get(&ts, TIME_UTC) != TIME_UTC) {
        return;
    }

    time_t timestamp = ts.tv_sec;
    struct tm *time_info = gmtime(&timestamp);

    if (time_info == NULL) {
        return;
    }

    tm = *time_info;

    int n = snprintf(
            buffer,
            sizeof(buffer),
            "%04d-%02d-%02d %02d:%02d:%02d.%03ld UTC [%-5s] [%s:%u] [%s] ",
            tm.tm_year + 1900,
            tm.tm_mon + 1,
            tm.tm_mday,
            tm.tm_hour,
            tm.tm_min,
            tm.tm_sec,
            ts.tv_nsec / 1000000L,
            sg_log_level_names[level],
            sg_log_get_filename(file),
            line,
            function
            );

    if (n < 0 || (size_t)n >= sizeof(buffer) - 2) {
        return;
    }

    va_list args;

    va_start(args, format);

    int m = vsnprintf(
        buffer + n,
        sizeof(buffer) - (size_t)n - 1,
        format,
        args
    );

    va_end(args);

    if (m < 0) {
        return;
    }

    size_t len = (size_t)n + (size_t)m;

    if (len > sizeof(buffer) - 2) {
        len = sizeof(buffer) - 2;
    }

    buffer[len++] = '\n';

    (void)fwrite(buffer, 1, len, stderr);
}
