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
int print_uns_int(va_list arguments, char *buf, unsigned int ibuf);
int print_oct(va_list arguments, char *buf, unsigned int ibuf);
int print_hex_low(va_list arguments, char *buf, unsigned int ibuf);
int print_hex_up(va_list arguments, char *buf, unsigned int ibuf);
int print_buffer(char *buf, unsigned int nbuf);
int print_string(va_list arguments, char *buf, unsigned int ibuf);
int print_s_null(va_list arguments, char *buf, unsigned int ibuf);
int pointer(va_list arguments, char *buf, unsigned int ibuf);

#endif
