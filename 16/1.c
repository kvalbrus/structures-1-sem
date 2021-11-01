#include <stdio.h>
#include <stdlib.h>

int * massiv(int * a, int * b, int size1, int size2);

int main()
{
    int size1 = 0, size2 = 0, i = 0;
    int * a;
    int * b;
    int * c;

    puts("Enter size massiv #1:");
    scanf("%d", &size1);

    a = (int *) calloc(size1, sizeof(int));

    puts("Enter numbers massiv #1:");
    for(i = 0; i < size1; i++)
    {
	scanf("%d", (a + i));
    }

    puts("Enter size massiv #2:");
    scanf("%d", &size2);

    b = (int *) calloc(size2, sizeof(int));

    puts("Enter numbers massiv #2:");
    for(i = 0; i < size2; i++)
    {
	scanf("%d", (b + i));
    }

    c = massiv(a, b, size1, size2);

    for(i = 0; i < size1 + size2; i++)
    {
	printf("%d ", *(c + i));
    }

    return 0;
}

int * massiv(int * a, int * b, int size1, int size2)
{
    int * c = (int *) calloc(size1 + size2, sizeof(int));
    int i = 0, k1 = 0, k2 = 0;

    for(i = 0; i < size1 + size2; i++)
    {
	if((*(a + k1) > *(b + k2) && k2 < size2) || k1 >= size1)
	{
	    *(c + i) = *(b + k2);
	    k2++;
	}
	else
	{
	    *(c + i) = *(a + k1);
	    k1++;
	}
    }

    return c;
}
