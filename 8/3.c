#include <stdio.h>

void f(int (*)[100], int y, int x);

int main()
{
    int matrix[100][100] = {0};
    int x = 0, y = 0;
    int i = 0, j = 0;
    puts("Enter size matrix:");

    scanf("%d %d", &y, &x);

    printf("Enter matrix %d x %x:\n", y, x);
    for(i = 0; i < y; i++)
    {
	for(j = 0; j < x; j++)
	{
	    scanf("%d", &matrix[i][j]);
	}
    }

    printf("\n\nMATRIX:\n\n");
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
    int i = 0, j = 0, h = 0;
    int min = 1000;
    int minStr = 0, minSt = 0;
    int p = 1;
    for(i = 0; i < y; i++)
    {
	
	for(j = 0; j < x; j++)
	{
             if(matrix[i][j] < min)
	     {
		 min = matrix[i][j];
		 minSt = j;
		 minStr = i;
	     } 
	}

	p = 1;
	for(h = 0; h < y; h++)
	{
	    if(matrix[h][minSt] > min)
	    {
		p = 0;
	    }
	}

	if (p == 1)
	{
	    printf("sedl: %d\n", matrix[minStr][minSt]);
	}

	min = 1000;
    }
}
