#include <stdio.h>

void f(int(*matrix)[], int y, int x);

int main()
{
    int matrix[100][100];
    int x = 0, y = 0, i = 0, j = 0;
    puts("Enter size matrix:");
    scanf("%d %d", &y, &x);

    puts("Enter matrix:");
    for(i = 0; i < y; i++)
    {
	for(j = 0; j < x; j++)
	{
	    scanf("%d", &matrix[i][j]);
	}
    }

    f(matrix, y, x);

    return 0;
}

void f(int(*matrix)[100], int y, int x)
{
    int v[y/2][x/2];
    int i = 0, j = 0;

    for(i = 0; i < y/2; i++)
    {
	for(j = 0; j < x/2; j++)
	{
	    v[i][j] = matrix[i][j];
	}
    }

    for(i = 0; i < y/2; i++)
    {
	for(j = 0; j < x/2; j++)
	{
	    matrix[i][j] = matrix[i+y/2+y%2][j];
	}
    }

    for(i = 0; i < y/2; i++)
    {
	for(j = 0; j < x/2; j++)
	{
	    matrix[i+y/2+y%2][j] = matrix[i+y/2+y%2][j+x/2+x%2];
	}
    }

    for(i = 0; i < y/2; i++)
    {
	for(j = 0; j < x/2; j++)
	{
	    matrix[i+y/2+y%2][j+x/2+x%2] = matrix[i][j+x/2+x%2];
	}
    }

    for(i = 0; i < y/2; i++)
    {
	for(j = 0; j < x/2; j++)
	{
	    matrix[i][j+x/2+x%2] = v[i][j];
	}
    }

    puts("");
    for(i = 0; i < y; i++)
    {
	for(j = 0; j < x; j++)
	{
	    printf("%d ", matrix[i][j]);
	}
	puts("");
    }
}
