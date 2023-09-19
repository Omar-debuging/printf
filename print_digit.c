#include "main.h"

/**
 * _pr_int - print integers, not the  most efficient
 * @args: argument
 *
 * Return: writes
 */
int _pr_int(int n)
{
	int len;
	int dev;
	unsigned int num;

	len = 0;
	dev = 1;

	if (n < 0)
	{
		_putchar('-');
		num = n * (-1);
		len++;
	} else
	{
		num = n;
	}
	while (num / dev > 9)
	{
		dev *= 10;
	}
	while (dev != 0)
	{
		_putchar((num / dev) + '0');
		num = num % dev;
		dev /=  10;
		len++;
	}
	return (len);
}

/**
 * _print_digit - Prints an integer
 * @args: list of arguments
 * Return: Will return the amount of characters printed.
 */


int _print_digit(va_list args)
{
	int count;
	int n;

	n = va_arg(args, int);

	count = _pr_int(n);

	return (count);
}
/**
 * _print_unsigned - prints unsgined
 * @args: arguments
 *
 * Return: write count
*/
int _print_unsigned(unsigned int n)
{
	int div;
	int len;
	unsigned int num;

	div = 1;
	len = 0;

	num = n;

	while (num / div > 9)
		div *= 10;

	while (div != 0)
	{
		len++;
		_putchar('0' + num / div);
		num %= div;
		div /= 10;
	}
	return (len);
}

