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
int _print_percent(void);
int _print_char(va_list arg);
int _printf(const char *format, ...);
int loopFunction(const char *format, va_list va, specifier specifiers[]);
int manage_args(const char *format, int *index, va_list args, specifier specifiers[]);
int _print_digit(va_list args);
int _print_unsigned(va_list args);
int _print_octal(va_list args);
int _print_hex(va_list args);
int _print_hex_maj(va_list args);
int reverse_print(const char *s);
int _handle_print_unsigned_int(unsigned int digit, int writeCount);
int print_binary(va_list args);
int _print_str_asc(va_list arg);
int _print_str_rot(va_list arg);
int _handle_print_hex(unsigned long decimalnum, char maj);
int print_str_rev(va_list arg);
int _print_ptr(va_list arg);

#endif
