#include <stdio.h>

void f(int (*)[5]);

int main()
{
    int matrix[4][5] = {{1,  2,  6,  12, 0},
	                {10, 20, 30, 40, 1},
		        {35, 2,  3,  2,  1},
		        {12, 85, 99, 3, 1}};

    f(matrix);
    return 0;  
}

void f(int (*matrix)[5])
{
    int min = 1000, max = -1000, minS = 0, maxS = 0;
    int i = 0, j = 0, g = 0;

    for(i = 0; i < 4; i++)
    {
	for(j = 0; j < 5; j++)
	{
	    printf("%d ", matrix[i][j]);
	}
	puts("");
    }
    puts("");

    for(i = 0; i < 4; i++)
    {
	for(j = 0; j < 5; j++)
	{
	    if(matrix[i][j] > max)
	    {
		maxS = i;
		max = matrix[i][j];
		
	    }

	    if(matrix[i][j] < min)
	    {
		minS = i;
		min = matrix[i][j];
		
	    }
	}
    }

    for(g = 0; g < 5; g++)
    {
	int a = matrix[minS][g];
	matrix[minS][g] = matrix[maxS][g];
	matrix[maxS][g] = a;
    }

    for(i = 0; i < 4; i++)
    {
	for(j = 0; j < 5; j++)
	{
	    printf("%d ", matrix[i][j]);
	}
	puts("");
    }

}
