#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char a[300], c;
    int j = 0, i = 0;
    while((c = getchar()) != '#')
    {
	a[j] = c;
	j++;
    }

    for(i = 0; i < j - 1; i++)
    {
	a[0] = toupper(a[0]);
	
	if(a[i] == '\n')
	{
	    a[i + 1] = toupper(a[i + 1]);
	}
    }

    printf("%s\n", a);

    return 0;
}
