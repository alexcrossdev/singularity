/*
 * arena.h
 * Arena Allocator
 *
 * Warning: Not thread safe
 *
 * Copyright (c) 2026 Alex Cross
 */

#ifndef SG_ARENA_H
#define SG_ARENA_H

#include <singularity/allocator/allocator.h>
#include <singularity/types.h>

typedef struct {
    u8 *buffer;
    u32 capacity;
    u32 offset;
} sg_arena;

b8 sg_arena_init(sg_arena *arena, u32 capacity);
void sg_arena_destroy(sg_arena *arena);
void sg_arena_reset(sg_arena *arena);

void *sg_arena_alloc(
    sg_arena *arena,
    u32 size,
    u32 alignment
);

u32 sg_arena_get_used(const sg_arena *arena);
u32 sg_arena_get_remaining(const sg_arena *arena);

sg_allocator sg_arena_allocator(sg_arena *arena);

#endif
