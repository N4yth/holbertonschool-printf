#include "main.h"

/**
 * print_binary - print a number in binary table
 *
 * @args: the list of argument where is the number
 *
 * Return: the number of character print
 */

int print_binary(va_list args)
{
	int lenght = 0;
	long int int_val;
	long int count_power = 0; /* the power number */
	long int power_two = 1; /* the result of to of the power count_power */

	int_val = va_arg(args, long int);

	if (int_val < 0)
	{
		int_val *= -1;
	}
	while (power_two <= int_val) /* found the power that higher than int_val */
	{
		power_two *= 2;
		count_power++;
	}
	count_power--; /* not necessary to test the 2 power higher than int_val */
	while (count_power >= 0)
	{
		if (power(2, count_power) > int_val)
		{
			_putchar(0 + '0');
		}
		else
		{
			_putchar(1 + '0');
			int_val = int_val - power(2, count_power);
		}
		lenght++;
		count_power--;
	}
	return (lenght);
}
