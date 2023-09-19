#include "main.h"

/**
 * _print_str - func that printd string
 * @arg: arg input
 *
 * Return: 1 for success 0 otherwise
 */
int _print_str(va_list arg)
{
	int s = 0;
	char *str;

	str = va_arg(arg, char *);

	if (!str || str == NULL)
	{
		str = "(null)";
	}

	while (*str)
	{
		if (_putchar(str) > 0)
			s++;
		str++;
	}
	return (s);
}

/**
 * _print_str_asc - writes string
 * @arg: arg input
 *
 * Return: 1 for success characters 0 otherwise
 */
int _print_str_asc(va_list arg)
{
	int s = 0, x = 0;
	char *str;

	str = va_arg(arg, char *);

	if (!str || str == NULL)
	{
		str = "(null)";
	}

	while (*str)
	{
		if (*str < 32 || *str >= 127)
		{
			_putchar_val('\\');
			_putchar_val('x');
			x = *str - '0' + 48;
			if (x < 16)
			{
				_putchar_val('0');
				s += 3 + _print_hex_helper(*str - '0' + 48, 'A');
			}
			else
				s += 2 + _print_hex_helper(*str - '0' + 48, 'A');
		}
		else if (_putchar(str) > 0)
			s++;
		str++;
	}
	return (s);
}
