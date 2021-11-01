#include <stdio.h>

int main()
{
    char a = 'a';

    for(;a <= 'z'; a++)
    {
	printf("%c - %d\n", a, a);
    }

    printf("%c\n", '1');

    return 0;
}
