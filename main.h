#ifndef WRITEFUNCTION
#define WRITEFUNCTION
#define BUFFER_LEN 1024

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>


/**
 * struct specifier - struct token
 * @code: format
 * @f: function associated
 *
 */
typedef struct specifier
{
	char *code;
	int (*f)();
} specifier;

int _putchar(char c);
int _puts(char *str);
int _print_str(va_list arg);
int _print_percent(void);
int _print_char(va_list arg);
int _printf(const char *format, ...);
int loopFunction(const char *format, va_list args, specifier specifiers[]);
int _print_digit(int n);
int _print_unsigned(unsigned int n);
int _print_octal(va_list args);
int _print_hex(va_list args);
int _print_hex_maj(va_list args);
int _reverse_print(const char *s);
int _print_binary(va_list args);
int _print_str_asc(va_list args);
int _print_str_rot(va_list arg);
int _print_str_rev(va_list args);
int _print_ptr(va_list arg);
int pr_hexa_char(char c);
char *int_to_binary(int n);
char *arr_rev(char *arr);
char *int_to_octal(unsigned int n);
char *int_to_hex(int n);
char *int_to_heX(int n);
int base_len(int n, int dev);

#endif
