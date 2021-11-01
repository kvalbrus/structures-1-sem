#include <stdio.h>

#include "complex.h"

int main()
{
    struct compl c1 = {0, 0};
    struct compl c2 = {0, 0};

    printf("Enter z1 = a + i*b:\n");
    scanf("%d %d", &c1.Re, &c1.Im);

    printf("Enter z2 = a + i*b:\n");
    scanf("%d %d", &c2.Re, &c2.Im);

    struct compl c3 = {0, 0}; // plus
    struct compl c4 = {0, 0}; // minus
    struct compl c5 = del(c1, c2); // del
    struct compl c6 = umn(c1, c2); // umn

    plus(c1, c2, &c3);
    minus(c1, c2, &c4);

    printf("z1 + z2 = %d + %di\n", c3.Re, c3.Im);
    printf("z1 - z2 = %d + %di\n", c4.Re, c4.Im);
    printf("z1 * z2 = %d + %di\n", c5.Re, c5.Im);
    printf("z1 / z2 = %d + %di\n", c6.Re, c6.Im);

    return 0;
}
