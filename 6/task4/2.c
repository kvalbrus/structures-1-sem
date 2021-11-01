#include <stdio.h>

int main()
{
    int num[1000] = {0};

    puts("Enter numbers:");

    int i = 0;
    for(; (scanf("%d", &num[i])) == 1; i++) {}
    num[i] = 0;

    int j;
    for(j = i; j > 0; j--)
    {
	int k, max;
	for(k = 0, max = 0; k < j; k++)
	{
	    if (k == j - 1 && num[max] > num[k])
	    {
		int a = num[max];
		num[max] = num[k];
		num[k] = a;
		break;
	    }
	    if (num[max] < num[k]) 
	    {
		max = k;
	    }
	}
    }

    int h;
    for(h = 0; h < i; h++)
    {
	printf("%d ", num[h]);
    }

    return 0;
}
