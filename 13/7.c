#include <stdio.h>
#include <math.h>

int det(int matrix[50][50], int size);
void m(int matrix[50][50], int mat[50][50], int x, int y, int size);

int main()
{
    int size = 0;
    int matrix[50][50];
    int x = 0, y = 0, d = 0;

    puts("Enter size matrix:");
    scanf("%d", &size);

    puts("Enter matrix");

    for(y = 0; y < size; y++)
    {
	for(x = 0; x < size; x++)
	{
	    scanf("%d", &matrix[y][x]);
	}
    }

    d = det(matrix, size);
    printf("det = %d\n", d);

    return 0;
}

int det(int matrix[50][50], int size)
{
    int i = 0;
    int summ = 0;
    int mat[50][50];
    if(size > 1)
    {
	for(i = 0; i < size; i++)
	{
	    
	    m(matrix, mat, 0, i, size);

	    summ += pow(- 1, i) * matrix[i][0] * det(mat, size - 1);
	}

	return summ;
    }

    return matrix[0][0];
}

void m(int matrix[50][50], int a[50][50], int x, int y, int size)
{
    int i = 0, j = 0;
    int k = 0, l = 0;

    for(j = 0; j < size; j++)
    {
        if(j == y)
	{
	    k = 1;
	    continue;
	}

	l = 0;

	for(i = 0; i < size; i++)
	{
	    if(i == x)
	    {
		l = 1;
		continue;
	    }

	    a[j-k][i-l] = matrix[j][i];
	}
    }
}
