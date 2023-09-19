#include "main.h"

/**
 * pr_pointer - Prints a memory address in hex form
 * @arg:arguments to be inserted
 * Return:number of characters printed
 */

int _print_ptr(va_list arg)
{
	unsigned long int p = va_arg(arg, unsigned long int);
	char *hex_str;
	int count = 0;

	if (p == 0)
	{
		count += _puts("(nil)");
	}
	else
	{
		count += _puts("0x");
		hex_str = convert_to_hex(ptr,16, 1);
		if (hex_str != NULL)
		{
			count += _puts(hex_str);
			free(hex_str);
		}
		else
			return (-1);
	}

	return (count);
}

/**
 * convert_to_hex - Convert an integer to a specified base as a string.
 * @num: input
 * @base: The base for conversion (16 for hex 8 for octal)
 * @uppercase: the use ofuppercase letters for hex
 *
 * Return: the converted number
 */
char *convert_to_hex(unsigned long int num, int base, int uppercase)
{
	char buffer[64];
	char *result;
	int i = 0;
	int j = 0;
	char *hex_chars;

	if (uppercase)
		hex_chars = "0123456789ABCDEF";
	else
		hex_chars = "0123456789abcdef";


	if (num == 0)
	{
		result = malloc(2);
		if (!result)
			return (NULL);
		result[0] = '0';
		result[1] = '\0';
		return (result);
	}

	while (num > 0)
	{
		buffer[i++] = hex_chars[num % base];
		num /= base;
	}

	result = malloc(i + 1);
	if (!result)
		return (NULL);


	for (j = 0; i > 0; j++, i--)

		result[j] = buffer[i - 1];
	result[j] = '\0';

	return (result);
}
