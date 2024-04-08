#!/bin/bash

set -euox pipefail

premake5 gmake2

make config=debug_x86
make config=release_x86
make config=ship_x86

make config=debug_x64
make config=release_x64
make config=ship_x64
