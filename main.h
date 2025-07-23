#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct atlas - Structure that maps a format specifier
 *		  to its corresponding handler function.
 *@specifier: the format specifier character (e.g 'c', 's', 'd')
 *@handler: pointer to the function that handles the specifier
 */

typedef struct atlas
{
	char specifier;
	int (*handler)(va_list);
} atlas;

/**
 *_printf - Custom implementation of the printf function
 *@format: the format string to parse and print
 *
 *Return: the number of characters printed
 */
int _printf(const char *format, ...);

int tool_string(va_list note);
int tool_char(va_list note);
int tool_int(va_list note);

#endif
