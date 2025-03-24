#include "main.h"

/**
 * _putchar - Writes a character to stdout
 * @c: Character to print
 *
 * Return: 1 on success, -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_char - Prints a single character from va_list
 * @args: va_list of arguments
 *
 * Return: Number of characters printed
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}

/**
 * print_string - Prints a string from va_list
 * @args: va_list of arguments
 *
 * Return: Number of characters printed
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int i = 0, count = 0;

	if (str == NULL)
		str = "(null)";

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		count++;
		i++;
	}
	return (count);
}

/**
 * print_int - Prints a signed integer from va_list
 * @args: va_list of arguments
 *
 * Return: Number of characters printed
 */
int print_int(va_list args)
{
	int n = va_arg(args, int);
	unsigned int num;
	int count = 0;

	if (n < 0)
	{
		count += _putchar('-');
		num = (unsigned int)(-n);
	}
	else
	{
		num = (unsigned int)n;
	}
	count += print_number_recursive(num);
	return (count);
}

/**
 * print_number_recursive - Recursively prints an unsigned int
 * @n: The number to print
 *
 * Return: Number of digits printed
 */
int print_number_recursive(unsigned int n)
{
	int count = 0;

	if (n / 10)
		count += print_number_recursive(n / 10);
	count += _putchar((n % 10) + '0');
	return (count);
}
