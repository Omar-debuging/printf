#include "main.h"
/**
 * _print_str - write string
 * @arg: arg
 *
 * Return: number of character printed
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
	_putchar('%');
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
	char c = va_arg(arg, int);

	_putchar(c);
	return (1);
}
