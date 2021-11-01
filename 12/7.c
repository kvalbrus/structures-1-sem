#include <stdio.h>

int main()
{
    FILE * file = fopen("7.txt", "w+");

    long size = 0;

    int a[10] = {1,2,3,4,5,6,7,8,9,0};
    int b[10];
    int c[7];
    int i = 0;

    for(i = 0; i < 10; i++)
    {
	fprintf(file, "%d ", a[i]);
    }

    fseek(file, 0, SEEK_SET);

    for(i = 0; i < 10; i++)
    {
	fscanf(file, "%d ", &b[i]);
	printf("%d ", b[i]);
    }

    size = ftell(file);

    printf("\nbyte: %ld\n", size);

    fseek(file, 5, SEEK_SET);

    for(i = 0; i < 7; i++)
    {
	fscanf(file, "%d ", &c[i]);
	printf("%d ", c[i]);
    }
    

    fclose(file);

    return 0;
}
