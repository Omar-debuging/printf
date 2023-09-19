#ifndef WRITEFUNCTION
#define WRITEFUNCTION

#include <unistd.h>
#include <stdarg.h>

#define BUFFER_LEN 1024

/**
 * struct specifier - specifier
 * @code: specifier
 * @f: function associated to each code
 *
 */
typedef struct specifier
{
	char *code;
	int (*f)();
} specifier;

int _putchar(const char *c);
int _putchar_val(const char c);
int _writer(const char c);
int _print_str(va_list arg);
int _print_per(void);
int print_char(va_list arg);
int _printf(const char *format, ...);
int loopFunction(const char *format, va_list va, specifier specifiers[]);
int manage_args(const char *format, int *index, va_list args, specifier specifiers[]);
int print_int(va_list args);
int print_unsigned(va_list args);
int _print_octal(va_list args);
int _print_hex(va_list args);
int _print_hex_upp(va_list args);
int reverse_print(const char *s);
int manage_print_unsigned_int(unsigned int digit, int writeCount);
int print_binary(va_list args);
int _print_str_asc(va_list arg);
int _print_str_rot(va_list arg);
int print_str_rev(va_list arg);
int _print_hex_helper(unsigned long num, char maj);
int _print_ptr(va_list arg);

#endif
