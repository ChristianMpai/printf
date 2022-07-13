#include "main.h"

/**
 * handle_buff - Concatenation of buffer chars.
 * @buf: buffer pointer
 * @c: charcter to concatenate
 * @ibuf: index of buffer pointer
 * Return: index of buffer pointer.
 */
unsigned int handle_buff(char *buf, char c, unsigned int ibuf)
{
	if (ibuf == 1024)
	{
		print_buff(buf, ibuf)
			ibuf = 0;
	}
	buf[ibuf] = c;
	ibuf++;
	return (ibuf);
}
