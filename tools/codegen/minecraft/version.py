import json
import zipfile

from pathlib import Path


def get_version_data(server_jar):
    server_jar = Path(server_jar)

    if not server_jar.exists():
        raise FileNotFoundError(f"Server JAR not found: {server_jar}")

    with zipfile.ZipFile(server_jar, "r") as jar:
        try:
            raw = jar.read("version.json")
        except KeyError:
            raise FileNotFoundError(
                "version.json not found in server JAR"
            )

    return json.loads(raw)


def get_protocol_version(server_jar):
    version_data = get_version_data(server_jar)

    protocol_version = version_data.get("protocol_version")

    if protocol_version is None:
        raise ValueError("protocol_version not found in version.json")

    return protocol_version
