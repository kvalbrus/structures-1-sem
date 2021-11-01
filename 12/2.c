#include <stdio.h>

int main()
{
    FILE * file = fopen("2.txt", "r");
    int a[10] = {0}, i = 0;

    for(i = 0; i < 10; i++)
    {
	fscanf(file, "%d%*c", &a[i]);
    }

    for(i = 0; i < 10; i++)
    {
	printf("%d ", a[i]);
    }

    fclose(file);

    return 0;
}
