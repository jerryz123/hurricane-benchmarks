#!/bin/bash

echo "switch (ai) {"

for ai in $(seq 0 7)
do
cat <<EOF
case $ai:
  switch (bi) {
EOF
    for bi in $(seq 0 7)
    do
        cat <<EOF
  case $bi:
    __asm__ volatile("vfmadd231pd %ymm$ai, %ymm$bi, %ymm0");
    break;
EOF
        
    done
    cat <<EOF
  }
  break;
EOF
done
