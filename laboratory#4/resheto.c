#include <stdio.h>
int resheto(int n);
int main()
{
    int d = 0;
    scanf("%d", &d);
    printf("%d\n", resheto(d));

    return 0;
}

int resheto(int n)
{
    int i = 2;
    int j = 1;
    int k = 1;

    for(i = 2; j != n; i++)
    {
	for(k = 1; k < i; k++)
	{
	    if(k != 1 && i % k == 0 && i != k && i != 1)
	    {
		

		break;
	    }

	    j++;
	}
    }

    return i;
}
