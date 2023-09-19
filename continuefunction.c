#include "main.h"

/**
 * loopFunction - continue
 * @format: format string
 * @specifiers: va
 * @args: args
 *
 * Return: nothing
*/
int loopFunction(const char *format, specifier specifiers[], va_list ap)
{
	int i, j, val, count;

	count = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; specifiers[j].code != NULL; j++)
			{
				if (format[i + 1] == specifiers[j].code[0])
				{
					val = specifiers[j].f(ap);
					if (val == -1)
						return (-1);
					count += val;
					break;
				}
			}
			if (specifiers[j].code == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					count += 2;
				} else
					return (-1);
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	return (count);
}
