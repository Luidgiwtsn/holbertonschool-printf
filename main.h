#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * Here are the different prototypes ans librairies for
 * our _printf function.
 *
 * Allowed functions :
 * - write
 * - malloc
 * - free
 * va_start, va_end, va_copy, va-arg
 */

int _printf(const char *format, ...);
void tool_string(va_list note);
void tool_char(va_list note);

typedef struct atlas{
char specifier;
void (*handler)(va_list);
}atlas;

#endif
