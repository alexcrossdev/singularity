# Protocol layers

`protocol.c` selects a layer by the exact handshake protocol number. Login is
rejected when there is no matching layer; older protocol numbers are never
mapped forward. The status path can still answer with the default server
version.

Each supported Minecraft release gets a `versions/v<major>_<minor>/` folder
with packet handlers, generated packet IDs, and its `layer.c` registration.
Version-independent framing and handshake dispatch stay directly under
`proto/`. Generated version data lives under `data/generated/<version>/`.
