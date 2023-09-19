#include "main.h"

/**
 * print_binary - print binary number
 * @args: argument
 *
 * Return: count
*/
int print_binary(va_list args)
{
	char array[10000];
	unsigned int d = va_arg(args, unsigned int);
	int i = 0;

	if (d == 0)
	{
		_putchar_val('0');
		return (1);
	}
	while (d)
	{
		array[i++] = '0' + (d % 2);
		d /= 2;
	}

	return (reverse_print(array));
}
