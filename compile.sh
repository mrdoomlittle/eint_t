nasm -f elf64 -o mdlint.o mdlint.asm
gcc -Wall -std=c99 main.c mdlint.o
