#include "main.h"

/**
 * reverse_print - prints strings in reverse
 * @s: string input
 *
 * Return: print count
*/
int reverse_print(const char *s)
{
	int len = 0, i = 0, count = 0;

	while (s[len])
		len++;

	for (i = len - 1; i >= 0; i--)
	{
		count += _putchar((s + i));
	}

	return (count);
}

/**
 * print_str_rev - prints strings in reverse
 * @arg: string input
 *
 * Return: print count
*/
int print_str_rev(va_list arg)
{
	char *text = va_arg(arg, char *);

	return (reverse_print(text));
}
