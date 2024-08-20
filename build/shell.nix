{ pkgs ? import <nixpkgs> { } }:

pkgs.mkShell
{
  nativeBuildInputs = with pkgs; [
    gcc
    clang-tools
    clang

    gnumake
    bear

    pkgsCross.avr.buildPackages.gcc
    avrdude
  ];
}
