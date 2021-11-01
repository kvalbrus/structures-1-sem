#include <stdio.h>
#include <math.h>

int f(int c[1000], int n);

int main()
{
    FILE * file1 = fopen("11.txt", "r");
    FILE * file2 = fopen("11o.txt", "w");

    int c[1000] = {0}, i = 0, summ = 0;
    while(!feof(file1))
    {
	fscanf(file1, "%d", &c[i]);
	i++;
    }

    summ = f(c, sqrt(i));
    fprintf(file2, "%d", summ);
    printf("%d\n", summ);
}

int f(int c[1000], int n)
{
    int a[n][n], i = 0, j = 0, k = 0, summ = 0;

    for(i = 0; i < n; i++)
    {
	for(j = 0; j < n; j++, k++)
	{
	    a[i][j] = c[k];
	}
    }

    for(i = 0; i < n/2; i++)
    {
	for(j = i; j < n - i; j++)
	{
	    printf("%d ", a[i][j]);
	    summ += a[i][j];
	}
    }

    for(i = n - 1; i >= n/2; i--)
    {
	for(j = n - i - 1; j <= i; j++)
	{
	    printf("%d ", a[i][j]);
	    summ += a[i][j];
	}
    }

    return summ;
}
