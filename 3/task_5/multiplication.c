#include <stdio.h>

double multiplication(int a1, int b1, int a2, int b2, double* im)
{
    *im = a1 * b2 + a2 * b1;

    return a1 * a2 - b1 * b2;
}
