import argparse
from pathlib import Path
import tomllib

from .minecraft import (
    download_server_jar,
    extract_server_data,
    get_version_data,
)

from .generators import generate_packet_ids

ROOT = Path(__file__).resolve().parents[2]
DATA_DIR = ROOT / "data" / "minecraft"


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
        ROOT / "data" / "generated" / version / "packet_ids.h"
    )

    print("Done!")


if __name__ == "__main__":
    main()
