#include <stdio.h>

int main()
{
    int num[100] = {0};

    printf("Enter numbers:\n");
    int i = 0, posl[20] = {0};

    for(; (scanf("%d", &num[i])) == 1; i++) {}
    num[i] = 0;

    int maxPosl = 1;
    int numPosl = 1;
    int indPosl = 0;

    int j, r;
    for(j = 1, r = num[1] - num[0]; j < i - 1; j++)
    {
	if(num[j] - num[j+1] == r)
	{
	    numPosl++;

	    if(numPosl > maxPosl)
	    {
		maxPosl = numPosl;
		indPosl = j - numPosl + 1;
	    }
	}
	else
	{
	    numPosl = 1;
	    if (j < i - 2)
	        r = num[j+1] - num[j+2];
	}
    }

    int p = indPosl;
    for(; p < maxPosl + indPosl + 1; p++)
    {
	printf("%d ", num[p]);
    }

    return 0;
}
