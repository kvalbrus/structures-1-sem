#include <stdio.h>

void f(int (*)[100], int (*)[100], int, int, int, int);

int main()
{
    int matrix1[100][100] = {0};
    int matrix2[100][100] = {0};
    int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
    int i = 0, j = 0;

    puts("Enter size MATRIX #1:");
    scanf("%d %d", &y1, &x1);

    printf("Enter MATRIX #1 %dx%d:\n", y1, x1);

    for(i = 0; i < y1; i++)
    {
	for(j = 0; j < x1; j++)
	{
	    scanf("%d", &matrix1[i][j]);
	}
    }

    puts("Enter size MATRIX #2:");
    scanf("%d %d", &y2, &x2);

    printf("Enter MATRIX #2 %dx%d:\n", y2, x2);

    for(i = 0; i < y2; i++)
    {
	for(j = 0; j < x2; j++)
	{
	    scanf("%d", &matrix2[i][j]);
	}
    }

    if(x1 != y2)
    {
	printf("\nERROR!\n");
	return 0;
    }

    f(matrix1, matrix2, y1, x1, y2, x2);

    return 0;
}

void f(int (*matrix1)[100], int (*matrix2)[100], int y1, int x1, int y2, int x2)
{
    int matrix[100][100] = {0};

    int i = 0, j = 0, r = 0, summ = 0;

    puts("");
    for(i = 0; i < y1; i++)
    {
	for(j = 0; j < x1; j++)
	{
	    printf("%d ", matrix1[i][j]);
	}
	puts("");
    }
    puts("");

    puts("");
    for(i = 0; i < y2; i++)
    {
        for(j = 0; j < x2; j++)
	{
	    printf("%d ", matrix2[i][j]);
	}
	puts("");
    }
    puts("");

    for(i = 0; i < y1; i++)
    {
	for(j = 0; j < x2; j++)
	{
	    for(summ = 0, r = 0; r < x1; r++)
	    {
		summ += (matrix1[i][r]*matrix2[r][j]);
	    }
	    matrix[i][j] = summ;
	}
    }

    printf("\nMATRIX #1 x MATRIX #2\n\n");
    for(i = 0; i < y1; i++)
    {
	for(j = 0; j < x2; j++)
	{
	    printf("%4d ", matrix[i][j]);
	}
	puts("");
    }
}
