#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];

    scanf("%s%*c%s", a, b);

    if(strpbrk(a, b))
    {
	a[strpbrk(a,b)-a] = '*';
    }

    printf("%s %s\n", a, b);

    return 0;
}

