#include "main.h"

/**
 * print_char - that function print a char arguments
 *
 * @args: arguments list
 *
 * Return: 1
 */

int print_char(va_list args)
{
	int c;

	c = va_arg(args, int);
	_putchar(c);
	
	return (1);
}
