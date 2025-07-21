#include "main.h"

/**
  *tool_string - Prints a string from a variadic argument list.
  *@note: The va-list containing the arguments passed to _printf.
  *
  *This function retrieves the next argument as a char pointeur (string).
  *If the string is NULL, it prints "(null)" instead.
  *Otherwise, it writes the string to the standard output using write ().
  *
 */

void tool_string(va_list note)
{
unsigned int count = 0;
unsigned int ptr = 0;

char *s = va_arg(note, char *);

if (s == NULL)
{
write(1, "(null)", 6);
}
else
{
while (s[ptr] != '\0')
	{
	count++;
	ptr++;
	}
write(1, s, count);
}
}
