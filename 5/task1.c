#include <stdio.h>

int main()
{
    char symbol = 0;

    printf("Enter symbol:\n");
    scanf("%c", &symbol);

    if(symbol < 48)
    {
	printf("symbol\n");
    }

    else if(symbol < 58)
    {
	printf("number\n");
    }

    else
    {
	printf("letter\n");
    }

    return 0;
}
