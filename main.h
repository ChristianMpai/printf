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
 * Description: struct that stores pointers to a
 * printer functions.
 */
typedef struct print
{
	char *type_arg;
	int (*f)(va_list, char *, unsigned int);
} print_t;

int _printf(const char *format, ...);
int (*get_print(const char *s, int index))(va_list, char *, unsigned int);
int ev_print(const char *s, int index);
unsigned int handle_buf(char *buf, char c, unsigned int ibuf);
int print_buf(char *buf, unsigned int nbuf);
char *binary_array(char *binary, long int int_in, int isneg, int limit);
char *oct_array(char *bnr, char *oct);
int print_int(va_list arguments, char *buf, unsigned int ibuf);
int print_bnr(va_list arguments, char *buf, unsigned int ibuf);
int print_unt(va_list arguments, char *buf, unsigned int ibuf);
int print_oct(va_list arguments, char *buf, unsigned int ibuf);
int print_hex(va_list arguments, char *buf, unsigned int ibuf);
int print_upx(va_list arguments, char *buf, unsigned int ibuf);
char *hex_array(char *bnr, char *hex, int isupp, int limit);
int print_vstr(va_list arguments, char *buf, unsigned int ibuf);
int print_add(va_list arguments, char *buf, unsigned int ibuf);
int prinpint(va_list arguments, char *buf, unsigned int ibuf);
int prinsint(va_list arguments, char *buf, unsigned int ibuf);
int prinnoct(va_list arguments, char *buf, unsigned int ibuf);
int prinhhex(va_list arguments, char *buf, unsigned int ibuf);
int prinhupx(va_list arguments, char *buf, unsigned int ibuf);
int prinlint(va_list arguments, char *buf, unsigned int ibuf);
int prinhunt(va_list arguments, char *buf, unsigned int ibuf);
int prinlunt(va_list arguments, char *buf, unsigned int ibuf);
int prinloct(va_list arguments, char *buf, unsigned int ibuf);
int prinlhex(va_list arguments, char *buf, unsigned int ibuf);
int prinlupx(va_list arguments, char *buf, unsigned int ibuf);
int prinhint(va_list arguments, char *buf, unsigned int ibuf);
int prinhoct(va_list arguments, char *buf, unsigned int ibuf);
int prinhhex(va_list arguments, char *buf, unsigned int ibuf);
int prinhupx(va_list arguments, char *buf, unsigned int ibuf);

#endif
