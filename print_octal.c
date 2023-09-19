#include "main.h"

/**
 * _print_octal - function that prints arg in octal form
 * @args:input to be converted
 *
 * Return: write count (octal format)
 */
int _print_octal(va_list args)
{
	unsigned int o, num = 0;
	int base = 1;

	o = 0;
	num = va_arg(args, unsigned int);
	while (num != 0)
	{
		o += (num % 8) * base;
		num /= 8;
		base *= 10;
	}
	return (manage_print_unsigned_int(o, 0));
}
