import json
import re
from pathlib import Path

from .header import guard_start, guard_end, include_types, nl

ROOT = Path(__file__).resolve().parents[3]


def _c_string(value):
    """Quote a string as a portable C string literal."""
    return json.dumps(value, ensure_ascii=True)


def _identifier(value):
    value = re.sub(r"[^a-zA-Z0-9_]", "_", value)
    value = re.sub(r"_+", "_", value).strip("_")
    if not value:
        value = "EMPTY"
    if value[0].isdigit():
        value = "V_" + value
    return value.upper()


def generate_registries(input_path, output_path, version):
    """Generate flat registry and entry tables from registries.json.

    The generated entries intentionally contain only names and protocol IDs.
    Minecraft's report does not include optional registry element NBT.
    """
    input_path = Path(input_path)
    output_path = Path(output_path)
    output_header = output_path.with_suffix(".h")
    output_source = output_path.with_suffix(".c")

    if not input_path.exists():
        raise FileNotFoundError(f"Registry report not found: {input_path}")

    with input_path.open("r", encoding="utf-8") as source:
        raw = json.load(source)

    if not isinstance(raw, dict) or not raw:
        raise ValueError("Registry report must contain at least one registry")

    registries = []
    entries = []
    used_names = set()

    for name, data in raw.items():
        if not isinstance(name, str) or not isinstance(data, dict):
            raise ValueError("Invalid registry report entry")
        if name in used_names:
            raise ValueError(f"Duplicate registry name: {name}")
        used_names.add(name)

        protocol_id = data.get("protocol_id")
        registry_entries = data.get("entries")
        if not isinstance(protocol_id, int) or protocol_id < 0:
            raise ValueError(f"Invalid protocol ID for registry {name}")
        if not isinstance(registry_entries, dict):
            raise ValueError(f"Missing entries for registry {name}")

        first_entry = len(entries)
        entry_ids = set()
        for entry_name, entry_data in registry_entries.items():
            if not isinstance(entry_name, str) or not isinstance(entry_data, dict):
                raise ValueError(f"Invalid entry in registry {name}")
            entry_id = entry_data.get("protocol_id")
            if not isinstance(entry_id, int) or entry_id < 0:
                raise ValueError(f"Invalid protocol ID for {entry_name}")
            if entry_id in entry_ids:
                raise ValueError(f"Duplicate entry protocol ID {entry_id} in {name}")
            entry_ids.add(entry_id)
            entries.append((entry_name, entry_id))

        registries.append((name, protocol_id, first_entry, len(entries) - first_entry))

    version_fmt = version.replace(".", "_")
    version_upper = _identifier(version_fmt)
    entry_type = f"mc_{version_fmt}_registry_entry"
    registry_type = f"mc_{version_fmt}_registry"
    output_header.parent.mkdir(parents=True, exist_ok=True)

    with output_header.open("w", encoding="utf-8") as output:
        output.write("/* This file is generated, do not manually update */\n")
        guard_start(output, f"{version_upper}_REGISTRIES_H")
        nl(output)
        include_types(output)
        nl(output)
        output.write("typedef struct {\n")
        output.write(f"    const char *name;\n    u32 protocol_id;\n}} {entry_type};\n\n")
        output.write("typedef struct {\n")
        output.write("    const char *name;\n    u32 protocol_id;\n")
        output.write(f"    u32 first_entry;\n    u32 entry_count;\n}} {registry_type};\n\n")
        output.write(f"extern const {registry_type} mc_{version_fmt}_registries[];\n")
        output.write(f"extern const u32 mc_{version_fmt}_registry_count;\n")
        output.write(f"extern const {entry_type} mc_{version_fmt}_registry_entries[];\n")
        output.write(f"extern const u32 mc_{version_fmt}_registry_entry_count;\n\n")
        guard_end(output)

    with output_source.open("w", encoding="utf-8") as output:
        output.write("/* This file is generated, do not manually update */\n")
        output.write('#include "registries.h"\n\n')
        output.write(f"const {registry_type} mc_{version_fmt}_registries[] = {{\n")
        for name, protocol_id, first_entry, entry_count in registries:
            output.write(
                f"    {{{_c_string(name)}, {protocol_id}u, {first_entry}u, {entry_count}u}},\n"
            )
        output.write("};\n\n")
        output.write(
            f"const u32 mc_{version_fmt}_registry_count = "
            f"(u32)(sizeof(mc_{version_fmt}_registries) / sizeof(mc_{version_fmt}_registries[0]));\n\n"
        )
        output.write(f"const {entry_type} mc_{version_fmt}_registry_entries[] = {{\n")
        for name, protocol_id in entries:
            output.write(f"    {{{_c_string(name)}, {protocol_id}u}},\n")
        output.write("};\n\n")
        output.write(
            f"const u32 mc_{version_fmt}_registry_entry_count = "
            f"(u32)(sizeof(mc_{version_fmt}_registry_entries) / "
            f"sizeof(mc_{version_fmt}_registry_entries[0]));\n"
        )

    print(f"Generated registries: {output_header.relative_to(ROOT)}")
