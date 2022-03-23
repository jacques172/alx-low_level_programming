#include "main.h"
/**
*print_square: print squares
*@size: parameter representating the size of the square
*/
void print_square(int size)
{
  if (size <= 0)
  {
    _putchar('\n');

  }
  else
  { 
    int i;
    for (i = 1; i <= size; i++)
    { 
    _putchar('#');
    int j;
      for (j = 1; j <= size - 1; j++)
      {
      _putchar('#');
        
      }
      _putchar('\n');
      
    }
  }
}
