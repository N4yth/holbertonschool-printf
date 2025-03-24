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
	void (*f)(va_list *args);

} type_t;

int _putchar(char c);

int _printf(const char *format, ...);

void get_format(char *c, va_list args);

void print_char(va_list args);
void print_string(va_list args);


#endif
