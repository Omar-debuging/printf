#include "main.h"

/**
 * _print_hex_helper - func helper
 * @num: decimal number
 * @maj: uppercase
 *
 * Return:result
 */
int _print_hex_helper(unsigned long num, char maj)
{
	unsigned long q, r;
	char hexnum[100];
	int j;

	j = 0;
	q = num;

	while (q != 0)
	{
		r = q % 16;
		if (r < 10)
			hexnum[j++] = '0' + r;
		else
			hexnum[j++] = maj + r - 10;
		q /= 16;
	}
	hexnum[j] = '\0';
	return (reverse_print(hexnum));
}

/**
 * _print_hex - func that prints args in hex form
 * @args: arguments
 *
 * Return: hex form
 */
int _print_hex(va_list args)
{
	unsigned long num;

	num = va_arg(args, long int);
	if (num == 0)
	{
		_putchar_val('0');
		return (1);
	}

	return (_print_hex_helper(num, 'a'));
}
/**
 * _print_hex_upp - prints in hex form but uppercase
 * @args: argument list input
 *
 * Return: count
 */
int _print_hex_upp(va_list args)
{
	unsigned long num;

	num = va_arg(args, long int);

	if (num == 0)
	{
		_putchar_val('0');
		return (1);
	}
	return (_print_hex_helper(num, 'A'));
}
