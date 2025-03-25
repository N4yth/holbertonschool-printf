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
	int val, rev_val = 0, i;
	int count = 0; /* the number of number to print (without: -) */
	int length = 0; /* the length of all printed character */

	val = va_arg(args, int);
	if (val < 0)
	{
		_putchar('-');
		length++;
		val = val * -1;
	}
	else if (val == 0)
	{
		_putchar('0');
		return (1);
	}
	while (val != 0) /* reverse the val to easly print */
	{
		count++;
		length++;
		rev_val = rev_val * 10 + (val % 10);
		val = val / 10;
	}
	for (i = 0 ; i < count ; i++)
	{
		_putchar((rev_val % 10) + 48);
		rev_val /= 10;
	}
	return (length);
}
