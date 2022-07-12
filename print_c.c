#include "main.h"
#include <stdio.h>

/**
 * print_c - prints char c to standard output.
 * @a: input char
 * @buf: buffer pointer
 * @i: index for buffer pointer
 * Return: On success 1.
 */
int print_c(va_list a __attribute__((unused)), char *buf, unsigned int i)
{
	handle_buff(buf, '%', i);

	return (1);
}
