#ifndef _MY_PRINTF_HEADER
#define _MY_PRINTF_HEADER

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

#define OUTPUT_BUFFER_SIZE 1024
#define FLUSH_BUFFER -1

#define NULL_STRING "(null)"
#define PARAMS_INITIALIZATION {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
#define CONVERT_TO_LOWERCASE 1
#define CONVERT_TO_UNSIGNED 2

/**
 * struct Parameters - params_t
 *
 * @unsign: flag indicating if the value is unsigned.
 *
 * @plus_flag: set if the plus flag is specified.
 * @space_flag: set if the space flag is specified.
 * @hashtag_flag: set if the hashtag flag is specified.
 * @zero_flag: set if the zero flag is specified.
 * @minus_flag: set if the minus flag is specified.
 *
 * @width: specified field width.
 * @precision: specified field precision.
 *
 * @h_modifier: set if the h modifier is specified.
 * @l_modifier: set if the l modifier is specified.
 */

typedef struct Parameters
{
	unsigned int unsign    : 1;
	unsigned int plus_flag : 1;
	unsigned int space_flag : 1;
	unsigned int hashtag_flag : 1;
	unsigned int zero_flag : 1;
	unsigned int minus_flag : 1;
	unsigned int width;
	unsigned int precision;
	unsigned int h_modifier;
	unsigned int l_modifier;
} params_t;

/**
 * struct Specifier - specifier_t
 *
 * @specifier: the format token.
 * @f: the associated function.
 */

typedef struct Specifier
{
	char *specifier;
	int (*f)(va_list, params_t *);
} specifier_t;

/* Module: _put.c */
int put_string(char *str);
int put_char(int c);

/* print_function.c */
int print_character(va_list ap, params_t *params);
int print_integer(va_list ap, params_t *params);
int print_text(va_list ap, params_t *params);
int print_percent_symbol(va_list ap, params_t *params);
int print_Symbol(va_list ap, params_t *params);

/* number.c */
char *convert_to_base(long int num, int base, int flags, params_t *params);
int print_unsigned_integer(va_list ap, params_t *params);
int print_address(va_list ap, params_t *params);

/* specifier.c */
int (*get_specifier_function(char *s))(va_list ap, params_t *params);
int get_print_function(char *s, va_list ap, params_t *params);
int get_flag_value(char *s, params_t *params);
int get_modifier_value(char *s, params_t *params);
char *get_specified_width(char *s, params_t *params, va_list ap);

/* convert_number.c */
int print_hexadecimal(va_list ap, params_t *params);
int print_HEXadecimal(va_list ap, params_t *params);
int print_binary_num(va_list ap, params_t *params);
int print_octal_num(va_list ap, params_t *params);

/* simple_pointer.c */
int print_formatted_string_to(char *start, char *stop, char *except);
int print_reverse(va_list ap, params_t *params);
int print_rot13_encoded(va_list ap, params_t *params);

/* print_number.c */
int is_digit(int c);
int string_length(char *s);
int print_formatted_number(char *str, params_t *params);
int print_right_shifted_number(char *str, params_t *params);
int print_left_shifted_number(char *str, params_t *params);

/* params.c */
void initialize_params(params_t *params, va_list ap);

/* string_fields.c */
char *get_specified_precision(char *p, params_t *params, va_list ap);

/* _printf.c */
int custom_printf(const char *format, ...);

#endif

