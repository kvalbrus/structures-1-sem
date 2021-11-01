#include <stdio.h>

int main()
{
    int num[10000] = {0};

    puts("Enter numbers");
    int a = 0;
    while((scanf("%d", &a)) == 1) 
    {
	num[a - 1]++;
    }

    int j = 0;
    for(; j < 10000; j++)
    {
	if(num[j] == 1)
	{
	    printf("%d ", j + 1);
	}
    }

    return 0;
}
