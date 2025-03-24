#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct type -  that struct
 *
 * @type: char that is the format for the function.
 * @f: the print function of the designed format.
 */
typedef struct type
{
	char type;
	void (*f)(va_list);

} type_t;

int _putchar(char c);

int _printf(const char *format, ...);

int get_format(const char c, va_list arg);

int print_char(va_list args);
int print_string(va_list args);


#endif
