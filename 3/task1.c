#include <stdio.h>

int main()
{
    int m = 0, n = 0, k = 0, *a, *b, *c;

    a = &m;
    b = &n;
    c = &k;

    printf("Enter a and b:\n");
    scanf("%d %d", a, b);
    
    *c = *a + *b;

    printf("a + b = %d\n", *c);
    
    return 0;
}

