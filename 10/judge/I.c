#include <stdio.h>

int main()
{
    double x = 0, y = 0;
    scanf("%lf %lf", &x, &y);

    if((-3 + x * x < y && y > 2) || (-3 + x * x > y && y < 2))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
