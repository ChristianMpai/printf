#include "main.h"
#include <stdio.h>
/**
 * print_cc - prints char c to standard output.
 * @arguments: input char
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: On success 1.
 */
int print_cc(va_list arguments, char *buf, unsigned int ibuf)
{
	char c;

	c = va_arg(arguments, int);
	handle_buff(buf, c, ibuf);

	return (1);
}
