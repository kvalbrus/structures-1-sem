#include <stdio.h>

void f(int (*)[100], int);

int main()
{
    int x = 0;
    int matrix[100][100] = {0};
    int i = 0, j = 0;

    puts("Enter size:");
    scanf("%d", &x);

    for(i = 0; i < x; i++)
    {
	for(j = 0; j < x; j++)
	{
	    matrix[i][j] = 1;
	}
    }

    f(matrix, x);
   
}

void f(int (*matrix)[100], int x)
{
    int s = 2, i = 0, j = 0, p = 3;

    for(i = 0; i < x - 3; i++, s++)
    {
	for(j = 0; j < s; j++)
	{
	    matrix[i][j] = 0;
	}
    }

    puts("\nMATRIX:\n:");

    for(i = 0; i < x; i++)
    {
	for(j = 0; j < x; j++)
	{
	    printf("%d ", matrix[i][j]);
	}

	puts("");
    }
}
