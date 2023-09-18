#include "main.h"

/**
 * _printf - writes formatted output
 * @format: the format
 *
 * Return: success characters.
 */
int _printf(const char * const format, ...)
{
	int write = 0;
	va_list args;
	specifier specifiers[] = {
		{"%", _print_percent},
		{"c", _print_char},
		{"s", _print_str},
		{"d", _print_digit},
		{"i", _print_digit},
		{"r", _print_str_rev},
		{NULL, NULL}
	};

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(args, format);
	write = loopFunction(format, args, specifiers);
	_putchar_val(-2);
	va_end(args);
	return (write);
}
