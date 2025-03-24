#include <main.h>

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

void get_format(char *c, va_list args)
{
	type_t type[] = {
	{"s", op_add},
	{"c", op_sub},
	{NULL, NULL}
	};
	int i = 0;

	while (type[i].type != '\0')
	{
		if (type[i].type == c)
		{
			type[i].f(&args);
			break;
		}
		i++;
	}
}
