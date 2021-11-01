#include <stdio.h>

void determinant(int (*matrix)[100], int size, int * summ);
void obr(int (*matrix)[100], int y, int x, int size, int **b);

int main()
{
    int matrix[100][100], size = 0, i = 0, j = 0;
    int summ = 0;

    puts("Enter size matrix:");
    scanf("%d", &size);

    puts("Enter matrix");
    for(i = 0; i < size; i++)
    {
	for(j = 0; j < size; j++)
	{
	    scanf("%d", &matrix[i][j]);
	}
    }

    determinant(matrix, size, &summ);

    printf("%d\n", summ);

    return 0;
}

void determinant(int (*matrix)[100], int size, int * summ)
{
    int i = 0,j = 0;
    int m[100][100];

    if(size == 2)
    {
	puts("-------------");
	for(i = 0; i < 2; i++)
	{
	    for(j = 0; j < 2; j++)
	    {
		printf("%d ", matrix[i][j]);
	    }
	    puts("");
	}
	puts("-------------");
	*summ += (matrix[0][0]*matrix[1][1] - matrix[1][0]*matrix[0][1]);
    }
    else
    {
    	for(i = 0; i < size; i++)
	{
	    obr(matrix, 0, i, size, m);
	    determinant(m, size - 1, summ);
	}
    }
}

void obr(int (*matrix)[100], int y, int x, int size, int ** b)
{
   // int obres[size-1][size-1];
    int i = 0, ip = 0, j = 0, jp = 0;

    for(i = 0; i < size; i++)
    {
	jp = 0;
	if(i == y)
	{
	    ip = 1;
            continue;	    
	}

	for(j = 0; j < size; j++)
	{
	    if(j == x)
	    {
		jp = 1;
		continue;
	    }

	    b[i-ip][j-jp] = matrix[i][j];
	}
    }

    for(i = 0; i < size - 1; i++)
    {
	for(j = 0; j < size - 1; j++)
	{
	    printf("%d ", b[i][j]);
	}
	puts("");
    }

   // b = obres;
}
