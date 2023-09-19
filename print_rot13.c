#include "main.h"

/**
 * isAlpha - function that indicates if the character is an alphabet
 * @c : char
 *
 * Return: 1 if its true 0 otherwise
 */
int isAlpha(char c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

/**
 * isUpperCase - function that tests if the char is an uppercase
 * @c: char
 *
 * Return: 1 if its true 0 otherwise
 */
int isUpperCase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

/**
 * rot13 - function that prints the rot1'ed
 * @c: char
 *
 * Return: c
 */
char rot13(char c)
{
	if (isAlpha(c))
	{
		char b = isUpperCase(c) ? 'A' : 'a';

		return ((c - b + 13) % 26 + b);
	}
	return (c);
}

/**
 * _print_str_rot - function that prints the rot1'ed string
 * @arg: char input
 *
 * Return: count
 */
int _print_str_rot(va_list arg)
{
	char *txt = va_arg(arg, char *);
	char str[100000];
	int s = 0;
	int i = 0;

	for (i = 0; txt[i] != '\0'; i++)
	{
		str[i] = rot13(txt[i]);
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
