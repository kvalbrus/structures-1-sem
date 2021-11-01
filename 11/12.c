#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int main()
{
    char c[100], b;
    int summ[100] = {0}, s = 0;
    int i = 0, j = 0, sum = 0, uk = 0, k = 0;

    puts("Enter predlozhenie:");

    for(; scanf("%c", &b);)
    {
	if(b == '\n' || b == '\0')
	{	
	    break;
	}

	if(b == ' ')
	{
	    i++;
	    continue;
	}

	if(isdigit(b))
	{
	    printf("%d\n", b - 48);
	    summ[i] = summ[i] * 10;
	    summ[i] = summ[i] + (b - 48);   
	}
	else
	{
	    summ[i] = 0;
            
	    scanf("%c", &b);
            for(;!(b == '\0' || b == ' ' || b == '\n');)
	    {
		scanf("%c", &b);
	    }
            	    
	}
    }

    for(j = 0; j < i + 1; j++)
    {
	sum += summ[j];
    }

    printf("%d\n", sum);

    return 0;
}
