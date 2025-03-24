#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>

/* Prototypes for _printf and its helper functions */
int _printf(const char *format, ...);
int _putchar(char c);

/* Helper print functions */
int print_char(va_list args);
int print_string(va_list args);
int print_int(va_list args);
int print_unsigned(va_list args);
int print_octal(va_list args);
int print_hex(va_list args);
int print_HEX(va_list args);
int print_address(va_list args);

/* A helper to print numbers in a given base */
int print_unsigned_num(unsigned long num, int base, const char *digits);

#endif /* MAIN_H */
