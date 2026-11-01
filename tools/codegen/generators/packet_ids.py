import json

from pathlib import Path

from .header import (
    guard_start,
    guard_end
)

ROOT = Path(__file__).resolve().parents[3]

def generate_packet_ids(input_path, output_path):
    input_path = Path(input_path)
    output_path = Path(output_path)

    if not input_path.exists():
        raise FileNotFoundError(f"Packet report not found: {input_path}")

    output_path.parent.mkdir(parents=True, exist_ok=True)

    with open(input_path, "r") as file:
        raw = json.load(file)

    directions = {
        "serverbound": "C2S",
        "clientbound": "S2C",
    }

    with open(output_path, "w") as output:
        output.write("/* This file is generated, do not manually update */\n")
        guard_start(output, "PACKET_IDS")

        for state, data in raw.items():
            output.write(f"/* {state.upper()} */\n")

            for direction, prefix in directions.items():
                packets = data.get(direction, {})

                if not packets:
                    continue

                output.write(f"\n/* {prefix} */\n")

                for name, packet in packets.items():
                    action_name = (
                        name.split(":", 1)[-1]
                        .upper()
                        .replace("/", "_")
                    )

                    packet_id = packet["protocol_id"]

                    output.write(
                        f"#define PKT_{state.upper()}_{prefix}_{action_name} "
                        f"0x{packet_id:02X}\n"
                    )

                output.write("\n")

        guard_end(output)

    print(f"Generated packet IDs: {output_path.relative_to(ROOT)}")
