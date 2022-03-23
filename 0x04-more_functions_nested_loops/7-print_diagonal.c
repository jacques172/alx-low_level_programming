#include "main.h"
/**
*print_diagonal:- print n number of diagonal
*@n: the number of diagonal;
*Return: returns nothing
*/
void print_diagonal(int n)
{
  if (n <= 0)
  {
    _putchar('\n');
  }
  else
  { int diago;
  
    for (diago = 1; diago <= n; diago++)
    { 
      
      
      
        int space;
        for (space = 1; space <= diago - 1; space++)
        {
          _putchar(' ');
        }
        _putchar('\\');
        _putchar('\n');
      }


    
  }
}
