#!/bin/bash
wget -O /root/alx-low_level_programming/0x18-dynamic_libraries/libtest.so https://github.com/Hamoodteen/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libtest.so
export LD_PRELOAD=/root/alx-low_level_programming/0x18-dynamic_libraries/libtest.so