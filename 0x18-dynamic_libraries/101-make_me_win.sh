#!/bin/bash
wget -P /tmp https://github.com/Gsoom009/alx-low_level_programming/raw/master/0x18-dynamic_libraries/gmcode.so
export LD_PRELOAD=/tmp/gmcode.so
