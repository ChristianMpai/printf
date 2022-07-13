#include "main.h"
#include <stdio.h>

/**
 * pointer - prints the address of an input
 * variable in hexadecimal form.
 * @arguments: input address.
 * @buf: buffer pointer.
 * @ibuf: index for buffer pointer
 *
 * Return: number of chars printed.
 */
int pointer(va_list arguments, char *buf, unsigned int ibuf)
{
	void *add;
	long int int_input;
	int i, count, first_digit, isnegative;
	char *hexadecimal, *binary;
	char nill[] = "(nil)";

	add = (va_arg(arguments, void *));
	if (add == NULL)
	{
		for (i = 0; nill[i]; i++)
			ibuf = handle_buff(buf, nill[i], ibuf);
		return (5);
	}
	int_input = (intptr_t)add;
	isnegative = 0;
	if (int_input < 0)
	{
		int_input = (int_input * -1) - 1;
		isnegative = 1;
	}
	binary = malloc(sizeof(char) * (64 + 1));
	binary = binary_arr(binary, int_input, isnegative, 64);
	hexadecimal = malloc(sizeof(char) * (16 + 1));
	hexadecimal = hex_array(binary, hexadecimal, 0, 16);
	ibuf = handle_buff(buf, '0', ibuf);
	ibuf = handle_buff(buf, 'x', ibuf);
	for (first_digit = i = count = 0; hexadecimal[i]; i++)
	{
		if (hexadecimal[i] != '0' && first_digit == 0)
			first_digit = 1;
		if (first_digit)
		{
			ibuf = handle_buff(buf, hexadecimal[i], ibuf);
			count++;
		}
	}
	free(binary);
	free(hexadecimal);
	return (count + 2);
}
