#include <stdio.h>

void f(int (*)[100], int);

int main()
{
    int x = 0;
    int matrix[100][100] = {0};
    int i = 0, j = 0;

    puts("Enter size:");
    scanf("%d", &x);

    printf("Enter matrix %dx%d:\n", x, x);

    for(i = 0; i < x; i++)
    {
	for(j = 0; j < x; j++)
	{
	    scanf("%d", &matrix[i][j]);
	}
    }

    puts("");
    for(i = 0; i < x; i++)
    {
	for(j = 0; j < x; j++)
	{
	    printf("%d ", matrix[i][j]);
	}
	puts("");
    }
    puts("");

    f(matrix, x);
}

void f(int (*matrix)[100], int x)
{
    int i = 0, j = 0, a = 0;
    for(i = 0; i < (x - 1) / 2; i++)
    {
        a = matrix[i][i];
	matrix[i][i] = matrix[x - 1 - i][x - 1 - i];
	matrix[x - 1 - i][x - 1 - i] = a;
    }

    for(i = x - 1, j = 0; i > (x - 1) / 2; i--, j++)
    {
	a = matrix[i][j];
	matrix[i][j] = matrix[j][i];
	matrix[j][i] = a;
    }


    printf("\nDiagonal Matrix:\n\n");
    for(i = 0; i < x; i++)
    {
	for(j = 0; j < x; j++)
	{
	    printf("%d ", matrix[i][j]);
	}
	puts("");
    }
}
