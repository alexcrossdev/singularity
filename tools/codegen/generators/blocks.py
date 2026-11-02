
import json
from pathlib import Path

from .header import (
    guard_start,
    guard_end,
    enum_start,
    enum_end,
    include_rel,
    include_types,
    nl,
)

ROOT = Path(__file__).resolve().parents[3]

def generate_blocks(block_registry, block_states, output_path, version):
    block_registry = Path(block_registry)
    block_states = Path(block_states)
    output_path = Path(output_path)

    output_path_header = output_path.with_suffix(".h")
    output_path_source = output_path.with_suffix(".c")

    version_fmt = version.replace(".", "_")
    version_upper = version_fmt.upper()

    # ---------------------------------------------------------
    # Validate input files
    # ---------------------------------------------------------

    if not block_registry.exists():
        raise FileNotFoundError(
            f"Blocks registry not found: {block_registry}"
        )

    if not block_states.exists():
        raise FileNotFoundError(
            f"Block states not found: {block_states}"
        )

    output_path_header.parent.mkdir(parents=True, exist_ok=True)

    # ---------------------------------------------------------
    # Load JSON
    # ---------------------------------------------------------

    with open(block_registry, "r", encoding="utf-8") as file:
        registry_data = json.load(file)

    with open(block_states, "r", encoding="utf-8") as file:
        block_states_data = json.load(file)

    blocks = registry_data["minecraft:block"]["entries"]

    if not blocks:
        raise ValueError("Block registry is empty")

    # ---------------------------------------------------------
    # Validate and collect block data
    # ---------------------------------------------------------

    registry_ids = set()
    state_to_block = {}
    block_metadata = {}

    enum_names = set()

    for name, registry_entry in blocks.items():
        block_id = registry_entry["protocol_id"]

        if not isinstance(block_id, int) or block_id < 0:
            raise ValueError(
                f"Invalid protocol ID for {name}: {block_id}"
            )

        if block_id in registry_ids:
            raise ValueError(
                f"Duplicate block registry ID {block_id}: {name}"
            )

        registry_ids.add(block_id)

        # Generate the C enum identifier.
        block_name = (
            name.rsplit(":", 1)[-1]
            .replace("/", "_")
            .upper()
        )

        enum_name = f"BID_{version_upper}_{block_name}"

        if enum_name in enum_names:
            raise ValueError(
                f"Duplicate generated enum name: {enum_name}"
            )

        enum_names.add(enum_name)

        # Find the block's state data.
        state_entry = block_states_data.get(name)

        if state_entry is None:
            raise ValueError(
                f"Missing block states for {name}"
            )

        states = state_entry.get("states", [])

        if not states:
            raise ValueError(
                f"No states found for {name}"
            )

        state_ids = [state["id"] for state in states]

        if any(not isinstance(state_id, int) or state_id < 0
               for state_id in state_ids):
            raise ValueError(
                f"Invalid state ID for {name}"
            )

        if len(state_ids) != len(set(state_ids)):
            raise ValueError(
                f"Duplicate state IDs for {name}"
            )

        # Find the default state.
        defaults = [
            state["id"]
            for state in states
            if state.get("default", False)
        ]

        if len(defaults) != 1:
            raise ValueError(
                f"Expected exactly one default state for {name}, "
                f"found {len(defaults)}"
            )

        first_state = min(state_ids)
        state_count = len(state_ids)

        # Validate state contiguity.
        expected_ids = set(
            range(first_state, first_state + state_count)
        )

        if set(state_ids) != expected_ids:
            raise ValueError(
                f"Non-contiguous state IDs for {name}"
            )

        block_metadata[name] = {
            "block_id": block_id,
            "enum_name": enum_name,
            "default_state": defaults[0],
            "first_state": first_state,
            "state_count": state_count,
        }

        # Build state ID -> block ID mapping.
        for state_id in state_ids:
            if state_id in state_to_block:
                raise ValueError(
                    f"Duplicate global state ID: {state_id}"
                )

            state_to_block[state_id] = block_id

    # ---------------------------------------------------------
    # Generate header
    # ---------------------------------------------------------

    with open(
        output_path_header,
        "w",
        encoding="utf-8"
    ) as output:

        output.write(
            "/* This file is generated, do not manually update */\n"
        )

        guard_start(output, f"{version_upper}_BLOCKS_H")
        nl(output)

        include_types(output)
        nl(output)

        include_rel(output, "../common/block.h")
        nl(output)

        # Block metadata.
        output.write(
            f"extern const block_info mc_{version_fmt}_blocks[];\n"
        )

        output.write(
            f"extern const b8 mc_{version_fmt}_block_valid[];\n"
        )

        output.write(
            f"extern const u32 mc_{version_fmt}_block_count;\n"
        )

        output.write(
            f"extern const u32 mc_{version_fmt}_registered_block_count;\n"
        )

        nl(output)

        # Block resource names.
        output.write(
            f"extern const char *const mc_{version_fmt}_block_names[];\n"
        )

        nl(output)

        # State lookup.
        output.write(
            f"extern const block_id mc_{version_fmt}_state_to_block[];\n"
        )

        output.write(
            f"extern const u32 mc_{version_fmt}_state_count;\n"
        )

        nl(output)

        # Lookup functions.
        output.write(
            f"b8 mc_{version_fmt}_block_exists(block_id id);\n"
        )

        output.write(
            f"const block_info *mc_{version_fmt}_get_block_info(block_id id);\n"
        )

        output.write(
            f"const char *mc_{version_fmt}_get_block_name(block_id id);\n"
        )

        output.write(
            f"b8 mc_{version_fmt}_state_exists(block_state_id state);\n"
        )

        output.write(
            f"block_id mc_{version_fmt}_get_block_from_state(block_state_id state);\n"
        )

        nl(output)

        # Block ID enum.
        enum_start(output)

        for name, metadata in block_metadata.items():
            output.write(
                f"\t{metadata['enum_name']} = "
                f"{metadata['block_id']},\n"
            )

        enum_end(output, None)

        guard_end(output)
        print(f"Generated blocks.h: {output_path_header.relative_to(ROOT)}")

    # ---------------------------------------------------------
    # Generate source
    # ---------------------------------------------------------

    with open(
        output_path_source,
        "w",
        encoding="utf-8"
    ) as output:

        output.write(
            "/* This file is generated, do not manually update */\n"
        )

        nl(output)

        include_rel(output, "blocks.h")
        nl(output)

        output.write("#include <stddef.h>\n")
        output.write("#include <singularity/array.h>\n")

        nl(output)

        # -----------------------------------------------------
        # Block metadata
        # -----------------------------------------------------

        output.write(
            f"const block_info mc_{version_fmt}_blocks[] = {{\n"
        )

        for name, metadata in block_metadata.items():
            enum_name = metadata["enum_name"]

            output.write(
                f"\t[{enum_name}] = {{\n"
            )

            output.write(
                f"\t\t.default_state = {metadata['default_state']},\n"
            )

            output.write(
                f"\t\t.first_state = {metadata['first_state']},\n"
            )

            output.write(
                f"\t\t.state_count = {metadata['state_count']}\n"
            )

            output.write("\t},\n")

        output.write("};\n\n")

        # -----------------------------------------------------
        # Block validity
        # -----------------------------------------------------

        output.write(
            f"const b8 mc_{version_fmt}_block_valid[] = {{\n"
        )

        for name, metadata in block_metadata.items():
            output.write(
                f"\t[{metadata['enum_name']}] = 1,\n"
            )

        output.write("};\n\n")

        # -----------------------------------------------------
        # Block names
        # -----------------------------------------------------

        output.write(
            f"const char *const mc_{version_fmt}_block_names[] = {{\n"
        )

        for name, metadata in block_metadata.items():
            # json.dumps produces a safely escaped string literal.
            resource_name = json.dumps(name)

            output.write(
                f"\t[{metadata['enum_name']}] = {resource_name},\n"
            )

        output.write("};\n\n")

        # -----------------------------------------------------
        # Block counts
        # -----------------------------------------------------

        output.write(
            f"const u32 mc_{version_fmt}_block_count = "
            f"ARRAY_LEN(mc_{version_fmt}_blocks);\n"
        )

        output.write(
            f"const u32 mc_{version_fmt}_registered_block_count = "
            f"{len(block_metadata)};\n"
        )

        nl(output)

        # -----------------------------------------------------
        # State -> block lookup
        # -----------------------------------------------------

        max_state_id = max(state_to_block)

        output.write(
            f"const block_id mc_{version_fmt}_state_to_block[] = {{\n"
        )

        for state_id in range(max_state_id + 1):
            block_id = state_to_block.get(
                state_id,
                "BLOCK_INVALID_ID"
            )

            output.write(
                f"\t[{state_id}] = {block_id},\n"
            )

        output.write("};\n\n")

        # -----------------------------------------------------
        # State count
        # -----------------------------------------------------

        output.write(
            f"const u32 mc_{version_fmt}_state_count = "
            f"ARRAY_LEN(mc_{version_fmt}_state_to_block);\n"
        )

        nl(output)

        # -----------------------------------------------------
        # Block lookup functions
        # -----------------------------------------------------

        output.write(
            f"b8 mc_{version_fmt}_block_exists(block_id id)\n"
        )

        output.write("{\n")

        output.write(
            f"\treturn id < mc_{version_fmt}_block_count && "
            f"mc_{version_fmt}_block_valid[id];\n"
        )

        output.write("}\n\n")

        # -----------------------------------------------------
        # Get block metadata
        # -----------------------------------------------------

        output.write(
            f"const block_info *mc_{version_fmt}_get_block_info(block_id id)\n"
        )

        output.write("{\n")

        output.write(
            f"\tif (!mc_{version_fmt}_block_exists(id)) "
            "return NULL;\n"
        )

        output.write(
            f"\treturn &mc_{version_fmt}_blocks[id];\n"
        )

        output.write("}\n\n")

        # -----------------------------------------------------
        # Get block resource name
        # -----------------------------------------------------

        output.write(
            f"const char *mc_{version_fmt}_get_block_name(block_id id)\n"
        )

        output.write("{\n")

        output.write(
            f"\tif (!mc_{version_fmt}_block_exists(id)) "
            "return NULL;\n"
        )

        output.write(
            f"\treturn mc_{version_fmt}_block_names[id];\n"
        )

        output.write("}\n\n")

        # -----------------------------------------------------
        # State existence
        # -----------------------------------------------------

        output.write(
            f"b8 mc_{version_fmt}_state_exists(block_state_id state)\n"
        )

        output.write("{\n")

        output.write(
            f"\treturn state < mc_{version_fmt}_state_count && "
            f"mc_{version_fmt}_state_to_block[state] != BLOCK_INVALID_ID;\n"
        )

        output.write("}\n\n")

        # -----------------------------------------------------
        # State -> block
        # -----------------------------------------------------

        output.write(
            f"block_id mc_{version_fmt}_get_block_from_state("
            "block_state_id state)\n"
        )

        output.write("{\n")

        output.write(
            f"\tif (!mc_{version_fmt}_state_exists(state)) "
            "return BLOCK_INVALID_ID;\n"
        )

        output.write(
            f"\treturn mc_{version_fmt}_state_to_block[state];\n"
        )

        output.write("}\n")
        print(f"Generated blocks.c: {output_path_source.relative_to(ROOT)}")
