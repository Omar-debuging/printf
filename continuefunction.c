#include "main.h"

/**
 * loopFunction - continue
 * @format: format string
 * @args: ap
 * @specifiers: ap
 *
 * Return: nothing
*/
int loopFunction(const char *format, va_list args, specifier specifiers[])
{
	int write = 0, tmp, index = 0;

	while (format[index])
	{
		if (format[index] == '%')
		{
			tmp = handle_args(format, &index, args, specifiers);
			if (tmp == -1)
				return (-1);
			write += tmp;
			(index)++;
			continue;
		}
		write += _putchar(&format[index]);
		index++;
	}
	return (write);
}

/**
 * handle_args - handling percent args
 * @format: format string
 * @index: index string
 * @args: va
 * @protos: va
 *
 * Return: writes
*/
int handle_args(const char *format, int *index, va_list args, specifier specifiers[])
{
	int n_specifiers, i = 0, size = -1;

	(*index)++;
	n_specifiers = 14;
	if (!format[*index] || format[*index] == '\0')
		return (-1);
	for (i = 0; i < n_specifiers; i++)
	{
		if (*specifiers[i].code == format[*index])
		{
			size = specifiers[i].f(args);
			return (size);
		}
	}
	if (!format[*index + 1])
		return (-1);
	return (_putchar_val('%') + _putchar(&format[*index]));
}
