#ifndef MAIN_H
#define MAIN_H

/**
 * main - Entry point
 *
 * Return: Always 0
 */

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include<stdio.h>


int _printf(const char *format, ...);
void tool_int(va_list note);
#endif