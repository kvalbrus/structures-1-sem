#include <stdio.h>

int main()
{
    int x = 0, f = 0;

    printf("Enter x:\n");
    scanf("%d", &x);

    f = x > 0 ? 5 * x : 6 * x;

    printf("F(x) = %d\n", f);

    return 0;
}
