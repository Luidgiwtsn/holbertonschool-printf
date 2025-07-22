#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int _printf(const char *format,...)
{
    va_list note;
    va_start (note, format);

    tool_int(note);
    va_end(note);
return (0);
}

