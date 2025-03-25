#include "main.h"

/**
 * print_decim - print a decimal (base 10) number.
 *
 * @args: the list of argument.
 *
 * Return: the length of character print.
 */

int print_decim(va_list args)
{
	int num, rev_num = 0, i;
	int count = 0;
	int length = 0;

	num = va_arg(args, int);
	if (num < 0)
	{
		_putchar('-');
		length++;
		num = num * -1;
	}
	while (num != 0)
	{
		count++;
		length++;
		rev_num = rev_num * 10 + (num % 10);
		num = num / 10;
	}
		for (i = 0 ; i < count ; i++)
		{
			_putchar((rev_num % 10) + 48);
			rev_num /= 10
		}
		return (length);
}
