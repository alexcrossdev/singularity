/*
 * pool.h
 * Pool Allocator
 *
 * Warning: Not thread safe
 *
 * Copyright (c) 2026 Alex Cross
 */

#ifndef SG_POOL_H
#define SG_POOL_H

#include <singularity/allocator/allocator.h>

typedef struct {
    u8 *pool;

    u32 capacity;           // Number of elements
    u32 element_size;       // Element size (
    u32 element_alignment;  // 
    u32 stride;             // Aligned power 2 size

    void *free_list;
    u32 available;
} sg_pool;

b8 sg_pool_init(
    sg_pool *pool,
    u32 element_size,
    u32 capacity,
    u32 alignment
);

void sg_pool_destroy(sg_pool *pool);
void sg_pool_reset(sg_pool *pool);

void *sg_pool_alloc(sg_pool *pool);
void sg_pool_free(sg_pool *pool, void *ptr);

u32 sg_pool_get_used(const sg_pool *pool);
u32 sg_pool_get_available(const sg_pool *pool);

sg_allocator sg_pool_allocator(sg_pool *pool);

#endif
