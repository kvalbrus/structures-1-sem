#include <stdio.h>

int main()
{
    int pr[10000] = {0};

    int i;
    for(i = 0; i < 10000; i++)
    {
	pr[i] = i;
    }

    int j;
    for(j = 0; j < 5000; j++)
    {
	if(pr[j] != 0 && pr[j] != 1)
	{
	    int h = j + 1;
	    for(; h < 10000; h++)
	    {
		if(pr[h] % pr[j] == 0)
		{
		    pr[h] = 0;
		}
	    }
	}
    }

    int k;
    for(k = 0; k < 10000; k++)
    {
	if (pr[k] != 0)
	printf("%d ", pr[k]);
    }

    return 0;
}

