#include "main.h"

/**
 * handle_specifier - Handles a single format specifier
 * @spec: The format specifier (e.g., 'c', 's', 'd', etc.)
 * @args: The va_list of arguments
 *
 * Return: Number of characters printed for this specifier
 */
int handle_specifier(char spec, va_list args)
{
	switch (spec)
	{
	case 'c':
		return (print_char(args));
	case 's':
		return (print_string(args));
	case 'd':
	case 'i':
		return (print_int(args));
	case 'u':
		return (print_unsigned(args));
	case 'o':
		return (print_octal(args));
	case 'x':
		return (print_hex(args));
	case 'X':
		return (print_HEX(args));
	case 'p':
		return (print_address(args));
	case '%':
		return (_putchar('%'));
	default:
		_putchar('%');
		_putchar(spec);
		return (2);
	}
}

/**
 * _printf - Custom printf function
 * @format: The format string
 *
 * Return: Total number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				va_end(args);
				return (-1);
			}
			count += handle_specifier(format[i + 1], args);
			i++;
		}
		else
		{
			count += _putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (count);
}
