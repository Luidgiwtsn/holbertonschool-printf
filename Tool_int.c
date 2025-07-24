#include "main.h"
#include <limits.h> // Pour INT_MIN

/**
* tool_int - Prints an integer from a va_list
* @note: va_list argument
* Return: number of characters printed
*/

int tool_int(va_list note)
{
	int n = va_arg(note, int);
	unsigned int num;
	int i = 0, j;
	char buffer[12];

	if (n < 0)
	{
		buffer[i++] = '-';

		if (n == INT_MIN)
			num = (unsigned int)(INT_MAX) + 1; // 2147483648
		else
			num = -n;
	}
	else
	{
		num = n;
	}

	// Stocker les chiffres à l'envers temporairement
	int start = i;

	if (num == 0)
	{
		buffer[i++] = '0';
	}
	else
	{
		while (num > 0)
		{
			buffer[i++] = (num % 10) + '0';
			num /= 10;
		}
	}

	// Inverser uniquement la partie numérique
	for (j = start; j < (start + i) / 2; j++)
	{
		char temp = buffer[j];
		buffer[j] = buffer[start + i - 1 - j];
		buffer[start + i - 1 - j] = temp;
	}

	write(1, buffer, i);
	return (i);
}
