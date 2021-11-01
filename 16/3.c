#include <stdio.h>
#include <stdlib.h>

float ** f(float (*a)[3], int n);

float ** g(float ** b, int n, int m);

int main()
{
    int n = 0, m = 0, i = 0;
    float (*a)[3];
    float ** b;

    puts("Enter size matrix n x 3");
    scanf("%d", &n);

    a = f(a, n);
    free(a);

    puts("Enter size matrix n x m:");
    scanf("%d%d", &n, &m);

    b = g(b, n, m);
    
    for(i = 0; i < m; i++)
    {
	free(*(b + i));
    }
    free(b);
    
    return 0;
}

float ** f(float (*a)[3], int n)
{
    int i = 0, j = 0;
    a = (float (*)[3]) malloc(n * 3 * sizeof(float));
    puts("Enter massiv #1:");

    for(i = 0; i < n; i++)
    {
	for(j = 0; j < 3; j++)
	{	
	    scanf("%f", *(a + i) + j);
	}
    }

    for(i = 0; i < n; i++)
    {
	for(j = 0; j < 3; j++)
	{
	    printf("%3.2f - %p\n", *(*(a + i) + j), *(a + i) + j);
	}
	puts("");
    }

    return a;
}

float ** g(float ** b, int n, int m)
{
    int i = 0, j = 0;

    b = (float **) calloc(n, sizeof(float *));
    for(i = 0 ; i < m; i++)
    {
	*(b + i) = (float *) calloc(m, sizeof(float));
    }

    puts("Enter massiv:");

    for(i = 0; i < n; i++)
    {
	for(j = 0; j < m; j++)
	{
	    scanf("%f", *(b + i) + j);
	}
    }

    for(i = 0; i < n; i++)
    {
	for(j = 0; j < m; j++)
	{
	    printf("%3.2f - %p\n", *(*(b + i) + j), *(b + i) + j);
	}
    }

    return b;
}
