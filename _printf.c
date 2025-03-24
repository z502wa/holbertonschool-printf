#include "main.h"

/**
 * handle_format - Handles a single format specifier
 * @format: Format string
 * @i: Pointer to the current index
 * @args: The va_list of arguments
 *
 * Return: The number of characters printed for this specifier
 */
int handle_format(const char *format, int *i, va_list args)
{
	int count = 0;

	switch (format[*i + 1])
	{
	case 'c':
		count += print_char(args);
		break;
	case 's':
		count += print_string(args);
		break;
	case 'd':
	case 'i':
		count += print_int(args);
		break;
	/* لو عندك صيغ أخرى مثل %u, %x, إلخ، أضفها هنا */
	case '%':
		count += _putchar('%');
		break;
	default:
		count += _putchar('%');
		count += _putchar(format[*i + 1]);
		break;
	}
	*i += 1;
	return (count);
}

/**
 * _printf - A custom printf-like function
 * @format: The format string
 *
 * Return: The total number of characters printed
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
			count += handle_format(format, &i, args);
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
