#include "core/buf.h"
#include <singularity/base.h>
#include <singularity/log.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "proto/handlers.h"

#include "proto/versions/v26_3/proto.h"
#include "proto/registry_data.h"
#include "proto/versions/v26_3/damage_type_registry.h"
#include "data_registries.h"

#define PKT_S2C_CONFIG_FINISH_CONFIGURATION PKT_26_3_CONFIGURATION_S2C_FINISH_CONFIGURATION
#define PKT_S2C_CONFIG_REGISTRY_DATA PKT_26_3_CONFIGURATION_S2C_REGISTRY_DATA
#define PKT_S2C_CONFIG_UPDATE_ENABLED_FEATURES PKT_26_3_CONFIGURATION_S2C_UPDATE_ENABLED_FEATURES
#define PKT_S2C_CONFIG_UPDATE_TAGS PKT_26_3_CONFIGURATION_S2C_UPDATE_TAGS
#define PKT_S2C_CONFIG_SELECT_KNOWN_PACKS PKT_26_3_CONFIGURATION_S2C_SELECT_KNOWN_PACKS

#define PKT_C2S_CONFIG_CLIENT_INFORMATION PKT_26_3_CONFIGURATION_C2S_CLIENT_INFORMATION
#define PKT_C2S_CONFIG_COOKIE_RESPONSE PKT_26_3_CONFIGURATION_C2S_COOKIE_RESPONSE
#define PKT_C2S_CONFIG_PLUGIN_MESSAGE PKT_26_3_CONFIGURATION_C2S_CUSTOM_PAYLOAD
#define PKT_C2S_CONFIG_ACKNOWLEDGE_FINISH_CONFIGURATION PKT_26_3_CONFIGURATION_C2S_FINISH_CONFIGURATION
#define PKT_C2S_CONFIG_KEEP_ALIVE PKT_26_3_CONFIGURATION_C2S_KEEP_ALIVE
#define PKT_C2S_CONFIG_PONG PKT_26_3_CONFIGURATION_C2S_PONG
#define PKT_C2S_CONFIG_RESOURCE_PACK_RESPONSE PKT_26_3_CONFIGURATION_C2S_RESOURCE_PACK
#define PKT_C2S_CONFIG_KNOWN_PACKS PKT_26_3_CONFIGURATION_C2S_SELECT_KNOWN_PACKS
#define PKT_C2S_CONFIG_CUSTOM_CLICK_ACTION PKT_26_3_CONFIGURATION_C2S_CUSTOM_CLICK_ACTION
#define PKT_C2S_CONFIG_ACCEPT_CODE_OF_CONDUCT PKT_26_3_CONFIGURATION_C2S_ACCEPT_CODE_OF_CONDUCT

static int configuration_send_finish(conn *c)
{
    u8 buf[5];
    buf_writer body = buf_writer_init(buf, sizeof(buf));

    buf_varint_write(&body, PKT_S2C_CONFIG_FINISH_CONFIGURATION);

    if (body.err)
        return -1;

    int rc = send_packet(c, &body);

    SG_LOG_DEBUG("io-%d: sending FINISH_CONFIGURATION rc=%d",
              c->io->id, rc);

    return rc;
}

static int configuration_send_known_packs(conn *c)
{
    u8 buf[5];
    buf_writer body = buf_writer_init(buf, sizeof(buf));

    buf_varint_write(&body, PKT_S2C_CONFIG_SELECT_KNOWN_PACKS);
    buf_varint_write(&body, 0); /* Zero known packs. */

    if (body.err)
        return -1;

    return send_packet(c, &body);
}

static int configuration_send_enabled_features(conn *c)
{
    static const char feature[] = "minecraft:vanilla";

    u8 buf[64];
    buf_writer body = buf_writer_init(buf, sizeof(buf));

    /* Clientbound Configuration: Update Enabled Features (0x0D) */
    buf_varint_write(&body, PKT_S2C_CONFIG_UPDATE_ENABLED_FEATURES);

    /* Array contains one feature identifier. */
    buf_varint_write(&body, 1);
    buf_string_write(&body, feature, sizeof(feature) - 1);

    if (body.err)
        return -1;

    int rc = send_packet(c, &body);

    SG_LOG_DEBUG("io-%d: sending UPDATE_ENABLED_FEATURES rc=%d",
              c->io->id, rc);

    return rc;
}

static int configuration_send_registry_data(
    conn *c,
    const char *registry_id,
    u32 registry_id_len,
    const registry_data_entry *entries,
    u32 entry_count)
{
    u64 capacity = registry_id_len + 16u;
    for (u32 i = 0; i < entry_count; i++)
        capacity += (u64)entries[i].id_len + entries[i].nbt_len + 16u;
    if (capacity > UINT32_MAX)
        return -1;
    u8 *buf = malloc((size_t)capacity);
    if (!buf)
        return -1;
    buf_writer body = buf_writer_init(buf, (u32)capacity);

    if (!registry_data_write(
            &body,
            registry_id,
            registry_id_len,
            entries,
            entry_count)) {
        SG_LOG_ERROR("io-%d: failed to encode registry %.*s",
                  c->io->id, registry_id_len, registry_id);
        free(buf);
        return -1;
    }

    int rc = send_packet(c, &body);
    free(buf);

    SG_LOG_DEBUG("io-%d: sending REGISTRY_DATA registry=%.*s entries=%u rc=%d",
              c->io->id, registry_id_len, registry_id, entry_count, rc);

    return rc;
}

static int configuration_send_damage_type_tags(conn *c)
{
    u8 buf[16384];
    buf_writer body = buf_writer_init(buf, sizeof(buf));

    if (!damage_type_registry_write_tags(&body)) {
        SG_LOG_ERROR("io-%d: failed to encode damage type tags", c->io->id);
        return -1;
    }

    int rc = send_packet(c, &body);

    SG_LOG_DEBUG("io-%d: sending UPDATE_TAGS rc=%d", c->io->id, rc);

    return rc;
}

static int configuration_send_registries(conn *c)
{
    for (u32 i = 0; i < mc_26_3_data_registry_count; i++) {
        const mc_26_3_data_registry *registry = &mc_26_3_data_registries[i];
        u32 registry_name_len = (u32)strlen(registry->name);
        if (configuration_send_registry_data(
                c,
                registry->name,
                registry_name_len,
                registry->entries,
                registry->entry_count) < 0)
            return -1;
    }
    return 0;
}

b8 configuration_handle(struct server *srv, conn *c, s32 id, buf_reader *r)
{
    switch (id) {
        case PKT_C2S_CONFIG_PLUGIN_MESSAGE: {
            const char *channel = NULL;
            u32 channel_len = buf_string_read(r, 32767, &channel);

            if (r->err) {
                SG_LOG_ERROR("malformed configuration plugin message");
                return false;
            }

            u32 payload_len = (u32)(r->end - r->p);

            SG_LOG_DEBUG("configuration plugin message: channel_len=%u payload_len=%u",
                    channel_len, payload_len);

            r->p = r->end;

            return true;
        }

        case PKT_C2S_CONFIG_CLIENT_INFORMATION: {
            const char *locale = NULL;
            u32 locale_len = buf_string_read(r, 16, &locale);

            u8 client_render_distance = buf_u8_read(r);
            s32 chat_mode = buf_varint_read(r);
            b8 chat_colors_enabled = buf_u8_read(r);
            u8 displayed_skin_parts_bit_mask = buf_u8_read(r);
            s32 main_hand = buf_varint_read(r);
            b8 enable_text_filtering = buf_u8_read(r);
            b8 allow_server_listing = buf_u8_read(r);
            s32 particle_status = buf_varint_read(r);

            SG_LOG_DEBUG("io-%d: PKT_C2S_CONFIG_CLIENT_INFORMATION "
                      "locale: %.*s \n\t\t\t"
                      "client_render_distance: %d \n\t\t\t"
                      "chat_mode: %d \n\t\t\t"
                      "chat_colors_enabled: %b \n\t\t\t"
                      "displayed_skin_parts_bit_mask: %d \n\t\t\t"
                      "main_hand: %d \n\t\t\t"
                      "enable_text_filtering: %b \n\t\t\t"
                      "allow_server_listing: %b \n\t\t\t"
                      "particle_status: %d", c->io->id, locale_len, locale,
                      client_render_distance,
                      chat_mode, chat_colors_enabled, displayed_skin_parts_bit_mask,
                      main_hand, enable_text_filtering, allow_server_listing,
                      particle_status);

            if (configuration_send_known_packs(c) < 0)
                return false;

            return true;
        }

        case PKT_C2S_CONFIG_ACKNOWLEDGE_FINISH_CONFIGURATION: {

            SG_LOG_DEBUG("io-%d: PKT_C2S_CONFIG_ACKNOWLEDGE_FINISH_CONFIGURATION", c->io->id);

            c->state = CS_PLAY;
            return play_send_join(c);
        }

        case PKT_C2S_CONFIG_KNOWN_PACKS: {
            SG_LOG_DEBUG("io-%d: PKT_C2S_CONFIG_KNOWN_PACKS", c->io->id);
            s32 count = buf_varint_read(r);

            if (r->err || count < 0 || count > 64) {
                SG_LOG_ERROR("io-%d: invalid known packs count", c->io->id);
                return false;
            }

            for (s32 i = 0; i < count; i++) {
                const char *namespace_name = NULL;
                const char *pack_id = NULL;
                const char *version = NULL;

                u32 namespace_len = buf_string_read(r, 32767, &namespace_name);
                u32 pack_id_len = buf_string_read(r, 32767, &pack_id);
                u32 version_len = buf_string_read(r, 32767, &version);

                if (r->err) {
                    SG_LOG_DEBUG("io-%d: malformed known packs entry", c->io->id);
                    return false;
                }

                SG_LOG_DEBUG("io-%d: Known Pack: %.*s:%.*s version %.*s",
                  c->io->id,
                  namespace_len, namespace_name,
                  pack_id_len, pack_id,
                  version_len, version);
            }

            if (r->p != r->end) {
                SG_LOG_ERROR("io-%d: trailing bytes in known packs packet",
                      c->io->id);
                return false;
            }

            SG_LOG_DEBUG("io-%d: received known packs response (%d entries)",
                  c->io->id, count);

            if (configuration_send_enabled_features(c) < 0)
                return false;

            if (configuration_send_registries(c) < 0)
                return false;

            if (configuration_send_damage_type_tags(c) < 0)
                return false;

            if (configuration_send_finish(c) < 0)
                return false;

            return true;
        }

    }
    (void)srv;
    return false;
}
