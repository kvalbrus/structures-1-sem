#include <stdio.h>
#include <stdlib.h>

void f(int * A, int size, int b, int * a1);

int main()
{
    int n = 0, b = 0, i = 0, a1 = 0;
    int * A;

    puts("Enter size massiv:");
    scanf("%d", &n);

    A = (int *) calloc(n , sizeof(int));

    puts("Enter massiv:");
    for(i = 0; i < n; i++)
    {
	scanf("%d", (A + i));
    }

    puts("Enter number b:");
    scanf("%d", &b);

    f(A, n, b, &a1);

    printf("i = %d\n", a1);

    return 0;
}

void f(int * A, int size, int b, int * a1)
{
    int i = 0, start = 0, end = size - 1;

    for(;end - start > 1;)
    {
	if(b < *(A + ((start + end) / 2)))
	{
	    end = (start + end) / 2;
	}
	else
	{
	    start = (start + end) / 2;
	}
    }

    *a1 = start;
}
