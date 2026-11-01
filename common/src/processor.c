#include <singularity/processor.h>

#include <singularity/assert.h>

#include <unistd.h>

b8 valid_cacheline(void)
{
    long line_size = sysconf(_SC_LEVEL1_DCACHE_LINESIZE);
    if (line_size != CACHELINE)
        return false;

    return true;
}
