#include "main.h"

/**
 * print_char - write a character
 * @arg: arg
 *
 * Return: success character
 */
int print_char(va_list arg)
{
	char c = va_arg(arg, int);

	_putchar_val(c);

	return (1);
}
