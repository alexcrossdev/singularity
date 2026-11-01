#include <singularity/assert.h>

#include <stdio.h>
#include <stdlib.h>

SG_NORETURN void sg_assert_fail(
        const char *expr,
        const char *file,
        u32 line,
        const char *function
)
{
    fprintf(
        stderr,
        "\n"
        "[SINGULARITY ASSERTION FAILED]\n"
        "Expression : %s\n"
        "File       : %s\n"
        "Line       : %u\n"
        "Function   : %s\n",
        expr,
        file,
        line,
        function
    );

    fflush(stderr);

    abort();
}
