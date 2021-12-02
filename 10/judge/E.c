#include <stdio.h>

int main()
{
    int a = 0, a1 = 0, b = 0, b1 = 0;
    int c = 0, c1 = 0;

    scanf("%d:%d", &a, &a1);
    scanf("%d:%d", &b, &b1);

    c1 = (a1 + b1 >= 60 ? a1 + b1 - 60 : a1 + b1);

    if(a1 + b1 >= 60)
    {
        c++;
    }

    c = (c + a + b >= 24 ? a + b + c - 24 : a + b + c);

    if(c < 10 && c1 < 10)
    {
        printf("0%d:0%d", c, c1);
    }
    else if(c < 10)
    {
        printf("0%d:%d", c, c1);
    }
    else if(c1 < 10)
    {
        printf("%d:0%d", c, c1);
    }
    else
    {
        printf("%d:%d", c, c1);
    }

    return 0;
}
