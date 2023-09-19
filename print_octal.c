#include "main.h"

/**
 * _print_octal - prints in octal form
 * @args: argument list
 *
 * Return: write count
 */
int _print_octal(va_list args)
{
	unsigned int n;
	char *octal;
	int len = 0;

	n = va_arg(args, unsigned int);

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	if ((int)n < 0)
	{
		_putchar('-');
		len = _print_digit((int)-n);
	}
	else
	{
		octal = int_to_octal((int)n);
		if (octal == NULL)
			return (-1);

		len = _puts(octal);
		free(octal);
	}

	return (len);
}
