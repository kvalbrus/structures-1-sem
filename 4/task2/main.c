#include <stdio.h>

#include "programm.h"

int a = 0;
int main()
{
    int b = 5, c = 3;
    a = b + c;

    printf("%d\n", a);

    f(b, c);
    printf("main f = %d    a = %d\n)", f(b, c), a);

    return 0;
}
