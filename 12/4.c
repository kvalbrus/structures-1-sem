#include <stdio.h>

int main()
{
    FILE * file = fopen("4.txt", "r");

    char a[10];
    int i = 0;

    for(i = 0; i < 10; i++)
    {
	fscanf(file, "%c", &a[i]);
	printf("%c", a[i]);
    }

    fclose(file);

    return 0;
}
