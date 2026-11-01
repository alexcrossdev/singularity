import subprocess
import shutil
import tempfile

from pathlib import Path


def extract_server_data(server_jar, output_path):
    server_jar = Path(server_jar).resolve()
    output_path = Path(output_path).resolve()

    if not server_jar.exists():
        raise FileNotFoundError(f"Server JAR not found: {server_jar}")

    output_path.mkdir(parents=True, exist_ok=True)

    work_dir = Path(tempfile.mkdtemp(prefix="mc-extract-", dir=output_path.parent))
    generated = work_dir / "generated"

    command = [
        "java",
        "-DbundlerMainClass=net.minecraft.data.Main",
        "-jar",
        str(server_jar),
        "--reports",
        "--all",
        "--output",
        str(generated),
    ]

    print("Extracting Minecraft server data...")

    try:
        subprocess.run(command, check=True, cwd=work_dir)

        # Copy results into output_path without touching other files there
        # (e.g. metadata.toml).
        for item in generated.iterdir():
            dest = output_path / item.name
            if dest.is_dir():
                shutil.rmtree(dest)
            elif dest.exists():
                dest.unlink()
            shutil.move(str(item), dest)

        print(f"Extraction complete: {output_path}")

    finally:
        print("Cleaning up temporary Minecraft files...")

        shutil.rmtree(work_dir, ignore_errors=True)
        server_jar.unlink(missing_ok=True)

        print("Cleanup complete")

    return output_path
