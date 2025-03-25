#include "main.h"

/**
 * print_string - That function to print a string arguments
 *
 * @args: arguments list
 *
 * Return: i
 */

int print_string(va_list args)
{
	char *str;
	int i;

	str = va_arg(args, char*);

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}
