#include <singularity/allocator/pool.h>

#include <singularity/allocator/allocator.h>
#include <singularity/log.h>
#include <singularity/memory.h>
#include <singularity/types.h>
#include <singularity/macros.h>

#include <stddef.h>
#include <stdlib.h>

static b8 sg_pool_power_of_two(u32 alignment)
{
    return (alignment & (alignment - 1)) != 0;
}

static b8 sg_pool_align_up(u32 value, u32 alignment, u32 *result)
{
    if (value > U32_MAX - (alignment - 1))
        return false;

    *result = (value + alignment - 1) & ~(alignment - 1);

    return true;
}

static b8 sg_pool_is_valid(const sg_pool *pool)
{
    return pool != NULL
        && pool->pool != NULL
        && pool->free_list != NULL
        && pool->capacity != 0
        && pool->stride != 0;
}

static b8 sg_pool_owns_pointer(
    const sg_pool *pool,
    const void *ptr,
    u32 *index
)
{
    if (!sg_pool_is_valid(pool) || ptr == NULL)
        return false;

    u64 base = (u64)pool->pool;
    u64 address = (u64)ptr;

    if (address < base)
        return false;

    u64 offset = address - base;

    if (offset >= pool->stride * pool->capacity)
        return false;

    if (offset % pool->stride != 0)
        return false;

    if (index != NULL)
        *index = (u32)(offset / pool->stride);

    return true;
}

b8 sg_pool_init(
    sg_pool *pool,
    u32 element_size,
    u32 capacity,
    u32 alignment
)
{
    if (pool == nullptr || element_size <= 0 ||
            !sg_pool_power_of_two(alignment) || capacity <= 0)
        return false;

    *pool = (sg_pool){0};

    if (alignment < _Alignof(void *))
        alignment = _Alignof(void *);

    if (alignment < _Alignof(max_align_t))
        alignment = _Alignof(max_align_t);

    u32 size = element_size;

    if (size < sizeof(void *))
        size = sizeof(void *);

    u32 stride;

    if (!sg_pool_align_up(size, alignment, &stride))
        return false;

    if (capacity > U32_MAX / stride)
        return false;

    if (element_size > stride) {
        SG_LOG_DEBUG("Element size > Element Stride");
        return false;
    }

    u32 total_size = stride * capacity;

    pool->pool = aligned_alloc(alignment, total_size); /* TODO: Add alignment alloc in memory.h/c */
    if (pool->pool == nullptr)
        return false;

    pool->stride = stride;
    pool->element_size = size;
    pool->capacity = capacity;
    pool->available = capacity;

    sg_pool_reset(pool);

    return true;
}

void sg_pool_destroy(sg_pool *pool)
{
    if (pool == nullptr)
        return;

    sgmemfree(pool->pool);
    *pool = (sg_pool){0};
}

void sg_pool_reset(sg_pool *pool)
{
    u8 *memory = (u8 *)pool->pool;

    for (u32 i = 0; i < pool->capacity; i++) {
        void *element = memory + (i * pool->stride);

        void *next = (i + 1 < pool->capacity)
            ? memory + ((i + 1) * pool->stride) : nullptr;

        *(void **)element = next;
    }

    pool->free_list = pool->pool;
}

void *sg_pool_alloc(sg_pool *pool)
{
    if (pool == nullptr)
        return nullptr;

    void *element = pool->free_list;

    pool->free_list = *(void **)element; /* Free head is next */
    pool->available--;

    return element;
}

void sg_pool_free(sg_pool *pool, void *ptr)
{
    if (pool == nullptr)
        return;

    u8 *start = (u8 *)pool->pool;
    u8 *ptr_c = (u8 *)ptr;

    if (ptr_c < start) {
        SG_LOG_ERROR("Pointer not in the pool");
        return;
    }

    u32 offset = (u32)(ptr_c - start);

    if (offset >= (u32)pool->stride * pool->capacity)
        return;

    if (offset % pool->stride != 0)
        return;

    *(void **)ptr = pool->free_list;
    pool->free_list = ptr;
    pool->available++;
}

u32 sg_pool_get_used(const sg_pool *pool)
{
    if (pool == nullptr)
        return 0;

    return pool->capacity - pool->available;
}

u32 sg_pool_get_available(const sg_pool *pool)
{
    if (pool == nullptr)
        return 0;

    return pool->available;
}

static void *sg_pool_allocator_alloc(
    sg_allocator *allocator,
    u32 size,
    u32 alignment
)
{
    if (allocator == nullptr || allocator->context == nullptr)
        return nullptr;

    sg_pool *pool = allocator->context;

    if (size == 0 || size > pool->element_size)
        return nullptr;

    if (alignment == 0 ||
            !sg_pool_power_of_two(alignment) ||
            alignment > pool->element_size)
        return nullptr;

    return sg_pool_alloc(pool);
}

static void *sg_pool_allocator_realloc(
    sg_allocator *allocator,
    void *ptr,
    u32 old_size,
    u32 new_size,
    u32 alignment
)
{
    (void)old_size;

    if (allocator == nullptr || allocator->context == nullptr)
        return nullptr;

    sg_pool *pool = allocator->context;

    if (ptr == nullptr)
        return sg_pool_allocator_alloc(
                allocator,
                new_size,
                alignment
        );

    if (new_size == 0) {
        sg_pool_free(pool, ptr);
        return nullptr;
    }

    if (new_size > pool->element_size)
        return nullptr;

    if (alignment == 0 ||
            !sg_pool_power_of_two(alignment) ||
            alignment > pool->element_size)
        return nullptr;

    u32 index;

    if (!sg_pool_owns_pointer(pool, ptr, &index))
        return nullptr;

    return ptr;
}

static void sg_pool_allocator_free(
    sg_allocator *allocator,
    void *ptr,
    u32 size,
    u32 alignment
)
{
    (void)size;
    (void)alignment;

    if (allocator == nullptr || allocator->context == nullptr)
        return;

    sg_pool_free(allocator->context, ptr);
}

sg_allocator sg_pool_allocator(sg_pool *pool)
{
    return (sg_allocator) {
        .alloc = sg_pool_allocator_alloc,
        .realloc = sg_pool_allocator_realloc,
        .free = sg_pool_allocator_free,
        .context = pool
    };
}
