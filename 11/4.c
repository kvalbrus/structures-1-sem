#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];

    scanf("%s%*c%s", a, b);
    if (!strncmp(a, b ,3)) puts("YES");
    else puts("NO");

    return 0;
}
