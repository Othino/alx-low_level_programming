#!/bin/bash
gcc -fPIC *.c
gcc -shared -o libdaynamic.so *.o
