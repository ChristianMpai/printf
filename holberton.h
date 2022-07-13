#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>
#include <stdarg.h>
/**
 * struct flags - struct containing flags to "turn on"
 * when a flag specifier is passed to _printf()
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;

/**
 * struct printHandler - struct to choose the right function depending
 * on the format specifier passed to _printf()
 * @c: format specifier
 * @f: pointer to the correct printing function
 */
typedef struct printHandler
{
	char c;
	int (*f)(va_list ap, flags_t *f);
} ph;
int print_int(va_list l, flags_t *f);
void print_number(int n);
int print_unsigned(va_list l, flags_t *f);
int count_digit(int i);
int print_hex(va_list l, flags_t *f);
int print_hex_big(va_list l, flags_t *f);
int print_binary(va_list l, flags_t *f);
int print_octal(va_list l, flags_t *f);
char *convert(unsigned long int num, int base, int lowercase);
int _printf(const char *format, ...);
<<<<<<< HEAD
int print_function(const char *s, int index);
int (*(const char *s, int index))(va_list, char *, unsigned int);
int print_dec_int(va_list arguments, char *buf, unsigned int ibuf);
int print_binary(va_list arguments, char *buf, unsigned int ibuf);
char *binary_arr(char *binary, long int int_in, int isneg, int limit);
int print_uns_int(va_list arguments, char *buf, unsigned int ibuf);
int print_oct(va_list arguments, char *buf, unsigned int ibuf);
int print_hex_low(va_list arguments, char *buf, unsigned int ibuf);
int print_hex_up(va_list arguments, char *buf, unsigned int ibuf);
int print_buffer(char *buf, unsigned int nbuf);
int print_string(va_list arguments, char *buf, unsigned int ibuf);
int print_s_null(va_list arguments, char *buf, unsigned int ibuf);
int pointer(va_list arguments, char *buf, unsigned int ibuf);
unsigned int handle_buff(char *buf, char c, unsigned int ibuf);
int plus_space_int(va_list arguments, char *buf, unsigned int ibuf);
int long_int(va_list arguments, char *buf, unsigned int ibuf);
int long_oct(va_list arguments, char *buf, unsigned int ibuf);
int long_uns_int(va_list arguments, char *buf, unsigned int ibuf);
int long_hex(va_list arguments, char *buf, unsigned int ibuf);
int long_hex_up(va_list arguments, char *buf, unsigned int ibuf);
int short_int(va_list arguments, char *buf, unsigned int ibuf);
int short_oct(va_list arguments, char *buf, unsigned int ibuf);
int short_uns_int(va_list arguments, char *buf, unsigned int ibuf);
int short_hex(va_list arguments, char *buf, unsigned int ibuf);
int short_hex_up(va_list arguments, char *buf, unsigned int ibuf);
int space_int(va_list arguments, char *buf, unsigned int ibuf);
int rev_string(va_list arguments, char *buf, unsigned int ibuf);
int print_c(va_list a __attribute__((unused)), char *buf, unsigned int i);
int print_cc(va_list arguments, char *buf, unsigned int ibuf);
int print_rot(va_list arguments, char *buf, unsigned int ibuf);
int num_oct(va_list arguments, char *buf, unsigned int ibuf);
int num_hex(va_list arguments, char *buf, unsigned int ibuf);
int num_hex_up(va_list arguments, char *buf, unsigned int ibuf);
char *oct_array(char *bnr, char *oct);
char *short_oct_array(char *bnr, char *oct);
char *long_oct_array(char *bnr, char *oct);
char *hex_array(char *bnr, char *hex, int isupp, int limit);

=======
int (*get_print(char s))(va_list, flags_t *);
int get_flag(char s, flags_t *f);
int print_string(va_list l, flags_t *f);
int print_char(va_list l, flags_t *f);
int _putchar(char c);
int _puts(char *str);
int print_rot13(va_list l, flags_t *f);
int print_rev(va_list l, flags_t *f);
int print_bigS(va_list l, flags_t *f);
int print_address(va_list l, flags_t *f);
int print_percent(va_list l, flags_t *f);
>>>>>>> refs/remotes/origin/main
#endif
