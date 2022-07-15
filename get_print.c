#include "main.h"
/**
 * get_print - selects the correct function to perform the operation.
 * @s: argument indentifier
 * @index: index for argument indentifier
 * Return: pointer to a function.
 */
int (*get_print(const char *s, int index))(va_list, char *, unsigned int)
{
	print_t pr[] = {
		{"i", print_int}, {"d", print_int},
		{"b", print_binary}, {"u", print_unt},
		{"o", print_oct}, {"x", print_hex},
		{"X", print_upx}, {"S", print_vstr},
		{"p", print_add}, {"li", prinlint},
		{"ld", prinlint}, {"lu", prinlunt},
		{"lo", prinloct}, {"lx", prinlhex},
		{"lX", prinlupx}, {"hi", prinhint},
		{"hd", prinhint}, {"hu", prinhunt},
		{"ho", prinhoct}, {"hx", prinhhex},
		{"hX", prinhupx}, {"#o", prinnoct},
		{"#x", prinnhex}, {"#X", prinnupx},
		{"#i", print_int}, {"#d", print_int},
		{"#u", print_unt}, {"+i", prinpint},
		
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
	return (pr[i].f);
}
