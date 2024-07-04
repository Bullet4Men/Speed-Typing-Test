with import <nixpkgs> {};

stdenv.mkDerivation {
  name = "typing-test";

  buildInputs = [
    ncurses
  ];
}
