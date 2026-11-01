#include <sgt/runner.h>

#include <singularity/array.h>
#include <string.h>

#include "test_common.h"

static const sgt_case tests[] = {
    {
        .suite = "common",
        .name = "arena_initialization",
        .function = test_arena_initialization
    }
};

int main(int argc, char **argv) {
    sgt_runner_config config = {
        .suite_filter = nullptr,
        .name_filter = nullptr,
        .list_only = false
    };

    for (int i = 1; i < argc; ++i) {
        if (strcmp(argv[i], "--list") == 0) {
            config.list_only = true;
        } else if (strcmp(argv[i], "--suite") == 0 && i + 1 < argc) {
            config.suite_filter = argv[++i];
        } else if (strcmp(argv[i], "--name") == 0 && i + 1 < argc) {
            config.name_filter = argv[++i];
        }
    }

    sgt_runner_result result = sgt_run(tests, ARRAY_LEN(tests), &config);

    return result.failed == 0 ? 0 : 1;
}
