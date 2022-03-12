#include <stdio.h> 
/**
 * main: -Entry point
 *
 * Return: return 1(failure)
 */ 
int main() { 
static const char hello[] = "hello world\n"; 
fwrite(hello, sizeof(hello) - 1, 1, stdout); 
return (0);
} 

