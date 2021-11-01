#include <stdio.h>

#define N 100

struct _Decimal
{
    char a[N];
    unsigned int n;
};

typedef struct _Decimal Decimal;

Decimal mult_int(Decimal a, unsigned int x);

int main()
{
    Decimal dec, res;
    int i = 0, x = 0;

    puts("Enter numer");
    scanf("%d%*c", &dec.n);

    puts("Enter chislo");
    for(i = 0; i < dec.n; i++)
    {
	scanf("%c", &dec.a[i]);
	dec.a[i] -= 48;
    }

    puts("Enter x");
    scanf("%d", &x);

    res = mult_int(dec, x);

    for(i = 0; i < dec.n; i++)
    {
	printf("%c", dec.a[i] + 48);
    }

    printf(" * %d = ", x);

    for(i = res.n; i > 0; i--)
    {
	printf("%c", res.a[i] + 48);
    }

    return 0;
}

Decimal mult_int(Decimal a, unsigned int x)
{
    int ost = 0, r = 0, i = 0, j = 0;
    Decimal res;

    for(i = a.n, j = 0; j < a.n; i--, j++)
    {
	res.a[i] = ((a.a[j] * x) + ost) % 10;
	ost = ((a.a[j] * x) + ost) / 10;
    }

    if(ost > 0)
    {
	res.a[i] = ost;
	res.n = i;
	return res;
    }

    res.n = i - 1;

    return res;
}
