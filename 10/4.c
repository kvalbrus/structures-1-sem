#include <stdio.h>
#include <math.h>

#define N 100

struct _Decimal
{
    char a[N];
    int n;
};

typedef struct _Decimal Decimal;

void half(Decimal * res, Decimal * a);

int main()
{
    Decimal a, res;
    int i = 0;

    puts("Enter number:");
    scanf("%d%*c", &a.n);

    puts("Enter chislo:");
    for(i = 0; i < a.n; i++)
    {
	scanf("%c", &a.a[i]);
	a.a[i] -= 48;
	//printf("%c\n", a.a[i]);
    }

    half(&res, &a);

    return 0;
}

void half(Decimal * res, Decimal * a)
{
    int ost = 0, r = 0, i = 0;

    for(i = 0; i < a -> n; i++)
    {   
	if(((a -> a[i] + (ost * 10)) / 2) == 0 && i == 0)
	{	    
	    ost = (a -> a[i]) % 2;
	}
	else
	{
	    r = ((a -> a[i] + (ost * 10)) / 2) + 48;
	    res -> a[i] = r;
	    ost = (a -> a[i]) % 2;
	}
    }

    for(i = 0; i < a -> n; i++)
    {
	printf("%c", (res -> a[i]));
    }
}
