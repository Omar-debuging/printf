#include "main.h"

/**
 * _print_binary - print to binary
 * @args: argument
 *
 * Return: count
*/
int _print_binary(va_list args)
{
	int len = 0;
	unsigned int n = va_arg(args, unsigned int);
	char *bin = int_to_binary(n);

	if (bin == NULL)
		return (-1);
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	for (len = 0; bin[len] != '\0'; len++)
		_putchar(bin[len]);

	return (len);
}
