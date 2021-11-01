#include <stdio.h>

int sum(int num1, int num2);

int main()
{
    int a = 0, b = 0, *num1, *num2;
    
    num1 = &a;
    num2 = &b;

    printf("Enter num1, num2:\n");
    scanf("%d %d", num1, num2);

    sum(*num1, *num2);
    printf("num1 = %p, num2 = %p\n", num1, num2);

    return 0;
}

int sum(int num1, int num2)
{
    printf("num1 = %p, num2 = %p\n", &num1, &num2);

    return num1 + num2;
}
