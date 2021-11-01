#include <stdio.h>

void f(int (*matrix)[100], int y, int x);

int main()
{
    int a[100][100], i = 0, x = 0, y = 0;

    puts("Enter size matrix:");
    scanf("%d", &i);

    puts("Enter matrix:");

    for(y = 0; y < i; y++)
    {
	for(x = 0; x < i; x++)
	{
	    scanf("%d", &a[y][x]);
	}
    }

    f(a,y,x);

    return 0;
}

void f(int (*matrix)[100], int y, int x)
{
    int b[y], i = 0, j = 0, summ = 0;

    for(i = 0; i < y; i++)
    {
	for(j = 0; j < x; j++)
	{
	    summ += matrix[i][j];
	    summ += matrix[j][j];
	    summ += matrix[y-j-1][j];
	}

	b[i] = summ;
	summ = 0;
    }

    for(i = 0; i < y; i++)
    {
	printf("%d ", b[i]);
    }
}
