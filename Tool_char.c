#include "main.h"

/**
 *tool_char - Prints a single character from a variadic
 *	      argument list.
 *
 *@note: The va_list containing the arguments passed to
 *	 _printf.
 *
 *This function extracts the next argument as an int (since
 *chars are promoted to int in variadic functions), casts
 *it to a char, and writes it to stdout.
 *
 */

int tool_char(va_list note)
{
char c = va_arg(note, int);
write(1, &c, 1);
return 1;
}
