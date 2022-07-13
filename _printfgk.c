#include "main.h"
/**
 * _printf - printf function
 * @format: const char pointer
 * Return: b_len
 */
int _printf(const char *format, ...)
{
	int (*pfunc)(va_list, flags_t *);
	const char *p;
	va_list arguments;
	flags_t flags = {0, 0, 0};

	register int count = 0;

	va_start(arguments, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (p = format; *p; p++)
	{
		if (*p == '%')
		{
<<<<<<< HEAD
			if (format[i + 1] == '\0')
			{	print_buffer(buffer, ibuf), free(buffer), va_end(arguments);
				return (-1);
			}
			else
			{	function = select_func(format, i + 1);
				if (function == NULL)
				{
					if (format[i + 1] == ' ' && !format[i + 2])
						return (-1);
					handle_buff(buffer, format[i], ibuf), len++, i--;
				}
				else
				{
					len += function(arguments, buffer, ibuf);
					i += print_function(format, i + 1);
				}
			} i++;
		}
		else
			handle_buff(buffer, format[i], ibuf), len++;
		for (ibuf = len; ibuf > 1024; ibuf -= 1024)
			;
	}
	print_buffer(buffer, ibuf), free(buffer), va_end(arguments);
	return (len);
=======
			p++;
			if (*p == '%')
			{
				count += _putchar('%');
				continue;
			}
			while (get_flag(*p, &flags))
				p++;
			pfunc = get_print(*p);
			count += (pfunc)
				? pfunc(arguments, &flags)
				: _printf("%%%c", *p);
		} else
			count += _putchar(*p);
	}
	_putchar(-1);
	va_end(arguments);
	return (count);
>>>>>>> refs/remotes/origin/main
}
