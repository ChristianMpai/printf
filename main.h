#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct print - struct for printer functions
 * @type_arg: identifier
 * @f: pointer to a printer functions
 *
 * Description: struct that stores pointers to a
 * printer functions.
 */
typedef struct print
{
	char *type_arg;
	int (*f)(va_list, char *, unsigned int);
} print_t;

int _printf(const char *format, ...);
int print_buf(char *buf, unsigned int nbuf);
unsigned int handle_buf(char *buf, char c, unsigned int ibuf);
int ev_print(const char *s, int index);
int (*get_print(const char *s, int index))(va_list, char *, unsigned int);
int print_int(va_list arguments, char *buf, unsigned int ibuf);
int print_binary(va_list arguments, char *buf, unsigned int ibuf);
char *binary_array(char *binary, long int int_in, int isneg, int limit);
int print_unt(va_list arguments, char *buf, unsigned int ibuf);

#endif
