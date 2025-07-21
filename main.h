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

#endif
