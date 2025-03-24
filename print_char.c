#include "main.h"

/**
 * print_char - that function print a char arguments
 *
 * *args: arguments list
 */

void print_char(va_list *args)
{
	int c;

	c = va_arg(args, char);
	_putchar(c)
}
