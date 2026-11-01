import hashlib
import urllib.request

from pathlib import Path

from .manifest import get_server_download


def calculate_sha1(path):
    sha1 = hashlib.sha1()

    with open(path, "rb") as file:
        while chunk := file.read(1024 * 64):
            sha1.update(chunk)

    return sha1.hexdigest()


def download_server_jar(version, destination):
    destination = Path(destination)
    destination.parent.mkdir(parents=True, exist_ok=True)

    metadata = get_server_download(version)

    url = metadata["url"]
    expected_sha1 = metadata["sha1"]

    if destination.exists():
        actual_sha1 = calculate_sha1(destination)

        if actual_sha1 == expected_sha1:
            print(f"Using cached Minecraft {version} server JAR")
            return destination

        print("Cached server JAR checksum mismatch; downloading again")
        destination.unlink()

    print(f"Downloading Minecraft {version} server JAR...")

    request = urllib.request.Request(
        url,
        headers={"User-Agent": "Singularity-Codegen"}
    )

    try:
        with urllib.request.urlopen(request) as response:
            with open(destination, "wb") as file:
                while chunk := response.read(1024 * 64):
                    file.write(chunk)

    except Exception:
        destination.unlink(missing_ok=True)
        raise

    actual_sha1 = calculate_sha1(destination)

    if actual_sha1 != expected_sha1:
        destination.unlink(missing_ok=True)
        raise ValueError("Downloaded server JAR failed SHA-1 verification")

    print("Download complete")

    return destination
