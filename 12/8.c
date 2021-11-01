#include <stdio.h>

int main()
{
    FILE * file = fopen("8.txt", "a+");

    char a[5][20] = {"abc", "cde", "fgh", "cvb", "rty"};
    int i = 0;

    for(i = 0; i < 5; i++)
    {
	fprintf(file, "%s ", a[i]);
    }

    fseek(file, 0, SEEK_SET);

    while(!feof(file))
    {
	printf("%c", getc(file));
    }

    fclose(file);

    return 0;
}
