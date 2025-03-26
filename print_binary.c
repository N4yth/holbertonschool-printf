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
	int rest = 0, lenght = 0;
	long int int_val, count_power = 0, power_two = 1;

	int_val = va_arg(args, long int);

	if (int_val < 0)
	{
		int_val *= -1;
	}
	if (int_val % 2 != 0)
	{
		int_val -= 1;
		rest = 1;
	}
	while (power_two <= int_val)
	{
		power_two *= 2;
		count_power++;
	}
	count_power--;
	while (count_power > 0)
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
	_putchar(rest + '0');
	lenght++;
	return (lenght);
}
