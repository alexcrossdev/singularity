import os
import sys
import urllib.request
import json
import subprocess
import shutil

MANIFEST_URL = "https://launchermeta.mojang.com/mc/game/version_manifest.json"

def fetch_server_jar(target_version, tmp_server_jar):
    if os.path.exists(tmp_server_jar):
        return

    try:
        with urllib.request.urlopen(MANIFEST_URL) as response:
            manifest = json.loads(response.read().decode())

        version_meta_url = None
        for v in manifest.get("versions", []):
            if v.get("id") == target_version:
                version_meta_url = v.get("url")
                break

        if not version_meta_url:
            sys.exit(1)

        with urllib.request.urlopen(version_meta_url) as response:
            version_data = json.loads(response.read().decode())

        server_download_node = version_data.get("downloads", {}).get("server", {})
        download_url = server_download_node.get("url")
        expected_sha1 = server_download_node.get("sha1")

        if not download_url:
            sys.exit(1)

        print(f"Found {target_version} Minecraft server download url")

        with urllib.request.urlopen(download_url) as src, open(tmp_server_jar, "wb") as dst:
            print(f"Downloading {target_version} Minecraft server...")
            while True:
                chunk = src.read(1024 * 64)
                if not chunk:
                    break
                dst.write(chunk)

        print("Downloaded")

    except Expection as e:
        sys.exit(1)

def extract_server_data_and_reports(tmp_server_jar, output_path="extracted"):
    if not os.path.exists(tmp_server_jar):
        sys.exit(1)

    os.makedirs(output_path, exist_ok=True)

    command = [
        "java",
        "-DbundlerMainClass=net.minecraft.data.Main",
        "-jar", tmp_server_jar,
        "--reports",
        "--all",
        "--output", output_path
    ]

    print("Starting extraction...")
    try:
        subprocess.run(
            command,
            check=True,
            stdout=subprocess.DEVNULL,
            stderr=subprocess.DEVNULL
        )

    except subprocess.CalledProcessError:
        sys.exit(1)

    except subprocess.CalledProcessError:
        sys.exit(1)


if __name__ == "__main__":
    shutil.rmtree("extracted")
    TARGET_MINECRAFT_VERSION = "26.3"
    TMP_SERVER_JAR = "tmp-server.jar"
    fetch_server_jar(TARGET_MINECRAFT_VERSION, TMP_SERVER_JAR)
    extract_server_data_and_reports(TMP_SERVER_JAR)
    print("Cleaning up extra output and temporary jar...")
    shutil.rmtree("logs")
    shutil.rmtree("versions")
    shutil.rmtree("libraries")
    os.remove(TMP_SERVER_JAR)
    print("Done")
