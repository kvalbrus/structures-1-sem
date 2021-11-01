#include <stdio.h>

void f(int (*)[100], int y, int x);

int main()
{
    int y = 0, x = 0;
    int matrix[100][100] = {0};
    int i = 0, j = 0;

    puts("Enter size:");
    scanf("%d %d", &y, &x);

    puts("Enter matrix:");

    for(i = 0; i < y; i++)
    {
	for(j = 0; j < x; j++)
	{
	    scanf("%d", &matrix[i][j]);
	}
    }

    printf("\n\nMatrix:\n");
    
    for(i = 0; i < y; i++)
    {
	for(j = 0; j < x; j++)
	{
	    printf("%d ", matrix[i][j]);
	}
	puts("");
    }
    puts("");

    f(matrix, y, x);

    return 0;
}

void f(int (*matrix)[100], int y, int x)
{
    int i = 0, j = 0, a = 0;
    for(i = 0; i < y; i++)
    {
	for(j = i; j < x; j++)
	{
	    a = matrix[j][i];
	    matrix[j][i] = matrix[i][j];
	    matrix[i][j] = a;
	}
    }

    printf("\nTr.matrix:\n");
    for(i = 0; i < y; i++)
    {
	for(j = 0; j < x; j++)
	{
	    printf("%d ", matrix[i][j]);
	}
	puts("");
    }

    puts("");
}
