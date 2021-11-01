#include <stdio.h>

int min(int num1, int num2);

int sum(int num1, int num2);

int comp(int num1, int num2);

int main()
{
   int a = 0, b = 0, c = 0;

   a = min(5, 4);
   b = sum(5, 4);
   c = comp(5, 4);

   printf("num1 = 5, num2 = 4\n\n");

   printf("%d\n", a);
   printf("%d\n", b);
   printf("%d\n", c);

   return 0;
}

int min(int num1, int num2)
{
    return (num1 > num2) ? num2 : num1;
}

int sum(int num1, int num2)
{
    return num1 + num2;
}

int comp(int num1, int num2)
{
    return num1 * num2;
}
