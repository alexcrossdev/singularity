/*
 * runner.h
 * Running framework
 *
 * Copyright (c) 2026 Alex Cross
 */

#ifndef SG_RUNNER_H
#define SG_RUNNER_H

#include <sgt/test.h>

typedef struct {
    const char *suite_filter;
    const char *name_filter;
    b8 list_only;
} sgt_runner_config;

typedef struct {
    u64 total;
    u64 passed;
    u64 failed;
    u64 assertions;
} sgt_runner_result;

sgt_runner_result sgt_run(
    const sgt_case *tests,
    u32 test_count,
    const sgt_runner_config *config
);

#endif
