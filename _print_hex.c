#include "main.h"

/**
 * _print_hex - prints in octal form
 * @args: argument list
 *
 * Return: write count
 */
int _print_hex(va_list args)
{
	unsigned int n;
	char *hexa;
	int len = 0;

	n = va_arg(args, unsigned int);
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	if ((int)n < 0)
	{
		_putchar('0');
		len = pr_num((int)-n);
	}
	else
	{

		hexa = int_to_hex(n);
		if (hexa == NULL)
			return (-1);

		len = _puts(hexa);
		free(hexa);
	}

	return (len);
}
}
/**
 * _print_hex_maj - prints in octal form
 * @args: argument list
 *
 * Return: write count
 */
int _print_hex_maj(va_list args)
{
	unsigned int n;
	char *hexa;
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

		hexa = int_to_heX((int)n);
		if (hexa == NULL)
			return (-1);

		len = _puts(hexa);
		free(hexa);
	}

	return (len);
}
}
