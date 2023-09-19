#include "main.h"

#include "main.h"

/**
 * _print_char - prints a single char
 *
 * @arg: arguments list
 *
 * Return: number of characters printed
 */
int _print_char(va_list arg)
{
	char c = va_arg(arg, int);

	_putchar(c);
	return (1);
}
/**
 * _print_str - prints a string
 *
 * @arg: arguments list
 *
 * Return: number of characters printed
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
 * _print_percent - prints a single percent
 *
 * @arg: arguments list
 *
 * Return: number of characters printed
 */

int _print_percent(va_list __attribute__((__unused__)) arg)
{
	_putchar('%');
	return (1);
}
