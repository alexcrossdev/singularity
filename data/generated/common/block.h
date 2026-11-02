#ifndef SGD_BLOCK_H
#define SGD_BLOCK_H

#include <singularity/types.h>

typedef u32 block_id;
typedef u32 block_state_id;

#define BLOCK_INVALID_ID ((u32)-1)

typedef struct {
    block_state_id default_state;
    block_state_id first_state;
    u32 state_count;
} block_info;

#endif
