#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct print - struct for printer functions
 * @type_arg: identifier
 * @f: pointer to a printer functions
 *
 * Description: struct that stores pointers to printer functions.
 */
typedef struct print
{
	char *type_arg;
	int (*f)(va_list, char *, unsigned int);
} print_t;

int _printf(const char *format, ...);
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

#endif
