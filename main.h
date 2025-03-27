#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdarg.h>

/**
 * struct type -  will stock the format/type of what we need to print
 * and the function the we will use to print this format/type
 *
 * @type: char that is the format for the function.
 * @f: the print function of the designed format.
 */
typedef struct type
{
	char type;
	int (*f)(va_list);

} type_t;

int _putchar(char c);

int _printf(const char *format, ...);

int get_format(const char c, va_list arg);

int print_char(va_list args);
int print_string(va_list args);
int print_int(va_list args);
int print_binary(va_list args);
int long power(int a, int b);

#endif
