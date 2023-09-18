#include "main.h"
/**
 * _print_str - write string
 * @arg: arg
 *
 * Return: suc character
 */
int _print_str(va_list arg)
{
	int success = 0;
	char *str;

	str = va_arg(arg, char *);

	if (!str || str == NULL)
	{
		str = "(null)";
	}

	while (*str)
	{
		if (_putchar(str) > 0)
			success++;
		str++;
	}
	return (success);
}
/**
 * _print_percent - writes percent
 *
 * Return: success characters.
 */
int _print_percent(void)
{
	char p = '%';

	_putchar(&p);
	return (1);
}
/**
 * _print_char - writes character
 * @arg: arg
 *
 * Return: success characters.
 */
int _print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);

	_putchar_val(c);

	return (1);
}
