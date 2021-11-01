#include <stdio.h>

int main()
{
    char a1[100], a2[100], a3[100], b1, b2;
   // scanf("%s%*c%c", a1, &b1);
   // printf("%s %c\n", a1, b1);

    fgets(a2, 99, stdin);
    puts(a2);

    b1 = getchar();
    putchar(b1);

    return 0;
}
