#include "proto/registry_data.h"

#define PKT_S2C_CONFIG_REGISTRY_DATA 0x07
#define REGISTRY_DATA_MAX_ENTRIES 65536

b8 registry_data_write(
    buf_writer *body,
    const char *registry_id,
    u32 registry_id_len,
    const registry_data_entry *entries,
    u32 entry_count
)
{
    if (!body || !registry_id || (entry_count && !entries) ||
        entry_count > REGISTRY_DATA_MAX_ENTRIES || registry_id_len > INT32_MAX)
        return false;

    buf_varint_write(body, PKT_S2C_CONFIG_REGISTRY_DATA);
    buf_string_write(body, registry_id, registry_id_len);
    buf_varint_write(body, (s32)entry_count);

    if (body->err)
        return false;

    for (u32 i = 0; i < entry_count; i++) {
        const registry_data_entry *entry = &entries[i];

        if (!entry->id || entry->id_len > INT32_MAX ||
            (entry->nbt_len && !entry->nbt))
            return false;

        buf_string_write(body, entry->id, entry->id_len);

        buf_u8_write(body, entry->nbt != NULL ? 1 : 0);

        if (entry->nbt)
            buf_bytes_write(body, entry->nbt, entry->nbt_len);

        if (body->err)
            return false;
    }

    return !body->err;
}
