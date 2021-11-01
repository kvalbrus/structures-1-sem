#include <stdio.h>

#include "complex.h"

int main()
{
    int a1 = 0, a2 = 0, b1 = 0, b2 = 0;
    int sumRe = 0, sumIm = 0, diffRe = 0, diffIm = 0;
    double multRe = 0, multIm = 0, divRe = 0, divIm = 0;

    printf("a + bi\n");
    printf("Enter a1, b1, a2, b2:\n");
    scanf("%d %d %d %d", &a1, &b1, &a2, &b2);

    sumRe = sum(a1, b1, a2, b2, &sumIm);
    diffRe = difference(a1, b1, a2, b2, &diffIm);
    multRe = multiplication(a1, b1, a2, b2, &multIm);
    divRe = division(a1, b1, a2, b2, &divIm);

    printf("z1 + z2 = (%d + %di) + (%d + %di) = %d + %di\n", a1, b1, a2, b2, sumRe, sumIm);
    printf("z1 - z2 = (%d + %di) - (%d + %di) = %d + %di\n", a1, b1, a2, b2, diffRe, diffIm);
    printf("z1 * z2 = (%d + %di) * (%d + %di) = %.2lf + %.2lfi\n", a1, b1, a2, b2, multRe, multIm);
    printf("z1 / z2 = (%d + %di) / (%d + %di) = %.2lf + %.2lfi\n", a1, b1, a2, b2, divRe, divIm);


    return 0;
}
