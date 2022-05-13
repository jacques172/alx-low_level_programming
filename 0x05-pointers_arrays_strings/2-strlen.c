#include "main.h"



/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{

int c = 0;
while(*s != '\0')
{
c++;
s++;
}
return (c); 
}	

