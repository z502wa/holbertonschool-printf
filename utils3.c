#include "main.h"

/**
 * convert_base - Recursively converts and prints a number in a given base
 * @num: The number to convert
 * @base: The base to convert to
 * @digits: The digits to use (e.g. "0123456789ABCDEF")
 *
 * Return: Number of characters printed
 */
int convert_base(unsigned long num, int base, const char *digits)
{
	int count = 0;

	if (num / base)
		count += convert_base(num / base, base, digits);

	count += _putchar(digits[num % base]);
	return (count);
}
