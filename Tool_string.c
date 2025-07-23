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

int tool_string(va_list note)
{
int len = 0;
char *s = va_arg(note, char *);

if (s == NULL)
	{
	s = "(null)";
	}
while (s[len] != '\0')
	{
	len++;
	}
write(1, s, len);
return len;
}
