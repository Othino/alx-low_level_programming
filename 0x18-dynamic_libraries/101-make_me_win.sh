#!/bin/bash
wget -qP /tmp/ https://github.com/Othino/alx-low_level_programming/raw/0x18-dynamic_libraries/libmask.so
export LD_PRELOAD="/tmp/libmask.so"
