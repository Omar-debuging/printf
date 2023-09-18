#include "main.h"

/**
 * _reverse_print - print strings in reverse
 * @s: string input
 *
 * Return: count
*/
int _reverse_print(const char *s)
{
	int _len = 0, i = 0, count = 0;

	while (s[_len])
		_len++;

	for (i = _len - 1; i >= 0; i--)
	{
		count += _putchar((s + i));
	}

	return (count);
}

/**
 * _print_str_rev - prints strings in reverse
 * @arg: string input
 *
 * Return: print count
*/
int _print_str_rev(va_list arg)
{
	char *list = va_arg(arg, char *);

	return (_reverse_print(list));
}
