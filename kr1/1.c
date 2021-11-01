#include <stdio.h>

int main()
{
    int x = 0, y = 0;

    puts("Enter x, y:");
    scanf("%d %d", &x, &y);

    if(y >= (x * x)-5 && y <= -(x*x) + 3 && y <= 2)
    {
	printf("YES\n");
    }
    else
    {
	printf("NO\n");
    }

    return 0;
}
