/*
 * memory.h
 * Singularity memory wrapper
 *
 * Copyright (c) 2026 Alex Cross
 */

#ifndef SG_MEMORY_H
#define SG_MEMORY_H

#include <singularity/types.h>

void *sgmemalloc(u32 size);
void *sgmemcalloc(u32 count, u32 size);
void *sgmemrealloc(void *ptr, u32 size);
void sgmemfree(void *ptr);

void *sgmemcopy(void *restrict dest, const void *restrict src, u32 size);
void *sgmemmove(void *dest, const void *src, u32 size);
void *sgmemset(void *dest, u8 value, u32 size);
s32 sgmemcmp(const void *lhs, const void *rhs, u32 size);

#endif
