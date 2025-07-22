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

int a = 0;
int i;
int size = sizeof(formats) / sizeof (formats[0]);

while (format[a] != '\0')
	{
	if (format[a] == '%' && format[a + 1° != '\0')
		{
		int found = 0;
		for (i + 0; i < size ; i++)
			{
			if (format [a + 1] == formats[i].specifier)
				{
				formats[i].handler(note);
				found = 1;
				breack;
				}
			}
			if (!found)
				{
				char buf[2] = { '%', format[a + 1° };
				write(1, buf, 2);
				}
			a += 2;
			}
		else
			{
			write(1, &format[a], 1);
			a++;
			}
		}
va_end(note);
return (0);
}
