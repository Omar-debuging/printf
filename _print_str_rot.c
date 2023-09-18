#include "main.h"

/**
 * isAlpha - function that indicates if the character is alphabet or not
 * @c : input character
 *
 * Return: result 1 if its true  0 otherwise
 */
int isAlpha(char c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

/**
 * isUpperCase - function that test if c is uppercase
 * @c: char
 *
 * Return: 1 if its true 0 otherwise
 */
int isUpperCase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

/**
 * rot13 - function that prints the rot13
 * @c: char input
 *
 * Return: c
 */
char rot13(char c)
{
	if (isAlpha(c))
	{
		char b = isUpperCase(c) ? 'A' : 'a';/*b is the base*/

		return ((c - b + 13) % 26 + b);
	}
	return (c);
}

/**
 * _print_str_rot - function that prints the rot13'ed string
 * @arg: char
 *
 * Return: write count
 */
int _print_str_rot(va_list arg)
{
	char *text = va_arg(arg, char *);
	char str[100000];
	int s = 0;
	int i = 0;

	for (i = 0; text[i] != '\0'; i++)
	{
		str[i] = rot13(text[i]);
	}
	i = 0;
	while (str[i])
	{
		if (_putchar_val(str[i]) > 0)
			s++;
		i++;
	}
	return (s);
}
