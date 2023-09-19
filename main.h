#ifndef WRITEFUNCTION
#define WRITEFUNCTION

#include <unistd.h>
#include <stdarg.h>

#define BUFFER_LEN 1024

/**
 * struct proto - ee
 * @code: type
 * @f: type
 *
 */
typedef struct proto
{
	char *code;
	int (*f)();
} proto;

int _putchar(const char *c);
int _putchar_val(const char c);
int _writer(const char c);
int _print_str(va_list arg);
int _print_percent(void);
int _print_char(va_list arg);
int _printf(const char *format, ...);
int continueFunction(const char *format, va_list va, proto protos[]);
int handle_args(const char *format, int *index, va_list args, proto protos[]);
int _print_digit(va_list args);
int _print_unsigned(va_list args);
int _print_octal(va_list args);
int _print_hex(va_list args);
int _print_hex_maj(va_list args);
int _reverse_print(const char *s);
int _handle_print_unsigned_int(unsigned int digit, int writeCount);
int _print_binary(va_list args);
int _print_str_asc(va_list arg);
int _print_str_rot(va_list arg);
int _handle_print_hex(unsigned long decimalnum, char maj);
int _print_str_rev(va_list arg);
int _print_ptr(va_list arg);
<<<<<<< HEAD

=======
int pr_hexa_char(char c);
char *int_to_binary(int n);
char *arr_rev(char *arr);
char *int_to_octal(unsigned int n);
char *int_to_hex(int n);
char *int_to_heX(int n);
int base_len(int n, int dev);
int _pr_int(int n);
char *convert_to_hex(unsigned long int num, int uppercase);
>>>>>>> 33bff68ba4c3cb101777b3f097f66fbcb347c120

#endif
