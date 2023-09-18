#include "main.h"

/**
 * _print_binary - print to binary
 * @args: argument
 *
 * Return: count
*/
int _print_binary(va_list args)
{
	char arr[10000];
	unsigned int s = va_arg(args, unsigned int);
	int i = 0;

	if (s == 0)
	{
		_putchar_val('0');
		return (1);
	}
	while (s)
	{
		arr[i++] = '0' + (s % 2);
		s /= 2;
	}

	return (_reverse_print(arr));
}
