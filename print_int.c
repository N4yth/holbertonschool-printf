#include "main.h"

/**
 * print_int - print a int arguments
 *
 * @args: the list of argument
 *
 * Return: the length of character print
 */

int print_int(va_list args)
{
	unsigned int val, val_count, count = 1;
	int val_start;
	int length = 0; /* the length of all printed character */

	val_start = va_arg(args, int);
	if (val_start < 0)
	{
		_putchar('-');
		length++;
		val = val_start * -1;
	}
	else if (val_start == 0)
	{
		_putchar('0');
		return (1);
	}
	else
	{
		val = val_start; /* set the start value to unsigned */
	}
	val_count = val;
	while (val_count > 9)
	{
		val_count /= 10;
		count = count * 10;
	}
	while (count >= 1)
	{
		length += _putchar(((val / count) % 10) + '0');
		count /= 10;
	}
	return (length);
}
