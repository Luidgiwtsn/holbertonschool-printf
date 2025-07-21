#include "main.h"

/**
  *
  *
  *
  *
 */

int _printf(const char *format, ...)
{

va_list note;
va_start (note, format);

tool_string(note);
tool_char(note);

va_end(note);
return (0);
}
