#include <stdio.h>

int f(int a, int b);

int f(int a, int b)
{
    int t = 1;
    static int p = 1;
    printf("\nt = %u p = %u", ++t, p++);
    
    return a + b;    
}
