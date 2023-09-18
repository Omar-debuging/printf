#include "main.h"

/**
 * _print_ptr - function-helper that prints addresses with the p format
 * @arg: arguments to insert
 *
 * Return: write result
 */
int _print_ptr(va_list arg)
{
	void *p = va_arg(arg, void *);
	const char hexDecimal[] = "0123456789abcdef";
	long address = (long)p;
	char addressstr[16];
	int i = 0;
	int digit;

	if (!address)
	{
		_putchar_val('(');
		_putchar_val('n');
		_putchar_val('i');
		_putchar_val('l');
		_putchar_val(')');
		return (1);
	}
	while (address > 0)
	{
		digit = address % 16;
		addressstr[i++] = hexDecimal[digit];
		address /= 16;
	}
	addressstr[i] = '\0';
	if (i > 0)
	{
		_putchar_val('0');
		_putchar_val('x');
		return (2 + _reverse_print(addressstr));
	}
	return (0);
}
