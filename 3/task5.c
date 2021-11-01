#include <stdio.h>

void f(int* a, int* b);

int main()
{
    int num1 = 0, num2 = 0, *a, *b;

    a = &num1;
    b = &num2;

    printf("Enter a, b:\n");
    scanf("%d %d", a, b);

    f(a, b);

    printf("sum = %d, difference = %d\n", *a, *b);

    return 0;
}

void f(int* a, int* b)
{
    int sum = 0, difference = 0;

    sum = *a + *b;
    difference = *a - *b;

    *a = sum;
    *b = difference;
    return;
}
