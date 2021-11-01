#include <stdio.h>

int main()
{
    int num[1000] = {0};

    puts("Enter numbers");
    int i;

    for(i = 0; (scanf("%d", &num[i])) == 1; i++) {}
    num[i] = 0;

    int j, k;

    for(j = i - 1, k = i - 1; j >= 0; j--)
    {
	if(num[j] < 0)
	{
	    int y = num[i];

	    // передвижение символов
	    int h;
	    for(h = j; h < k; h++)
	    {
		int a = num[h];
		num[h] = num[h+1];
		num[h+1] = a;
	    }

	    k--;
	}
    }

    int l;
    for(l = 0; l < i; l++)
    {
	printf("%d ", num[l]);
    }

    return 0;
}
