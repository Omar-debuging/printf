#include "main.h"
/**
 * _print_str - write string
 * @arg: arg
 *
 * Return: suc character
 */
int _print_str(va_list arg)
{
	int i;
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		str = "(null)";
	}
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
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
