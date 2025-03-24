# 0x11. C - printf

This project aims to build a custom function similar to the standard `printf` in C.

## Description
- This is a simplified replica of the standard `printf` function.  
- Currently supports the following format specifiers: `%c`, `%s`, and `%%` (for printing `%`).

## Usage
1. Copy all files (`main.h`, `_printf.c`, and the utility files like `utils.c`) into your project folder.
2. Compile using:
   ```bash
   gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
   ./a.out
