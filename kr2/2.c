#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct line
{
    char * s1;
    char * s2;
    int m;
    int n;
} Line;

Line * f(Line * a);

int main()
{
    Line * lines = calloc(1, sizeof(Line));
    int i = 0, j = 0;
    char * s3;

    puts("Enter m");
    scanf("%d", &(lines -> m));
    lines -> s1 = (char *) calloc(lines -> m, sizeof(char));
    scanf("%s", lines -> s1);

    lines = f(lines);

    s3 = (char *) calloc(lines -> m > lines -> n ? lines -> m : lines -> n, sizeof(char));
    for(i = 0; i < lines -> m; i++)
    {
        if(strchr(lines -> s2, lines -> s1[i]))
	{
	    s3[j] = lines -> s1[i];
            j++;
	}
    }

    if(j == 0)
    {
        puts("NO");
    }
    else
    {
        printf("\n%s\n", s3);
    }

    return 0;
}

Line * f(Line * a)
{
    scanf("%d", &a -> n);
    a -> s2 = (char *) calloc(a -> n, sizeof(char));

    scanf("%s", a -> s2);

    return a;
}
