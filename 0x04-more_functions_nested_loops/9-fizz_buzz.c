#include "main.h"
/**
*numbers_and_words:- prints numbers and words
*Return: returns nothing
*/
void numbers_and_words(void)
{
  int i;
  for (i = 1; i <= 100; i++)
  {  
     if (i % 3 == 0 && i % 5 == 0)
    {
      printf("FizzBuzz");
      
    }
    else if (i % 3 == 0)
    {
      printf("Fizz");
      
    }
    else if (i % 5 == 0)
    {
      printf("Buzz");
      
    }
  
    else
    {
      printf("%d", i);
      
    }
   printf(" ");
  }
}
