#include <stdio.h>
#include <stdlib.h>

int f(int * mas, int n);

int main()
{
    int * mas, * mas2, n = 0, i = 0;
    int k = 1, s = 0, a = 0, b = 0;

    scanf("%d", &n);
    mas = (int *) calloc(n, sizeof(int));
    mas2 = (int *) calloc(n, sizeof(int));
    
    mas2[0] = n - 1;
    

    for(i = 0; i < n; i++)
    {
	scanf("%d", &mas[i]);
    }
    
    s = mas[n - 1];

    for(i = n - 1, k = 1; i > 1; k++)
    {
	a = mas[i-1] + f(mas, i-1);
	b = mas[i-2] + f(mas, i-2);

	if(a > b)
	{
	    mas2[k] = i - 2;
	    i -= 2;
	    s += mas[i];
	}
	else
	{
	    mas2[k] = i - 1;
	    i -= 1;
	    s += mas[i];
	}
    }

    for(i = k - 1; i >= 0; i--)
    {
	printf("%d ", mas2[i]);
    }

    printf("\n%d\n", s);

    return 0;
}

int f(int * mas, int n)
{
    int x1 = 0, x2 = 0;

    if(n < 2)
    {
	return mas[n];
    }
    else
    {
        x1 = f(mas, n - 1) + mas[n - 1];
        x2 = f(mas, n - 2) + mas[n - 2];

        return x1 >= x2 ? x2 : x1;
    }
}
