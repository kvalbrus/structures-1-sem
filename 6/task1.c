#include <stdio.h>

int main()
{
    int num[1000] = {0}, i = 0;

    puts("Enter numbers:");
    
    for(; (scanf("%d", &num[i])) == 1; i++) {}

    int min = 10000000, max = -1000000;
    int indMin = 0, indMax = 0;

    int j;
    for(j = 0; j < i; j++)
    {
	if(num[j] > max)
	{
	    indMax = j;
	    max = num[j];
	}

	if(num[j] < min)
	{
	    indMin = j;
	    min = num[j];
	}
    }

    int a = num[indMin];
    num[indMin] = num[indMax];
    num[indMax] = a;

    int k;
    for(k = 0; k < i; k++)
    {
	printf("%d ", num[k]);
    }

    return 0;
}
