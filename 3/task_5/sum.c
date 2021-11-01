#include <stdio.h>

int sum(int a1, int b1, int a2, int b2, int* im)
{
    *im = b1 + b2;

    return a1 + a2;
}
