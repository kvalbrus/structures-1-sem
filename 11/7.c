#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], c;

    scanf("%s%*c%c", a, &c);

    if(strchr(a,c))
    {
	a[strchr(a,c)-a] = '*';
    }

    if(strrchr(a,c))
    {
	a[strrchr(a,c)-a] = '*';
    }

    printf("%s\n", a);

    return 0;
}
