#include <stdio.h>

int main()
{
    int num[1000] = {0};
    int i = 0, d = 0, j = 0, k = 0, a = 0;
    puts("Enter numbers");
    
    for(i = 0; (scanf("%d", &num[i])) == 1; i++) {}
    num[i] = 0;

    puts("Enter lenght:");
    scanf("%*c%d", &d);

    for(; d > 0; d /= 2)
    {
	for(j = d; j < i; ++j)
	{	    
	    for(k = j - d; k >= 0 && num[k] > num[k+d]; k -= d)
	    {
	        a = num[k];
		num[k] = num[k+d];
		num[k+d] = a;
	    }
	}
    }

    for(j = 0; j < i; j++)
    {
	printf("%d ", num[j]);
    }

    return 0;
}
