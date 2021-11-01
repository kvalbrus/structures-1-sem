#include <stdio.h>

int f(int b, int c);

int f(int b, int c)
{
    extern int a;
    a = b - c;
    printf("%d - f()\n", a);
    
    return b + c;
}
