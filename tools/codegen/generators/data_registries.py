import json
import math
import struct
from pathlib import Path

ROOT = Path(__file__).resolve().parents[3]

TAG_END = 0
TAG_BYTE = 1
TAG_INT = 3
TAG_LONG = 4
TAG_DOUBLE = 6
TAG_STRING = 8
TAG_LIST = 9
TAG_COMPOUND = 10


def _string_payload(value):
    encoded = value.encode("utf-8")
    if len(encoded) > 0xFFFF:
        raise ValueError("NBT string exceeds 65535 bytes")
    return struct.pack(">H", len(encoded)) + encoded


def _type(value):
    if isinstance(value, bool):
        return TAG_BYTE
    if isinstance(value, str):
        return TAG_STRING
    if isinstance(value, int):
        if -(1 << 31) <= value < (1 << 31):
            return TAG_INT
        if -(1 << 63) <= value < (1 << 63):
            return TAG_LONG
        raise ValueError(f"Integer outside NBT range: {value}")
    if isinstance(value, float):
        if not math.isfinite(value):
            raise ValueError("NBT cannot encode a non-finite number")
        return TAG_DOUBLE
    if isinstance(value, dict):
        return TAG_COMPOUND
    if isinstance(value, list):
        return TAG_LIST
    raise ValueError(f"Unsupported JSON value for NBT: {type(value).__name__}")


def _payload(value):
    tag = _type(value)
    if tag == TAG_BYTE:
        return struct.pack(">b", int(value))
    if tag == TAG_INT:
        return struct.pack(">i", value)
    if tag == TAG_LONG:
        return struct.pack(">q", value)
    if tag == TAG_DOUBLE:
        return struct.pack(">d", value)
    if tag == TAG_STRING:
        return _string_payload(value)
    if tag == TAG_COMPOUND:
        parts = []
        for name, child in value.items():
            parts.append(bytes((_type(child),)) + _string_payload(name) + _payload(child))
        return b"".join(parts) + bytes((TAG_END,))
    if tag == TAG_LIST:
        if value:
            element_tag = _type(value[0])
            if any(_type(item) != element_tag for item in value):
                raise ValueError("NBT list contains mixed element types")
        else:
            element_tag = TAG_END
        if len(value) > 0x7FFFFFFF:
            raise ValueError("NBT list is too large")
        return bytes((element_tag,)) + struct.pack(">i", len(value)) + b"".join(
            _payload(item) for item in value
        )
    raise AssertionError("unreachable NBT type")


def _network_nbt(value):
    """Encode an unnamed network-NBT root, preserving JSON arrays as lists."""
    return bytes((_type(value),)) + _payload(value)


def _c_bytes(data):
    return "\n".join(
        "    " + ", ".join(f"0x{byte:02x}" for byte in data[start:start + 12]) + ","
        for start in range(0, len(data), 12)
    )


def generate_data_registries(data_root, output_path, version, registry_names):
    """Generate complete network-NBT tables for selected vanilla data registries."""
    data_root = Path(data_root)
    output_path = Path(output_path)
    output_header = output_path.with_suffix(".h")
    output_source = output_path.with_suffix(".c")

    registries = []
    for registry_name in registry_names:
        namespace, path = registry_name.split(":", 1)
        registry_dir = data_root / namespace / path
        if not registry_dir.is_dir():
            raise FileNotFoundError(f"Data for registry {registry_name} not found: {registry_dir}")

        entries = []
        for source in sorted(registry_dir.glob("*.json")):
            with source.open("r", encoding="utf-8") as file:
                value = json.load(file)
            entries.append((f"{namespace}:{source.stem}", _network_nbt(value)))

        if not entries:
            raise ValueError(f"No entries found for registry {registry_name}")
        registries.append((registry_name, entries))

    version_fmt = version.replace(".", "_")
    guard = f"SGD_{version_fmt.upper()}_DATA_REGISTRIES_H"
    registry_type = f"mc_{version_fmt}_data_registry"
    output_header.parent.mkdir(parents=True, exist_ok=True)

    with output_header.open("w", encoding="utf-8") as output:
        output.write("/* This file is generated, do not manually update */\n")
        output.write(f"#ifndef {guard}\n#define {guard}\n\n")
        output.write('#include "proto/registry_data.h"\n\n')
        output.write("typedef struct {\n")
        output.write("    const char *name;\n")
        output.write("    const registry_data_entry *entries;\n")
        output.write("    u32 entry_count;\n")
        output.write(f"}} {registry_type};\n\n")
        output.write(f"extern const {registry_type} mc_{version_fmt}_data_registries[];\n")
        output.write(f"extern const u32 mc_{version_fmt}_data_registry_count;\n\n")
        output.write("#endif\n")

    with output_source.open("w", encoding="utf-8") as output:
        output.write("/* This file is generated, do not manually update */\n")
        output.write('#include "data_registries.h"\n\n')
        for registry_index, (_, entries) in enumerate(registries):
            for entry_index, (_, payload) in enumerate(entries):
                symbol = f"mc_{version_fmt}_data_nbt_{registry_index}_{entry_index}"
                output.write(f"static const u8 {symbol}[] = {{\n{_c_bytes(payload)}\n}};\n")
            output.write("\n")

            entry_symbol = f"mc_{version_fmt}_data_entries_{registry_index}"
            output.write(f"static const registry_data_entry {entry_symbol}[] = {{\n")
            for entry_index, (entry_name, _) in enumerate(entries):
                name = json.dumps(entry_name)
                payload_symbol = f"mc_{version_fmt}_data_nbt_{registry_index}_{entry_index}"
                output.write(
                    f"    {{{name}, (u32)(sizeof({name}) - 1), {payload_symbol}, "
                    f"(u32)sizeof({payload_symbol})}},\n"
                )
            output.write("};\n\n")

        output.write(f"const {registry_type} mc_{version_fmt}_data_registries[] = {{\n")
        for registry_index, (registry_name, entries) in enumerate(registries):
            output.write(
                f"    {{{json.dumps(registry_name)}, "
                f"mc_{version_fmt}_data_entries_{registry_index}, "
                f"(u32)(sizeof(mc_{version_fmt}_data_entries_{registry_index}) / "
                f"sizeof(mc_{version_fmt}_data_entries_{registry_index}[0]))}},\n"
            )
        output.write("};\n\n")
        output.write(
            f"const u32 mc_{version_fmt}_data_registry_count = "
            f"(u32)(sizeof(mc_{version_fmt}_data_registries) / "
            f"sizeof(mc_{version_fmt}_data_registries[0]));\n"
        )

    print(f"Generated data registries: {output_header.relative_to(ROOT)}")
