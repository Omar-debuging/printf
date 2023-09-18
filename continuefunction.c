#include "main.h"

/**
 * loopFunction - continue
 * @format: format string
 * @args: va
 * @specifiers: va
 *
 * Return: nothing
*/
int loopFunction(const char *format, va_list args, specifier specifiers[])
{
	int successWrites = 0, tmp, index = 0;

	while (format[index])
	{
		if (format[index] == '%')
		{
			tmp = handle_args(format, &index, args, specifiers);
			if (tmp == -1)
				return (-1);
			successWrites += tmp;
			(index)++;
			continue;
		}
		successWrites += _putchar(&format[index]);
		index++;
	}
	return (successWrites);
}
/**
 * handle_args - handling percent args
 * @format: format string
 * @index: index string
 * @args: va
 * @specifiers: va
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
