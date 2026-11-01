{
  description = "Singularity - Minecraft Server Engine";

  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs/nixos-unstable";
  };

  outputs = { self, nixpkgs }:
    let
      systems = [
        "x86_64-linux"
      ];

      forAllSystems = nixpkgs.lib.genAttrs systems;

    in {
      devShells = forAllSystems (system:
        let
          pkgs = import nixpkgs {
            inherit system;
          };
        in {
          default = (pkgs.mkShell.override { stdenv = pkgs.clangStdenv; }) {
            packages = with pkgs; [
              clang

              gnumake
              binutils

              gdb
              lldb
              valgrind

              clang-tools
              pkg-config

              (python3.withPackages (ps: with ps; [
                  nbtlib
              ]))
              temurin-bin-27
              zlib
              openssl

              git
            ];

            shellHook = ''
              echo "Singularity development environment"
              echo ""
              echo "Development toolchain:"
              echo "    Clang: $(clang --version | head -n 1)"
              echo "    Python: $(python --version | head -n 1)"
            '';
          };
        });
    };
}

