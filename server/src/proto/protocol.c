#include "proto/protocol.h"

#include <singularity/array.h>

#include "proto/versions/v26_3/proto.h"

extern const protocol_layer protocol_layer_v26_3;

static const protocol_layer *const protocol_layers[] = {
    &protocol_layer_v26_3,
};

const protocol_layer *protocol_layer_find(u32 protocol_version)
{
    for (u32 i = 0; i < ARRAY_LEN(protocol_layers); i++)
        if (protocol_layers[i]->protocol_version == protocol_version)
            return protocol_layers[i];
    return NULL;
}

const protocol_layer *protocol_layer_default(void)
{
    return protocol_layers[0];
}
#include <singularity/array.h>

