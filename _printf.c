#include "main.h"

/**
 * _printf - will print the first parameter with the other argument if they are
 * given
 *
 * @format: the string or the character to print with maybe the format of the
 * argument that will be also be print
 *
 * Return: the number of characters printed whit the null byte excluded
 */

int _printf(const char *format, ...)
{
	va_list args;
	unsigned int i = 0;
	int count_length = 0;

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] == '\0')
		{
			i++;
			count_length += get_format(format[i], args);
		}
		else if (format[i] == '%' && format[i + 1] == '\0')
		{
			return (-1);
		}
		else
		{
			_putchar(format[i]);
			count_length++;
		}
		i++;
	}
	va_end(args);
	return (count_length);
}
