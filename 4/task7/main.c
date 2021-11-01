#include <stdio.h>

int main()
{
    int a = 1, b = 2;

    for(; b < 15; b++)
    {
	
        printf("%d\n", 9*a + b);
	a = a*10 + b;
    }

    return 0;
}
