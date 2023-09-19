#include "main.h"
#include <unistd.h>

/**
 * manage_print_unsigned_int - prints unsgined
 * @d: number
 * @Count: number
 *
 * Return: write count
*/
int manage_print_unsigned_int(unsigned int d, int Count)
{
	int i = 0;
	char s[1000];

	if (d == 0)
	{
		_putchar_val('0');
		return (1);
	}
	if (d < 10)
	{
		_putchar_val('0' + d);
		return (++Count);
	}
	while (d > 0)
	{
		s[i++] = ('0' + d % 10);
		d /= 10;
	}
	s[i] = '\0';
	Count += reverse_print(s);
	return (Count);
}
/**
 * print_int - print integers
 * @args: argument
 *
 * Return: writes
 */

int print_int(va_list args)
{
	int digit = va_arg(args, int);
	int count = 0;

	if (digit < 0)
	{
		digit *= -1;
		_putchar_val('-');
		count++;
	}
	return (manage_print_unsigned_int(digit, count));
}
/**
 * print_unsigned - prints unsgined
 * @args: arguments
 *
 * Return: write count
*/
int print_unsigned(va_list args)
{
	unsigned int digit = va_arg(args, unsigned int);

	return (manage_print_unsigned_int(digit, 0));
}
