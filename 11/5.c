#include <stdio.h>

int main()
{
    char a[100], b[100];
    int i = 0;
    scanf("%s%*c%s", a, b);

    for(i = 1; i < 4; i++)
    {
	a[i + 3] = b[i];
    }

    printf("a - %s, b - %s\n", a, b);

    return 0;
}
