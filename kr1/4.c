#include <stdio.h>

int main()
{
    int a[100], i = 0, j = 0;

    for(i = 0; scanf("%d", &a[i]); i++);

    for(j = 0; j < (i + 1) / 2; j++)
    {
	if(a[j] % 2 == 0 || (a[j] % 2 == 1 && a[i-j - 1] % 2 == 1))
	{
	    printf("%d %d ", a[j], a[i-j - 1]);
	}
	else
	{
	    printf("%d %d ", a[i-j - 1], a[j]);
	}
    }

    return 0;
}
