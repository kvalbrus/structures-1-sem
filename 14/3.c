#include <stdio.h>
#include <stdlib.h>

int comparator(const void * num1, const void * num2);

int main()
{
    float a[100];
    int i = 0, j = 0;

    for(i = 0; scanf("%f", &a[i]); i++) {}

    qsort(a, i, sizeof(float), comparator);

    for(j = 0; j < i; j++)
    {
	printf("%f ", a[j]);
    }

    return 0;
}

int comparator(const void * num1, const void * num2)
{
    return (*(float*) num1 - *(float*) num2) * 100;
}
