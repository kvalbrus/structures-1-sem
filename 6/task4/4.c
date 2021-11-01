#include <stdio.h>

int main()
{
    int num[1000] = {0};

    puts("Enter numbers");
    
    int i;
    for(i = 0; (scanf("%d", &num[i])) == 1; i++) {}
    num[i] = 0;

    int d = i / 2;

    for(; d > 0;)
    {
	int j;
	for(j = 0; j < d; j++)
	{
	    int k;
	    for(k = j; k < i; k += d)
	    {
	        if(num[k+d] < num[k])
		{
		    int a = num[k+d];
		    num[k+d] = num[k];
		    num[k] = a;
		}
	    }
            d /= 2;
	}

	if (d == 1) break;
    }

    int p = 0;
    for(; p < i; p++)
    {
	printf("%d ", num[p]);
    }


    return 0;
}
