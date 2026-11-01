#include <singularity/allocator/arena.h>

#include <singularity/memory.h>
#include <singularity/macros.h>

b8 sg_arena_init(sg_arena *arena, u32 capacity)
{
    if (arena == nullptr || capacity == 0)
        return false;

    u8 *buffer = sgmemalloc(capacity);
    if (buffer == nullptr)
        return false;

    arena->buffer = buffer;
    arena->capacity = capacity;
    arena->offset = 0;

    return true;
}

void sg_arena_destroy(sg_arena *arena)
{
    if (arena == nullptr)
        return;

    sgmemfree(arena->buffer);
    arena->buffer = nullptr;
    arena->capacity = 0;
    arena->offset = 0;
}

void sg_arena_reset(sg_arena *arena)
{
    if (arena == nullptr)
        return;

    arena->offset = 0;
}

void *sg_arena_alloc(
    sg_arena *arena,
    u32 size,
    u32 alignment
)
{
    if (arena == nullptr || arena->buffer == nullptr || size == 0)
        return nullptr;

    if (alignment == 0 || (alignment & (alignment - 1)) != 0)
            return nullptr;

    u64 current = (u64)(arena->buffer + arena->offset);
    u64 aligned = (current + alignment - 1) & ~(u64)(alignment - 1);
    u32 padding = (u32)(aligned - current);

    if (padding > arena->capacity - arena->offset)
        return nullptr;

    u32 available = arena->capacity - arena->offset - padding;

    if (size > available)
        return nullptr;

    arena->offset += padding + size;

    return (void *)aligned;
}

u32 sg_arena_get_used(const sg_arena *arena)
{
    return arena != nullptr ? arena->offset : 0;
}

u32 sg_arena_get_remaining(const sg_arena *arena)
{
    if (arena == nullptr || arena->offset > arena->capacity)
        return 0;

    return arena->capacity - arena->offset;
}

static void *sg_arena_allocator_alloc(
    sg_allocator *allocator,
    u32 size,
    u32 alignment
)
{
    return sg_arena_alloc(allocator->context, size, alignment);
}

static void *sg_arena_allocator_realloc(
    sg_allocator *allocator,
    void *ptr,
    u32 old_size,
    u32 new_size,
    u32 alignment
)
{
    UNUSED(old_size);

    if (ptr == nullptr) {
        return sg_arena_alloc(
            allocator->context,
            new_size,
            alignment
        );
    }

    if (new_size == 0)
        return nullptr;

    void *new_ptr = sg_arena_alloc(
        allocator->context,
        new_size,
        alignment
    );

    if (new_ptr == nullptr)
        return nullptr;

    u32 copy_size = old_size < new_size ? old_size : new_size;

    sgmemcopy(new_ptr, ptr, copy_size);

    return new_ptr;
}

static void sg_arena_allocator_free(
    sg_allocator *allocator,
    void *ptr,
    u32 size,
    u32 alignment
)
{
    UNUSED(allocator);
    UNUSED(ptr);
    UNUSED(size);
    UNUSED(alignment);
}

sg_allocator sg_arena_allocator(sg_arena *arena)
{
    return (sg_allocator) {
        .alloc = sg_arena_allocator_alloc,
        .realloc = sg_arena_allocator_realloc,
        .free = sg_arena_allocator_free,
        .context = arena
    };
}
