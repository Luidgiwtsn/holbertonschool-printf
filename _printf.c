#include "main.h"

/**
  *_printf - Custom implementation of the standard printf function
  *@format: The format string containing conversion specifiers
  *
  *Return: The total number of characters printed
 */

int _printf(const char *format, ...)
{
va_list note;
atlas formats[] = {
{'c', tool_char},
{'s', tool_string},
{'d', tool_int},
{'i', tool_int},
};

int a = 0, i, count = 0, found = 0;
int size = sizeof(formats) / sizeof(formats[0]);
char buff[2], c = '%';

va_start(note, format);

while (format[a] != '\0')
	{
	if (format[a] == '%' && format[a + 1] != '\0')
		{
		if (format[a + 1] == '%')
			{
			write(1, &c, 1);
			count++;
			a += 2;
			continue;
			}
		found = 0;
		for (i = 0; i < size; i++)
			{
			if (format[a + 1] == formats[i].specifier)
				{
				count += formats[i].handler(note);
				found = 1;
				break;
				}
			}
			if (!found)
				{
				buf[0] = '%';
				buf[1] = format[a + 1];
				write(1, buf, 2);
				count += 2;
				}
			a += 2;
		}
		else
			{
			write(1, &format[a], 1);
			count++;
			a++;
			}
	}
va_end(note);
return (count);
}
