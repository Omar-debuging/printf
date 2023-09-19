#include "main.h"

/**
 * _print_ptr - prints the address
 * @arg: argument input
 *
 * Return:print count
 */
int _print_ptr(va_list arg)
{
	void *p = va_arg(arg, void *);
	const char hex_dec[] = "0123456789abcdef";
	long add = (long)p;
	char addStr[16];
	int i = 0;

	if (!add)
	{
		_putchar_val('(');
		_putchar_val('n');
		_putchar_val('i');
		_putchar_val('l');
		_putchar_val(')');
		return (5);
	}
	while (add > 0)
	{
		int d = add % 16;

		addStr[i++] = hex_dec[d];
		add /= 16;
	}
	addStr[i] = '\0';
	if (i > 0)
	{
		_putchar_val('0');
		_putchar_val('x');
		return (2 + _reverse_print(addStr));
	}
	return (0);
}
