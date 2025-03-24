#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>

/**
 * struct _printf - Our own printf structure (if needed in the future)
 * (Not mandatory for now, but you can keep it if you want extended features)
 */

/* Prototypes */
int _printf(const char *format, ...);
int handle_specifier(char spec, va_list args);
int _putchar(char c);

/* Print functions */
int print_char(va_list args);
int print_string(va_list args);
int print_int(va_list args);
int print_number_recursive(unsigned int n);

/* Additional print functions */
int print_unsigned(va_list args);
int print_octal(va_list args);
int print_hex(va_list args);
int print_HEX(va_list args);
int print_address(va_list args);
int convert_base(unsigned long num, int base, const char *digits);
#endif /* MAIN_H */
