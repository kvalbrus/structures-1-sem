#include <stdio.h>

int main(int argc, char * argv[])
{
    FILE * file = fopen(argv[1], "r");
    char a[1000];
    int i = 0;
    
    while(!feof(file))
    {
	fscanf(file, "%c", &a[i]);
	printf("%c", a[i]);
	i++;
    }

    return 0;

}
