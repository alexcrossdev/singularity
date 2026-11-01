#include <singularity/memory.h>

#include <stdlib.h>
#include <string.h>

void *sgmemalloc(u32 size)
{
    return malloc(size);
}

void *sgmemcalloc(u32 count, u32 size)
{
    return calloc(count, size);
}

void *sgmemrealloc(void *ptr, u32 size)
{
    return realloc(ptr, size);
}

void sgmemfree(void *ptr)
{
    free(ptr);
}

void *sgmemcopy(void *restrict dest, const void *restrict src, u32 size)
{
    return memcpy(dest, src, size);
}

void *sgmemmove(void *dest, const void *src, u32 size)
{
    return memmove(dest, src, size);
}

void *sgmemset(void *dest, u8 value, u32 size)
{
    return memset(dest, value, size);
}

s32 sgmemcmp(const void *lhs, const void *rhs, u32 size)
{
    return memcmp(lhs, rhs, size);
}
