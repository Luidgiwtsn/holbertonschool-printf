#include "main.h"
/** 
*tool_int - Prints a single int from variadic arguments liste.
*
*@note: the va_list containing the arguments passed to _printf.
*
*/
void tool_int(va_list note)
{
    int n = va_arg(note, int);
    int i = 0;
    int sign;
    int j;
    char buffer[12];
    
    sign = n < 0 ? -1 : 1;
    
    if (n == 0)
    buffer[i++] = '0';

    else

    {
        if (sign == -1)
            n = -n;
        
        while (n > 0)

        {
            buffer[i++] = (n % 10) + '0';
            n /=10;
        }
    
        if (sign == -1)
            buffer[i++] = '-';
    }

    
    for (j = 0; j < i / 2; j++)
    
    {
        char c = buffer[j];
        buffer[j] = buffer[i - 1 - j];
        buffer[i - 1 - j] = c;   

    }

    write(1, buffer, i);

}