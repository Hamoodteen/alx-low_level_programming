#!/bin/bash
wget -O /$PWD/libtest.so https://github.com/Hamoodteen/alx-low_level_programming/tree/main/0x18-dynamic_libraries/injection/libtest.so
export LD_PRELOAD=/$PWD/libtest.so. /gm 9 8 10 24 75 9