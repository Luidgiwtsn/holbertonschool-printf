#include <limits.h>  // Pour INT_MIN

int tool_int(va_list note)
{
    int n = va_arg(note, int);
    int i = 0, j, sign;
    char buffer[12];
    unsigned int u;

    sign = n < 0 ? -1 : 1;

    if (n == 0)
    {
        buffer[i++] = '0';
    }
    else
    {
        if (n == INT_MIN) 
        {
            u = (unsigned int)(INT_MAX) + 1; 
        }
        else
        {
            u = (unsigned int)(sign * n); 
        }

        while (u > 0)
        {
            buffer[i++] = (u % 10) + '0';
            u /= 10;
        }

        if (sign == -1)
            buffer[i++] = '-';
    }

    // Inverser le buffer
    for (j = 0; j < i / 2; j++)
    {
        char tmp = buffer[j];
        buffer[j] = buffer[i - 1 - j];
        buffer[i - 1 - j] = tmp;
    }

    write(1, buffer, i);
    return (i);
}
