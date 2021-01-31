#!/bin/sh
cp ../../eval/ex00/libft.a .
(gcc -o test test.c ./libft.a) && (./test "abcd" "bbc")
