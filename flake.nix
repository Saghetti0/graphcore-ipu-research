{
  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs/nixos-unstable";
    flake-utils.url = "github:numtide/flake-utils";
    nixpkgs-python.url = "github:cachix/nixpkgs-python";
    fenix = {
      url = "github:nix-community/fenix";
      inputs.nixpkgs.follows = "nixpkgs";
    };
  };
  outputs =
    {
      nixpkgs,
      nixpkgs-python,
      flake-utils,
      fenix,
      ...
    }@inputs:
    flake-utils.lib.eachDefaultSystem (
      system:
      let
        overlays = [ fenix.overlays.default ];
        pkgs = import nixpkgs {
          inherit system overlays;
          config = {
            permittedInsecurePackages = [
              "openssl-1.1.1w"
            ];
          };
        };
        py38 = nixpkgs-python.packages.x86_64-linux."3.8.18";
      in
      with pkgs;
      {
        formatter = nixfmt-tree;
        inherit inputs;
        devShells.default = mkShell {
          buildInputs = [
            openssl
            (python3.withPackages (ps: with ps; [
              libclang
            ]))
            llvmPackages.clang-tools
            cmake
            py38
            lld
          ];
          LD_LIBRARY_PATH = lib.makeLibraryPath [
            openssl
            openssl_1_1
            rdma-core
            libtinfo
            py38
            libgcc.lib
          ];
        };
      }
    );
}
