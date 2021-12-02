#include <stdio.h>

int main(int argc, char * argv[])
{
    FILE * file = fopen(argv[1], "r");
    char a[1000];
    int i = 0;
    
    while((a[i] = getc(file)) != EOF)
    {
        printf("%c", a[i]);
	i++;
    }

    return 0;
}
