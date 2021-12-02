#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100], c[100];
    int b1 = 0, i = 0, k = 0;
    
    puts("Enter s1, s2:");
    scanf("%s%*c%s", a, b);

    b1 = strlen(b);

    while(strstr(a,b))
    {
	strcpy(c, strstr(a,b) + b1);
	strcpy(strstr(a,b), c);
    }

    printf("%s\n", a);

    return 0;
}
