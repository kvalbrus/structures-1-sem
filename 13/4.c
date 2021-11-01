#include <stdio.h>

int min(int a, int b);

int f(int a[], int b);

int main()
{
    int a[100] = {0}, i = 0, c = 0;
    for(i = 0; scanf("%d", &a[i]) == 1; i++) {}

    c = f(a,i);
    printf("%d\n", c);
}

int f(int a[], int b)
{
    if(b == 0) return a[0];

    return min(a[b-1], f(a,b-1));    
}

int min(int a, int b)
{
    return a > b ? b : a;
}
