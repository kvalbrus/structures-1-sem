#include <stdio.h>
#include <stdlib.h>

int main(int argv, char * argc[])
{
    FILE * file = fopen(argc[1], "r");

}

void f(FILE * file)
{
    int x = 0, y = 0, i = 0, j = 0;
    int ** matrix;

    fscanf(file, "%d%d", &y, &x);

    matrix = (int **) calloc(y, sizeof(int *));
    for(i = 0; i < y; i++)
    {
	*(matrix + i) = (int *) calloc(x, sizeof(int));
    }

    for(i = 0; i < y; i++)
    {
	for(j = 0; j < x; j++)
	{
	    fscanf(file, "%d", *(matrix + x*i) + j);
	}
    }

}
