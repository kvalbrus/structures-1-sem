#include <stdio.h>

int main()
{
    static a = 0;

    a++;
}

int f()
{
    printf("%d\n", a);

    return 1;
}
