#include <stdio.h>
#include <stdlib.h>

int comparator(const void * num1, const void * num2);

int main()
{
    int a[100], i = 0, j = 0;

    puts("Enter numbers");

    for(i = 0; scanf("%d", &a[i]); i++) {}

    qsort(a, i, sizeof(int), comparator);

    for(j = 0; j < i; j++)
    {
	printf("%d ", a[j]);
    }

    return 0;
}

int comparator(const void * num1, const void * num2)
{
    return *(int*)num1 - *(int*)num2;
}
