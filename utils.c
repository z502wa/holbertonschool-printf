#include "main.h"

/**
 * _putchar - Writes a character to stdout
 * @c: The character to print
 *
 * Return: 1 on success, -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_char - Prints a single character from va_list
 * @args: va_list containing the character
 *
 * Return: 1 (one character printed)
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}

/**
 * print_string - Prints a string from va_list
 * @args: va_list containing the string
 *
 * Return: number of characters printed
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int i = 0;

	if (str == NULL)
		str = "(null)";

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}

/**
 * print_int - Prints a signed integer
 * @args: va_list containing the integer
 *
 * Return: number of characters printed
 */
int print_int(va_list args)
{
	int n = va_arg(args, int);
	unsigned int num;
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		count++;
		num = -n;
	}
	else
	{
		num = n;
	}
	count += print_unsigned_num(num, 10, "0123456789");
	return (count);
}

/**
 * print_unsigned - Prints an unsigned integer
 * @args: va_list containing the unsigned int
 *
 * Return: number of characters printed
 */
int print_unsigned(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);

	return (print_unsigned_num(n, 10, "0123456789"));
}

/**
 * print_octal - Prints an unsigned int in octal
 * @args: va_list containing the unsigned int
 *
 * Return: number of characters printed
 */
int print_octal(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);

	return (print_unsigned_num(n, 8, "01234567"));
}

/**
 * print_hex - Prints an unsigned int in lowercase hex
 * @args: va_list containing the unsigned int
 *
 * Return: number of characters printed
 */
int print_hex(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);

	return (print_unsigned_num(n, 16, "0123456789abcdef"));
}

/**
 * print_HEX - Prints an unsigned int in uppercase hex
 * @args: va_list containing the unsigned int
 *
 * Return: number of characters printed
 */
int print_HEX(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);

	return (print_unsigned_num(n, 16, "0123456789ABCDEF"));
}

/**
 * print_address - Prints a pointer address
 * @args: va_list containing the pointer
 *
 * Return: number of characters printed
 */
int print_address(va_list args)
{
	void *ptr = va_arg(args, void *);
	unsigned long addr;
	int count = 0;

	if (ptr == NULL)
	{
		/* Print (nil) if pointer is NULL */
		return (write(1, "(nil)", 5));
	}

	addr = (unsigned long)ptr;
	count += write(1, "0x", 2);
	count += print_unsigned_num(addr, 16, "0123456789abcdef");
	return (count);
}

/**
 * print_unsigned_num - Recursively prints an unsigned long number in any base
 * @num: the number to print
 * @base: the base to print in
 * @digits: string of characters for the base (e.g. "0123456789ABCDEF")
 *
 * Return: number of characters printed
 */
int print_unsigned_num(unsigned long num, int base, const char *digits)
{
	int count = 0;

	if (num / base)
		count += print_unsigned_num(num / base, base, digits);

	count += _putchar(digits[num % base]);
	return (count);
}
