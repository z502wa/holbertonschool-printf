#include "main.h"

/**
 * print_unsigned - Prints an unsigned integer
 * @args: va_list of arguments
 *
 * Return: Number of characters printed
 */
int print_unsigned(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);

	return (print_number_recursive(n));
}

/**
 * print_octal - Prints an unsigned int in octal
 * @args: va_list of arguments
 *
 * Return: Number of characters printed
 */
int print_octal(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int count = 0;

	if (n == 0)
	{
		return (_putchar('0'));
	}
	count += convert_base(n, 8, "01234567");
	return (count);
}

/**
 * print_hex - Prints an unsigned int in lowercase hexadecimal
 * @args: va_list of arguments
 *
 * Return: Number of characters printed
 */
int print_hex(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);

	return (convert_base(n, 16, "0123456789abcdef"));
}

/**
 * print_HEX - Prints an unsigned int in uppercase hexadecimal
 * @args: va_list of arguments
 *
 * Return: Number of characters printed
 */
int print_HEX(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);

	return (convert_base(n, 16, "0123456789ABCDEF"));
}

/**
 * print_address - Prints a pointer address
 * @args: va_list of arguments
 *
 * Return: Number of characters printed
 */
int print_address(va_list args)
{
	void *ptr = va_arg(args, void *);
	unsigned long address;
	int count = 0;

	if (ptr == NULL)
	{
		return (write(1, "(nil)", 5));
	}
	address = (unsigned long)ptr;
	count += write(1, "0x", 2);
	count += convert_base(address, 16, "0123456789abcdef");
	return (count);
}
