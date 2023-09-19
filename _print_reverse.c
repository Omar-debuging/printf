#include "main.h"

/**
 * _print_str_rev - prints strings in reverse
 * @arg: string input
 *
 * Return: print count
*/
int _print_str_rev(va_list args)
{
	int i = 0, j;
	char *str = va_arg(args, char *);

	if (!str)
		str = "(null)";

	while (str[i])
		i++;

	for (j = i - 1; j >= 0; j--)
		_putchar(str[j]);

	return (i);

}
