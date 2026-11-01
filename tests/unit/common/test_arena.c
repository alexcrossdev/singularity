#include <sgt/test.h>

#include "test_common.h"

#include <singularity/allocator/arena.h>

SGT_CASE(test_arena_initialization) {
    sg_arena arena;

    SGT_REQUIRE(ctx, sg_arena_init(&arena, 4096));

    SGT_CHECK(ctx, arena.capacity == 4096);
    SGT_CHECK(ctx, arena.offset == 0);

    SGT_CHECK_NOT_NULL(ctx, arena.buffer);

    sg_arena_destroy(&arena);
}


