#include <sgt/test.h>

#include <stdio.h>

void sgt_fail(sgt_context *ctx, const char *file, u32 line, const char *expr)
{
    if (ctx == nullptr)
        return;

    ctx->failure_count++;

    fprintf(
        stderr,
        "    FAILURE: %s:%u: %s\n",
        file,
        line,
        expr
    );
}

b8 sgt_failed(const sgt_context *ctx)
{
    if (ctx == nullptr)
        return true;

    return ctx->failure_count != 0;
}
