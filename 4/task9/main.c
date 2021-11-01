#include <stdio.h>

int main()
{
    int i = ' ', j = ' ';

    for(i = 'F'; i >= 'A'; i--)
    {
        for(j = 'F'; j >= i; j--)
	{
            printf("%c", j);
	}

	printf("\n");
    }

    return 1;
}

