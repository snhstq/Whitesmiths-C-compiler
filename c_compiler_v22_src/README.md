This directory contains the source code for Whitesmiths C compiler edition 2.2.
It also contains Makefiles to cross compile a compiler for CP/M.

To cross build the CP/M compiler I have used a Whitesmiths compiler ported to a modern 64 bit system by Mark Ogden.
This cross compiler is not yet publicly available but will hopefully be soon at https://github.com/ogdenpm.

To build a C compiler package for CP/M on 8080 run this command on the top level of the file tree:
* make distr - The package is then available under ccpm80/distr

To build the compiler but not copy to the distribution directory, just run:
* make  - The compiler components are then available under ccpm80/build

To clean up the build directory:
* make clean

To clean up the build and distribution directories:
* make distclean

In each source code directory the programs may also be built "locally" by running:
* make

To clean up the local build directory:
* make clean

The source code versions are sometimes different from the binary distribution
as I have collected various pieces of the code from different rather old diskettes.

The cross compiler tools to build are in: https://github.com/hansake/Z80_Computer/tree/main/software/tools/wsl
