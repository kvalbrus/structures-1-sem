#include <stdio.h>

int main()
{
    int num[1000] = {};

    puts("Enter numbers:");
    
    int i;
    for(i = 0; (scanf("%d", &num[i])) == 1; i++) {}

    int j;
    for(j = 1; j < i; j++)
    {
	int k;
	for(k = j; k > 0 && num[k-1] > num[k]; k--)
	{
	    int a = num[k-1];
	    num[k-1] = num[k];
	    num[k] = a;
	}
    }

    int h;
    for(h = 0; h < i; h++)
    {
	printf("%d ", num[h]);
    }

    return 0;
}
