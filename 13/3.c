#include <stdio.h>

int min(int a, int b);
int f(int m, int n);

int main()
{
    int m = 0, n = 0, b = 0;
    scanf("%d %d", &m, &n);

    b = f(m,n);

    printf("%d\n", b);
}

int f(int m, int n)
{
    if(m == 0)
    {
	return n + 1;
    }

    if(n == 0)
    {
	return f(m - 1,1);
    }

    return f(m-1,f(m,n-1));
}

int min(int a, int b)
{
    return a > b ? b : a;
}
