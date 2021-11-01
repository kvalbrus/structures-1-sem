#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];

    scanf("%s%*c%s", a, b);

    strcat(a, b);

    printf("%ld - %s\n", strlen(a), a);

    return 0;
}
