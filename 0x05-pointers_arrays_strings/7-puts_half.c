#include "main.h"

void puts_half(char *str)
{
    int index =0, len =0;
    while(str[index++])
    {
        len++;
    }
    int i, k;
if(len % 2 == 0)
{
    for(i = len/2; i <= len - 1; i++)
    {
        putchar(str[i]);
    }
}
else
{
    for(i = (len - 1)/2; i <= len - 1; i++)
    {
        putchar(str[i]);
    }
}
    
}
