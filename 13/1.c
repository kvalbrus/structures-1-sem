#include <stdio.h>

int f(int a);

int main()
{
    int a = 0, b = 0;
    scanf("%d", &a);

    b = f(a);
    printf("%d\n", b);
}

int f(int a)
{
    if(a == 1) return 1;
    
    return a * f(a - 1);
}
