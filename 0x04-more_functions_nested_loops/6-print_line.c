#include "main.h"
/**
*print_line:- print line
*@n: parameter consisting of the number of line
*Return: return 0(success)
*/
void print_line(int n)
{
  if (n <= 0)
  {
    _putchar('\n');
  }
  else
  
  {int i;
    for(i = 1; i < n; i++ )
    {
      _putchar('_');
    }
  }
}
