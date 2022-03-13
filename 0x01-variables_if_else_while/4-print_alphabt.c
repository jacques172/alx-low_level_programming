#include <stdio.h>
#include <ctype.h>
/**
 *main:- entry point
 *Return: return 0
*/

int main()
{
char i;
for (i='a'; i <= 'z'; i++)
{
if (i == 'e')
continue;
else if (i == 'q')
continue;
putchar(i);
}
putchar('\n');
return (0);
}
