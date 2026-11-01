import json
import urllib.request

MANIFEST_URL = "https://launchermeta.mojang.com/mc/game/version_manifest.json"


def fetch_json(url):
    request = urllib.request.Request(
        url,
        headers={"User-Agent": "Singularity-Codegen"}
    )

    with urllib.request.urlopen(request) as response:
        return json.loads(response.read().decode("utf-8"))


def get_version_metadata(version):
    manifest = fetch_json(MANIFEST_URL)

    for entry in manifest.get("versions", []):
        if entry.get("id") == version:
            return fetch_json(entry["url"])

    raise ValueError(f"Minecraft version {version} not found")


def get_server_download(version):
    metadata = get_version_metadata(version)
    download = metadata.get("downloads", {}).get("server")

    if not download:
        raise ValueError(f"No server download available for Minecraft {version}")

    return download
