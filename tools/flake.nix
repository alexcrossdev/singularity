{
  description = "Minecraft C Server Codegen Environment";

  inputs = {
    nixpkgs.url = "github:nixos/nixpkgs/nixos-unstable";
  };

  outputs = { self, nixpkgs }:
    let
      system = "x86_64-linux";
      pkgs = import nixpkgs {
        system = system;
        config.allowUnfree = true;
      };
    in {
      devShells.${system}.default = pkgs.mkShell {
        buildInputs = with pkgs; [
          (python3.withPackages (ps: with ps; [
            nbtlib
          ]))

          temurin-bin-27
          clang
          gnumake
          zlib
          openssl
        ];

        shellHook = ''
          echo "[+] Minecraft C Server dev environment initialized!"
          echo "[*] Run your asset baker with: python baker/run_generator.py"
        '';
      };
    };
}

