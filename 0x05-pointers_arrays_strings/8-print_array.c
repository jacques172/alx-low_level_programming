#include "main.h"

    
void print_array(int *a, int n)
{
    // a[] = {1 , 3, 5, 6};
    for (int i = 0; i <= n - 1; i++ )
{   
    if (i != n -1)
    {
        printf("%d,", a[i]);
        printf(" ");
    }
    else
    {
        printf("%d", a[i]);
    }
}
}
