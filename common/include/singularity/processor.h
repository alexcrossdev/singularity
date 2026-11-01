/*
 * processor.h
 * Processor utilties and constants
 *
 * Copyright (c) 2026 Alex Cross
 */

#ifndef SG_PROCESSOR_H
#define SG_PROCESSOR_H

#include <singularity/types.h>
#include <singularity/status.h>

#include <stdlib.h>

/* Singularity only targets processors with a cacheline size of 64 bytes */
#define CACHELINE 64

#define CACHE_ALIGN alignas(CACHELINE)

#define VALIDATE_PROCESSOR()        \
{                                   \
    if (!valid_cacheline())         \
        exit(SG_INVALID_PROCESSOR); \
}

b8 valid_cacheline(void);

#endif
