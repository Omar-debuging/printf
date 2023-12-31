#include "main.h"

/**
 * _printf - writes formatted output
 * @format: the format
 *
 * Return: appropriate characters.
 */
int _printf(const char * const format, ...)
{
	int write = 0;
	va_list args;
	specifier specifiers[] = {
		{"%", _print_per},
		{"c", print_char},
		{"s", _print_str},
		{"S", _print_str_asc},
		{"d", print_int},
		{"i", print_int},
		{"b", print_binary},
		{"u", print_unsigned},
		{"o", _print_octal},
		{"x", _print_hex},
		{"X", _print_hex_upp},
		{"R", _print_str_rot},
		{"r", print_str_rev},
		{"p", _print_ptr},
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
