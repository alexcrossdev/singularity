/*
 * status.h
 * Singularity status signals to be using in bit mask returns, b8, b32
 *
 * Copyright (c) 2026 Alex Cross
 */

#ifndef SG_STATUS_H
#define SG_STATUS_H

typedef enum {
    SG_OK = 0,
    SG_OUT_OF_MEM,
    SG_OUT_OF_BOUNDS,
    SG_INVALID_PROCESSOR
} SG_STATUS;

#endif
