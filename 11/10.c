#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    int i = 0;

    scanf("%s", a);

    for(i = 0; i < strlen(a); i++)
    {
	if(a[i] != '0')
	{
	    a[i] = a[i] + 48;
	}
    }

    printf("%s\n", a);

    return 0;
}
