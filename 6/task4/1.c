#include <stdio.h>

int main()
{
    int num[100] = {0};

    printf("Enter number:\n");
    int i;
    for(i = 0; (scanf("%d",&num[i])) == 1; i++) {}

    num[i] = 0;

    while(1)
    {
	int p, j;
	for(j = 0, p = 1; j < i - 1; j++)
	{
	    if(num[j+1] < num[j])
	    {
		int a = num[j+1];
		num[j+1] = num[j];
		num[j] = a;
		p = 0;
		break;
	    }
	}
	
	if (p == 1) break;
    }

    int k;
    for(k = 0; k < i; k++)
    {
	printf("%d ", num[k]);
    }

    return 0;
}
