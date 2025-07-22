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

atlas formats[] ={
{'c', tool_char},
{'s', tool_string},
{'d', tool_decimal},
{'i', tool_int},
};

va_end(note);

return (0);
}
