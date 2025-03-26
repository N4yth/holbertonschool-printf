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
	unsigned int val, val_count, ten_count = 1;
	int val_start;
	int length = 0; /* the length of all printed character */

	val_start = va_arg(args, int);
	if (val_start < 0)
	{
		_putchar('-');
		length++;
		val = val_start * -1;/*set val_strat to positif and unsigned*/
	}
	else
	{
		val = val_start; /* set the start value to unsigned */
	}
	val_count = val;/*copy the val and use this copy as a count variable*/
	while (val_count > 9) /*use the first counter to make a tens counter*/
	{
		val_count /= 10;
		ten_count = ten_count * 10; /* count up */
	}
	while (ten_count >= 1)
	{
		length += _putchar(((val / ten_count) % 10) + '0');
		ten_count /= 10; /* count down */
	}
	return (length);
}
