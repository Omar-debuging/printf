#include "main.h"

/**
 * _print_binary - print to binary
 * @args: argument
 *
 * Return: count
*/
int _print_binary(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);

	return (int_to_binary(n));
}
