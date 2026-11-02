import json
import re

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

C_KEYWORDS = {
    "auto", "break", "case", "char", "const", "continue",
    "default", "do", "double", "else", "enum", "extern",
    "float", "for", "goto", "if", "inline", "int", "long",
    "register", "restrict", "return", "short", "signed",
    "sizeof", "static", "struct", "switch", "typedef",
    "union", "unsigned", "void", "volatile", "while",
    "_Alignas", "_Alignof", "_Atomic", "_Bool", "_Complex",
    "_Generic", "_Imaginary", "_Noreturn", "_Static_assert",
    "_Thread_local",
    # C23 keywords
    "alignas", "alignof", "bool", "constexpr", "false",
    "nullptr", "static_assert", "thread_local", "true",
    "typeof", "typeof_unqual", "_BitInt",
}

def c_field_name(name: str) -> str:
    result = c_identifier(name).lower()

    if result in C_KEYWORDS:
        result += "_"

    return result

def c_identifier(value):
    """Convert a resource name or property value into a C identifier."""
    value = re.sub(r"[^a-zA-Z0-9_]", "_", str(value))
    value = re.sub(r"_+", "_", value).strip("_")

    if not value:
        value = "EMPTY"

    if value[0].isdigit():
        value = "V_" + value

    return value.upper()


def block_identifier(name):
    return c_identifier(name.rsplit(":", 1)[-1].replace("/", "_")).lower()


def property_is_boolean(values):
    return set(values) == {"true", "false"}


def property_value_expression(prop, value):
    """Return the C expression representing a JSON property value."""

    if prop["boolean"]:
        return "1" if value == "true" else "0"

    return (
        f"{prop['enum_name']}_V_{c_identifier(value)}"
    )


def generate_block_states(block_states, output_path, version):
    block_states = Path(block_states)
    output_path = Path(output_path)

    output_header = output_path.with_suffix(".h")
    output_source = output_path.with_suffix(".c")

    version_fmt = version.replace(".", "_")
    version_upper = version_fmt.upper()

    if not block_states.exists():
        raise FileNotFoundError(
            f"Block states not found: {block_states}"
        )

    output_header.parent.mkdir(parents=True, exist_ok=True)

    with open(block_states, "r", encoding="utf-8") as file:
        raw = json.load(file)

    # ---------------------------------------------------------
    # Collect and validate block property information
    # ---------------------------------------------------------

    generated_blocks = []

    for resource_name, block_data in raw.items():
        name = block_identifier(resource_name)

        properties_data = block_data.get("properties", {})
        states = block_data.get("states", [])

        if not states:
            raise ValueError(
                f"No states found for {resource_name}"
            )

        state_ids = [state["id"] for state in states]

        if len(state_ids) != len(set(state_ids)):
            raise ValueError(
                f"Duplicate state IDs for {resource_name}"
            )

        first_state = min(state_ids)
        state_count = len(state_ids)

        expected_ids = set(
            range(first_state, first_state + state_count)
        )

        if set(state_ids) != expected_ids:
            raise ValueError(
                f"Non-contiguous state IDs for {resource_name}"
            )

        defaults = [
            state["id"]
            for state in states
            if state.get("default", False)
        ]

        if len(defaults) != 1:
            raise ValueError(
                f"Expected exactly one default state for {resource_name}"
            )

        properties = []

        # Preserve the JSON property order.
        for property_name, values in properties_data.items():
            if not values:
                raise ValueError(
                    f"Empty property values: {resource_name}.{property_name}"
                )

            if len(values) != len(set(values)):
                raise ValueError(
                    f"Duplicate property values: "
                    f"{resource_name}.{property_name}"
                )

            boolean = property_is_boolean(values)

            prop = {
                "name": property_name,
                "field_name": c_field_name(property_name).lower(),
                "values": values,
                "boolean": boolean,
                "enum_name": (
                    f"mc_{version_fmt}_{name}_{c_identifier(property_name).lower()}"
                ),
            }

            properties.append(prop)

        # -----------------------------------------------------
        # Calculate flattened table dimensions
        # -----------------------------------------------------

        dimensions = [
            2 if prop["boolean"] else len(prop["values"])
            for prop in properties
        ]

        table_size = 1

        for dimension in dimensions:
            table_size *= dimension

        # Blocks without properties have one possible combination.
        if not properties:
            table_size = 1

        state_table = ["BLOCK_INVALID_ID"] * table_size

        reverse_table = [None] * state_count

        # -----------------------------------------------------
        # Build property value -> index mappings
        # -----------------------------------------------------

        for state in states:
            state_id = state["id"]
            state_properties = state.get("properties", {})

            if set(state_properties) != set(properties_data):
                raise ValueError(
                    f"Incorrect property set for {resource_name}, "
                    f"state {state_id}"
                )

            flat_index = 0
            property_indexes = []

            for prop in properties:
                property_name = prop["name"]
                value = state_properties[property_name]

                if value not in prop["values"]:
                    raise ValueError(
                        f"Invalid value {value} for "
                        f"{resource_name}.{property_name}"
                    )

                if prop["boolean"]:
                    index = 1 if value == "true" else 0
                else:
                    index = prop["values"].index(value)

                property_indexes.append(index)

            # Flatten multidimensional indexes into one index.
            for index, dimension in zip(
                property_indexes,
                dimensions
            ):
                flat_index = flat_index * dimension + index

            if state_table[flat_index] != "BLOCK_INVALID_ID":
                raise ValueError(
                    f"Duplicate property combination for {resource_name}"
                )

            state_table[flat_index] = str(state_id)

            reverse_table[state_id - first_state] = state_properties

        if any(properties is None for properties in reverse_table):
            raise ValueError(
                f"Missing reverse state mapping for {resource_name}"
            )

        generated_blocks.append({
            "resource_name": resource_name,
            "name": name,
            "properties": properties,
            "states": states,
            "default_state": defaults[0],
            "first_state": first_state,
            "state_count": state_count,
            "state_table": state_table,
            "reverse_table": reverse_table,
            "table_size": table_size,
        })

    # ---------------------------------------------------------
    # Generate header
    # ---------------------------------------------------------

    with open(output_header, "w", encoding="utf-8") as output:
        output.write(
            "/* This file is generated, do not manually update */\n"
        )

        output.write(
            f"#ifndef MC_{version_upper}_BLOCK_STATES_H\n"
        )
        output.write(
            f"#define MC_{version_upper}_BLOCK_STATES_H\n\n"
        )

        output.write('#include "blocks.h"\n\n')
        include_types(output)
        nl(output)

        # Generate property enums and structures.
        for block in generated_blocks:
            name = block["name"]
            properties = block["properties"]

            if not properties:
                continue

            # Property enums.
            for prop in properties:
                if prop["boolean"]:
                    continue

                output.write(
                    f"typedef enum {{\n"
                )

                for value in prop["values"]:
                    constant = (
                        f"{prop['enum_name']}_V_{c_identifier(value)}"
                    )

                    output.write(
                        f"\t{constant},\n"
                    )

                output.write(
                    f"}} {prop['enum_name']};\n\n"
                )

            # Block property structure.
            struct_name = (
                f"mc_{version_fmt}_{name}_properties"
            )

            output.write(
                f"typedef struct {{\n"
            )

            for prop in properties:
                field_type = (
                    "b8"
                    if prop["boolean"]
                    else prop["enum_name"]
                )

                output.write(
                    f"\t{field_type} {prop['field_name']};\n"
                )

            output.write(
                f"}} {struct_name};\n\n"
            )

        # Generate property conversion function declarations.
        for block in generated_blocks:
            name = block["name"]
            properties = block["properties"]

            if not properties:
                continue

            struct_name = (
                f"mc_{version_fmt}_{name}_properties"
            )

            output.write(
                f"block_state_id mc_{version_fmt}_{name}_get_state(\n"
                f"\tconst {struct_name} *properties\n"
                ");\n\n"
            )

            output.write(
                f"b8 mc_{version_fmt}_{name}_get_properties(\n"
                f"\tblock_state_id state,\n"
                f"\t{struct_name} *properties\n"
                ");\n\n"
            )

        output.write(
            f"block_state_id mc_{version_fmt}_get_placement_state(\n"
            "\tblock_state_id state, u8 facing, u8 axis\n"
            ");\n\n"
        )
        output.write("#endif\n")

    # ---------------------------------------------------------
    # Generate source
    # ---------------------------------------------------------

    with open(output_source, "w", encoding="utf-8") as output:
        output.write(
            "/* This file is generated, do not manually update */\n\n"
        )

        output.write('#include "block_states.h"\n\n')
        output.write("#include <stddef.h>\n\n")

        for block in generated_blocks:
            name = block["name"]
            properties = block["properties"]

            if not properties:
                continue

            struct_name = (
                f"mc_{version_fmt}_{name}_properties"
            )

            # -------------------------------------------------
            # Forward lookup table
            # -------------------------------------------------

            table_name = (
                f"mc_{version_fmt}_{name}_state_table"
            )

            output.write(
                f"static const block_state_id {table_name}"
                f"[{block['table_size']}] = {{\n"
            )

            for index, state_id in enumerate(block["state_table"]):
                output.write(
                    f"\t[{index}] = {state_id},\n"
                )

            output.write("};\n\n")

            # -------------------------------------------------
            # Reverse lookup table
            # -------------------------------------------------

            reverse_name = (
                f"mc_{version_fmt}_{name}_properties_by_state"
            )

            output.write(
                f"static const {struct_name} {reverse_name}"
                f"[{block['state_count']}] = {{\n"
            )

            for state_properties in block["reverse_table"]:
                output.write("\t{\n")

                for prop in properties:
                    property_name = prop["name"]
                    field_name = prop["field_name"]

                    value = state_properties[property_name]

                    expression = property_value_expression(
                        prop,
                        value
                    )

                    output.write(
                        f"\t\t.{field_name} = {expression},\n"
                    )

                output.write("\t},\n")

            output.write("};\n\n")

            # -------------------------------------------------
            # Forward conversion: properties -> state ID
            # -------------------------------------------------

            function_name = (
                f"mc_{version_fmt}_{name}_get_state"
            )

            output.write(
                f"block_state_id {function_name}(\n"
                f"\tconst {struct_name} *properties\n"
                ")\n"
            )

            output.write("{\n")

            output.write(
                "\tif (properties == NULL) return BLOCK_INVALID_ID;\n"
            )

            # Validate enum and boolean fields.
            for prop in properties:
                field = f"properties->{prop['field_name']}"

                if prop["boolean"]:
                    output.write(
                        f"\tif ({field} > 1) return BLOCK_INVALID_ID;\n"
                    )
                else:
                    output.write(
                        f"\tif ((u32){field} >= "
                        f"{len(prop['values'] )}) "
                        "return BLOCK_INVALID_ID;\n"
                    )

            # Generate flattened index expression.
            index_expression = "0"

            for prop in properties:
                field = f"properties->{prop['field_name']}"

                dimension = (
                    2
                    if prop["boolean"]
                    else len(prop["values"])
                )

                index_expression = (
                    f"(({index_expression}) * {dimension} + {field})"
                )

            output.write(
                f"\tu32 index = {index_expression};\n"
            )

            output.write(
                f"\treturn {table_name}[index];\n"
            )

            output.write("}\n\n")

            # -------------------------------------------------
            # Reverse conversion: state ID -> properties
            # -------------------------------------------------

            function_name = (
                f"mc_{version_fmt}_{name}_get_properties"
            )

            output.write(
                f"b8 {function_name}(\n"
                "\tblock_state_id state,\n"
                f"\t{struct_name} *properties\n"
                ")\n"
            )

            output.write("{\n")

            output.write(
                "\tif (properties == NULL) return 0;\n"
            )

            output.write(
                f"\tif (state < {block['first_state']} || "
                f"state >= {block['first_state'] + block['state_count']}) "
                "return 0;\n"
            )

            output.write(
                f"\t*properties = {reverse_name}"
                f"[state - {block['first_state']}];\n"
            )

            output.write(
                "\treturn 1;\n"
            )

            output.write("}\n\n")

        output.write(
            f"block_state_id mc_{version_fmt}_get_placement_state(\n"
            "\tblock_state_id state, u8 facing, u8 axis\n"
            ")\n{\n"
            f"\tblock_id block = mc_{version_fmt}_get_block_from_state(state);\n"
            "\tswitch (block) {\n"
        )
        direction_indexes = {
            "north": "0", "south": "1", "west": "2", "east": "3",
            "up": "4", "down": "5",
        }
        axis_indexes = {"x": "0", "y": "1", "z": "2"}
        for block in generated_blocks:
            target = None
            for property_name, indexes in (
                ("facing", direction_indexes),
                ("horizontal_facing", direction_indexes),
                ("axis", axis_indexes),
            ):
                prop = next((p for p in block["properties"]
                             if p["name"] == property_name), None)
                if prop and any(value in indexes for value in prop["values"]):
                    target = (prop, indexes,
                              "axis" if property_name == "axis" else "facing")
                    break
            if not target:
                continue
            prop, indexes, arg_name = target
            struct_name = f"mc_{version_fmt}_{block['name']}_properties"
            getter = f"mc_{version_fmt}_{block['name']}_get_properties"
            setter = f"mc_{version_fmt}_{block['name']}_get_state"
            output.write(
                f"\t\tcase BID_{version_upper}_{block['name'].upper()}: {{\n"
                f"\t\t\t{struct_name} properties;\n"
                f"\t\t\tif (!{getter}(state, &properties)) return state;\n"
                f"\t\t\tswitch ({arg_name}) {{\n"
            )
            for value in prop["values"]:
                if value not in indexes:
                    continue
                constant = f"{prop['enum_name']}_V_{c_identifier(value)}"
                output.write(
                    f"\t\t\t\tcase {indexes[value]}: "
                    f"properties.{prop['field_name']} = {constant}; break;\n"
                )
            output.write(
                "\t\t\t\tdefault: break;\n"
                "\t\t\t}\n"
                f"\t\t\treturn {setter}(&properties);\n"
                "\t\t}\n"
            )
        output.write("\t\tdefault: return state;\n\t}\n}\n")

