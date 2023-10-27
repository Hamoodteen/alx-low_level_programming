#!/bin/bash
wget -P /tmp https://github.com/Hamoodteen/alx-low_level_programming/tree/main/0x18-dynamic_libraries/injection/libtest.so
export LD_PRELOAD=/tmp/libtest.so.