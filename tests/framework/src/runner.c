#include <sgt/runner.h>

#include <stdio.h>
#include <string.h>

static b8 sgt_matches(
    const sgt_case *test,
    const sgt_runner_config *config
)
{
    if (config == nullptr)
        return true;

    if (config->suite_filter != nullptr &&
            strstr(test->suite, config->suite_filter) == nullptr)
        return false;

    if (config->name_filter != nullptr &&
            strstr(test->name, config->name_filter) == nullptr)
        return false;

    return true;
}

sgt_runner_result sgt_run(
    const sgt_case *tests,
    u32 test_count,
    const sgt_runner_config *config
)
{
    sgt_runner_result result = {0};

    if (tests == nullptr)
        return result;

    for (u32 i = 0; i < test_count; i++) {
        const sgt_case *test = &tests[i];

        if (test->suite == nullptr ||
            test->name == nullptr ||
            test->function == nullptr)
            continue;

        if (!sgt_matches(test, config))
            continue;

        if (config != nullptr && config->list_only) {
            printf("%s.%s\n", test->suite, test->name);
            continue;
        }

        sgt_context ctx = {
            .test = test,
            .assertion_count = 0,
            .failure_count = 0
        };

        printf("[   RUN   ] %s.%s\n", test->suite, test->name);

        test->function(&ctx);

        result.total++;
        result.assertions += ctx.assertion_count;

        if (sgt_failed(&ctx)) {
            result.failed++;
            printf("[  FAILED ] %s.%s\n", test->suite, test->name);
        } else {
            result.passed++;
            printf("[    OK   ] %s.%s\n", test->suite, test->name);
        }
    }

    if (config == nullptr || !config->list_only) {
        printf("\n");
        printf("Test results:\n");
        printf("  Total:      %zu\n", result.total);
        printf("  Passed:     %zu\n", result.passed);
        printf("  Failed:     %zu\n", result.failed);
        printf("  Assertions: %zu\n", result.assertions);
    }

    return result;
}
