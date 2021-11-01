#include <stdio.h>

int main()
{
    int num[10000] = {0};

    int i;
    for(i = 0; (scanf("%d", &num[i])) == 1; i++) {}

    num[i] = 0;

    int pN = 0, pP = 1, j = 0;
    for(; j < i - 1; j++)
    {
	if(num[j] < num[j + 1])
	{
	    pP *= (num[j + 1] - num[j]);
	}
	else
	{
	    pP = 0;
	    pN++;
	}
    }

    if(pP == 0)
    {
	printf("Posl ne upor, failed = %d\n", pN);
    }
    else
    {
	printf("Posl upor, proizvedenie = %d\n", pP);
    }

    return 0;
}
