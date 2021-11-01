#include <stdio.h>

void f(int i, int a, int b, int c);

int main()
{
    int a = 0;

    scanf("%d", &a);
    
    f(a, 1, 2, 3);

    return 0;
}

void f(int s, int from, int to, int neitr)
{
    if(s == 1)
    {
	printf("%d -> %d\n", from, to);
    }
    else
    {
	f(s - 1, from, neitr, to);
	printf("%d -> %d\n", from, to);
	f(s - 1, neitr, to, from);
    }
}
