#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    int b1 = 0, i = 0, k = 0;
    scanf("%s%*c%s", a, b);

    b1 = strlen(b);
    if(strstr(a, b))
    {
	k = strstr(a,b) - a;
	for(i = k; i < k + b1; i++)
	{
	    a[i] = ' ';
	}
    }

    puts(a);

    return 0;
}
