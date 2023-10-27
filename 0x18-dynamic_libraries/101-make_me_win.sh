#!/bin/bash
wget -O /$PWD/libtest.so https://github.com/Hamoodteen/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libtest.so
export LD_PRELOAD=/$PWD/libtest.so