#include "main.h"

/**
 * print_buffer - prints buffer of 1024 chars.
 * @buf: buffer pointer
 * @nbuf: number of bytes to print
 * Return: number of bytes printed.
 */
int print_beffer(char *buf, unsigned int nbuf)
{
	return (write(1, buf, nbuf));
}
