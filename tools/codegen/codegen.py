import argparse
from pathlib import Path
import tomllib

from .minecraft import (
    download_server_jar,
    extract_server_data,
    get_version_data,
)

from .generators import (
    generate_packet_ids,
    generate_blocks,
    generate_block_states,
    generate_registries,
    generate_data_registries,
)

ROOT = Path(__file__).resolve().parents[2]
DATA_DIR = ROOT / "data" / "minecraft"

DATA_REGISTRIES = (
    "minecraft:dimension_type",
    "minecraft:timeline",
    "minecraft:world_clock",
    "minecraft:jukebox_song",
    "minecraft:banner_pattern",
    "minecraft:instrument",
    "minecraft:decorated_pot_pattern",
    "minecraft:worldgen/biome",
    "minecraft:damage_type",
    "minecraft:block_transformer",
    "minecraft:cat_variant",
    "minecraft:cat_sound_variant",
    "minecraft:chicken_sound_variant",
    "minecraft:chicken_variant",
    "minecraft:cow_sound_variant",
    "minecraft:cow_variant",
    "minecraft:frog_variant",
    "minecraft:painting_variant",
    "minecraft:pig_sound_variant",
    "minecraft:pig_variant",
    "minecraft:wolf_sound_variant",
    "minecraft:wolf_variant",
    "minecraft:zombie_nautilus_variant",
    "minecraft:trim_material",
)


def main():
    parser = argparse.ArgumentParser(
        description="Singularity Minecraft protocol code generator"
    )

    parser.add_argument(
        "version",
        help="Minecraft version to generate (e.g. 26.3)"
    )

    args = parser.parse_args()
    version = args.version
    try:
        version_key = tuple(int(part) for part in version.split("."))
    except ValueError:
        parser.error(f"invalid Minecraft version: {version}")
    if version_key < (26, 3):
        parser.error("protocol generation starts at Minecraft 26.3; older versions are not supported")

    version_dir = DATA_DIR / version
    reports_dir = version_dir / "reports"
    server_jar = version_dir / "server.jar"

    print(f"Generating Minecraft {version}...")

    protocol_version = None

    metadata_path = version_dir / "metadata.toml"

    if metadata_path.exists():
        print("Found cached extracted data")
        with metadata_path.open("rb") as metadata_file:
            metadata = tomllib.load(metadata_file)
            protocol_version = metadata["protocol_version"]
    else:
        server_jar = download_server_jar(version, server_jar)

        version_data = get_version_data(server_jar)
        protocol_version = version_data.get("protocol_version")
        with metadata_path.open("w", encoding="utf-8") as metadata_file:
            metadata_file.write(f"protocol_version = {protocol_version}")

        extract_server_data(server_jar, version_dir)

    print(f"Minecraft version: {version}")
    print(f"Protocol version: {protocol_version}")

    generate_packet_ids(
        reports_dir / "packets.json",
        ROOT / "data" / "generated" / version / "packet_ids.h",
        version
    )

    generate_blocks(
        reports_dir / "registries.json",
        reports_dir / "blocks.json",
        ROOT / "data" / "generated" / version / "blocks",
        version
    )

    generate_block_states(
        reports_dir / "blocks.json",
        ROOT / "data" / "generated" / version / "block_states",
        version
    )

    generate_registries(
        reports_dir / "registries.json",
        ROOT / "data" / "generated" / version / "registries",
        version
    )

    generate_data_registries(
        version_dir / "data",
        ROOT / "data" / "generated" / version / "data_registries",
        version,
        DATA_REGISTRIES,
    )

    print("Done!")


if __name__ == "__main__":
    main()
