#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
    int summ = 0, i = 0;

    for(i = 1; i < argc; i++)
    {
	summ += atoi(argv[i]);
    }

    printf("%d\n", summ);

    return 0;
}
