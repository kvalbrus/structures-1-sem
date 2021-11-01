#include <stdio.h>

void f(int (*)[100], int);

int main()
{
    int x = 0;
    int matrix[100][100] = {0};

    puts("Enter matrix size:");
    scanf("%d", &x);

    f(matrix, x);

    return 0;
}

void f(int (*matrix)[100], int x)
{
    int k = 1, i = 0, j = 0;

    for(j = x/2, i = x - 1;;)
    {
	if (k == x + 1) break;

	matrix[i][j] = k++;

	if(matrix[(i+1)%x][(j+1)%x] != 0)
	{
	    if(matrix[(i-1)%x][j] != 0)
	    {
		break;
	    }

	    i = (i-1)%x;

	    matrix[i][j] = k++;
	}

	i = (i+1)%x;
	j = (j+1)%x;

	if(k > x * x) break;
    }

    puts("MATRIX:\n");
    for(i = 0; i < x; i++)
    {
	for(j = 0; j < x; j++)
	{
	    printf("%3d ", matrix[i][j]);
	}
	puts("");
    }
}
