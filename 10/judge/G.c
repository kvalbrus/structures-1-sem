#include <stdio.h>

int main()
{
    double x = 0, y = 0;
    scanf("%lf %lf", &x, &y);

    if(x*x + 1 < y || -x*x - 2 > y)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
