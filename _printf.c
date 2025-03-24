#include "main.h"

/**
 * _printf - Produces output according to a format
 * @format: The format string
 *
 * Return: Number of characters printed
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
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
		}
		else
		{
			if (format[i + 1] == '\0')
				return (-1);

			switch (format[i + 1])
			{
			case 'c':
				count += print_char(args);
				break;
			case 's':
				count += print_string(args);
				break;
			case '%':
				_putchar('%');
				count++;
				break;
			case 'd':
			case 'i':
				count += print_int(args);
				break;
			case 'u':
				count += print_unsigned(args);
				break;
			case 'o':
				count += print_octal(args);
				break;
			case 'x':
				count += print_hex(args);
				break;
			case 'X':
				count += print_HEX(args);
				break;
			case 'p':
				count += print_address(args);
				break;
			default:
				_putchar('%');
				_putchar(format[i + 1]);
				count += 2;
				break;
			}
			i++;
		}
		i++;
	}
	va_end(args);

	return (count);
}
