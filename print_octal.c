#include "main.h"

/**
 * _print_octal - function that prints arg in octal form
 * @args:input to be converted
 *
 * Return: write count (octal format)
 */
int _print_octal(va_list args)
{
	unsigned int o = 0, num = 0;
	int i = 1;

	num = va_arg(args, long int);
	while (num != 0)
	{
		o += (num % 8) * i;
		num /= 8;
		i *= 10;
	}
	return (manage_print_unsigned_int(o, 0));
}
