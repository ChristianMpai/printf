#include "main.h"

/**
 * print_s_null - writes string to stdout
 * @arguments: input string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: On success 1.
 */
int print_s_null(va_list arguments, char *buf, unsigned int ibuf)
{
	char *str;
	unsigned int i;
	char nill[] = "(null)";

	str = va_arg(arguments, char *);
	if (str == NULL)
	{
		for (i = 0; nill[i]; i++)
			ibuf = handle_buff(buf, nill[i], ibuf);
		return (6);
	}
	for (i = 0; str[i]; i++)
		ibuf = handle_buff(buf, str[i], ibuf);
	return (i);
}
