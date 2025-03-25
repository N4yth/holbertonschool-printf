#include "main.h"

/**
 * get_format - the function found the right function to use
 * according to the format given
 *
 * @c: the format wanted
 * @args: the list of argument that we send to the function
 * for print this argument
 *
 * Return: Nothing
 */

int get_format(const char c, va_list args)
{
	type_t type[] = {
	{'s', print_string},
	{'c', print_char},
	{'i', print_int},
	{'d', print_decim},
	{'\0', NULL}
	};
	int i = 0;

	while (type[i].type != '\0')
	{
		if (type[i].type == c)
		{
			return (type[i].f(args));
		}
		i++;
	}
	_putchar('%');
	if (c != '%')
	{
		_putchar(c);
		return (2);
	}
	return (1);
}
