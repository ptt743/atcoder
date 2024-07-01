#!/bin/bash
OUT_DIR="/Users/phamtantai1007/workspace/atcoder/problems/"
source /tmp/my_variable.sh
echo "file compile: $SOURCE_DIR"
g++ -std=c++20 "$SOURCE_DIR" -o "$OUT_DIR/a.out" -I .
"$OUT_DIR/a.out"
rm "$OUT_DIR/a.out"
