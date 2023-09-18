#include "main.h"

/**
*handle_string - prints a sting with newline
*@str: the string to print
*Return: the lenght of string
*/

int handle_string(char *str)
{
	int i = 0;

	if (str == NULL)
	{
		str = "(null)";
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}
