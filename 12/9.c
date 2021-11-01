#include <stdio.h>

int main()
{
    int a[20][5], i = 0, j = 0;
    int b[20][2];

    FILE * file;
    FILE * file1;

    for(i = 0; i < 20; i++)
    {
	for(j = 0; j < 5; j++)
	{
	    a[i][j] = i*2 + j*4;
	}
    }

    for(i = 0; i < 20; i++)
    {
	for(j = 0; j < 5; j++)
	{
	    printf("%2d ", a[i][j]);
	}
	puts("");
    }

    file = fopen("9.txt", "w+");

    for(i = 0; i < 20; i++)
    {
	for(j = 0; j < 5; j++)
	{
	    fprintf(file, "%d ", a[i][j]);
	}

	fprintf(file,"\n");
    }

    fseek(file, 0, SEEK_SET);

    for(i = 0; i < 20; i++)
    {
	fscanf(file, "%*d%d%*d%d%*d", &b[i][0], &b[i][1]);
    }

    file1 = fopen("9o.txt", "w");

    for(i = 0; i < 20; i++)
    {
	for(j = 0; j < 2; j++)
	{
	    fprintf(file1, "%d ", b[i][j]);
	}

	fprintf(file1,"\n");
    }

    for(i = 0; i < 20; i++)
    {
	for(j = 0; j < 2; j++)
	{
	    printf("%2d ", b[i][j]);
	}
	puts("");
    }

    fclose(file);
    fclose(file1);

    return 0;
}
