#include <stdio.h>
#include <math.h>

int main()
{
    int a = 0, b = 0, z = 0, h = 0, h1 = 0, x = 0, y = 0;

    printf("Enter [a,b], step h, [z,..], step h1:\n");
    scanf("%d %d %d %d %d", &a, &b, &h, &z, &h1);

    for (x = a, y = z; x <= b; x+=h, y+=h1)
    {
        printf("x = %d, y = %d, sin(x+y) = %lf\n", x, y, sin(x + y));
    }

    return 1;
}
