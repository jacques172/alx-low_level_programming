#include <stdio.h>
#include <ctype.h>
/**
 *main:- entry point
 *Return: return 0
 */

int main(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
for (i = 'a'; i <= 'z'; i++)
{
putchar(toupper(i));
}
putchar('\n');
return (0);
}
