#include "main.h"

/**
 * print_function - returns number of identifiers.
 * @s: argument indentifier
 * @index: index of argument identifier.
 * Return: number of identifiers.
 */
int print_function(const char *s, int index)
{
	print_t pr[] = {
		{"c", print_cc}, {"s", print_s_null}, {"i", print_dec_int},
		{"d", print_dec_int}, {"b", print_binary}, {"u", print_uns_int},
		{"o", print_oct}, {"x", print_hex_low}, {"X", print_hex_up},
		{"S", print_string}, {"p", pointer}, {"li", long_int},
		{"ld", long_int}, {"lu", long_uns_int}, {"lo", long_oct},
		{"lx", long_hex}, {"lX", long_hex_up}, {"hi", short_int},
		{"hd", short_int}, {"hu", short_uns_int}, {"ho", short_oct},
		{"hx", short_hex}, {"hX", short_hex_up}, {"#o", num_oct},
		{"#x", num_hex}, {"#X", num_hex_up}, {"#i", print_dec_int},
		{"#d", print_dec_int}, {"#u", print_uns_int}, {"+i", plus_space_int},
		{"+d", plus_space_int}, {"+u", print_uns_int}, {"+o", print_oct},
		{"+x", print_hex_low}, {"+X", print_hex_up}, {" i", space_int},
		{" d", space_int}, {" u", print_uns_int}, {" o", print_oct},
		{" x", print_hex}, {" X", print_hex_up}, {"R", print_rot},
		{"r", print_rev}, {"%", print_c}, {"l", print_c},
		{"h", print_c}, {" +i", plus_space_int}, {" +d", plus_space_int},
		{"+ i", plus_space_int}, {"+ d", plus_space_int}, {" %", print_c},
		{NULL, NULL},
	};
	int i = 0, j = 0, first_index;

	first_index = index;
	while (pr[i].type_arg)
	{
		if (s[index] == pr[i].type_arg[j])
		{
			if (pr[i].type_arg[j + 1] != '\0')
				index++, j++;
			else
				break;
		}
		else
		{
			j = 0;
			i++;
			index = first_index;
		}
	}
	return (j);
}
