/*
 * allocator.h
 * Singularity allocator interface
 *
 * Copyright (c) 2026 Alex Cross
 */

#ifndef SG_ALLOCATOR_H
#define SG_ALLOCATOR_H

#include <singularity/types.h>

typedef struct sg_allocator sg_allocator;

typedef void *(*sg_allocator_alloc_fn)(
    sg_allocator *allocator,
    u32 size,
    u32 alignment
);

typedef void *(*sg_allocator_realloc_fn)(
    sg_allocator *allocator,
    void *ptr,
    u32 old_size,
    u32 new_size,
    u32 alignment
);

typedef void (*sg_allocator_free_fn)(
    sg_allocator *allocator,
    void *ptr,
    u32 size,
    u32 alignment
);

struct sg_allocator {
    sg_allocator_alloc_fn alloc;
    sg_allocator_realloc_fn realloc;
    sg_allocator_free_fn free;

    void *context;
};

void *sg_allocator_alloc(
    sg_allocator *allocator,
    u32 size,
    u32 alignment
);

void *sg_allocator_realloc(
    sg_allocator *allocator,
    void *ptr,
    u32 old_size,
    u32 new_size,
    u32 alignment
);

void sg_allocator_free(
    sg_allocator *allocator,
    void *ptr,
    u32 size,
    u32 alignment
);

#endif
