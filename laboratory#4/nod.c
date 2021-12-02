#include "lab.h"
#include <stdio.h>

int nod(int n, int n1)
{
    int i = 1;
    int max = 1;

    for(i = 1; i <= n && i <= n1; i++)
    {
	if(n % i == 0 && n1 % i == 0)
	{
	    max = i;
	}
    }

    return max;
}
