#!/bin/bash
# Script to compile and execute a c program in one step.



# Compile the program with -o option to specify the name of the binary
gcc main.c -o main.out $1

# If there were no compilation errors, run the program
if [[ $? -eq 0 ]]; then
        ./main.out
fi
