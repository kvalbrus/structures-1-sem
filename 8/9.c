#include <stdio.h>

void f(int (*)[100], int);

int main()
{
    int x = 0;
    int matrix[100][100] = {0};
    int i = 0, j = 0;

    puts("Enter size:");
    scanf("%d", &x);

    puts("Matrix:");
    for(i = 0; i < x; i++)
    {
	for(j = 0; j < x; j++)
	{
	    scanf("%d", &matrix[i][j]);
	}
    }

    f(matrix, x);

    return 0;
}

void f(int (*matrix)[100], int x)
{
    int p[x*x], size = x * x;

    int i = 0, j = 0, x1 = 0, y1 = 0, x2 = 0, y2 = 0, x3 = 0, y3 = 0, x4 = 0, y4 = 0, k = 0, g = 0;

    for(i = 0; i < x; i++)
    {
	p[i] = matrix[0][i];
    }

    for(k = x; k < size; g++)
    {
        x1 = x + g*(-1) - 1;
	y1 = g*1 + 1;

	x2 = x1 - 1;
	y2 = x2 + 1;

	x3 = g*1;
	y3 = y2 - 1;

	x4 = 1 + g*1;
	y4 = x4;

	for(; y1 <= y2; y1++)
	{
	    p[k++] = matrix[y1][x1];
	}

	if(k >= size) break;

	for(; x2 >= x3; x2--)
	{
	    p[k++] = matrix[y2][x2];
	}

	if(k >= size) break;

	for(; y3 >= y4; y3--)
	{
	    p[k++] = matrix[y3][x3];
	}

	if(k >= size) break;

	for(; x4 <= x + g*(-1) - 2; x4++)
	{
	    p[k++] = matrix[y4][x4];
	}
    }

    printf("\n\nMATRIX\n\n");
    for(i = 0; i < x; i++)
    {
	for(j = 0; j < x; j++)
	{
	    printf("%2d ", matrix[i][j]);
	}
	puts("");
    }

    printf("\n\nMASSIVE\n\n");
    for(i = 0; i < size; i++)
    {
	printf("%d ", p[i]);
    }

}
