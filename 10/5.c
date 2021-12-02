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
    int i = 0, k = 0, x = 0, m = 0;

    puts("Enter numer");
    scanf("%d%*c", &dec.n);

    puts("Enter chislo");
    for(i = 0; i < dec.n; i++)
    {
	scanf("%c", &dec.a[dec.n - i - 1]);
	dec.a[dec.n - i - 1] -= 48;
    }

    puts("Enter x");
    scanf("%d", &x);

    res = mult_int(dec, x);

    for(i = res.n - 1; i >= 0; i--)
    {	
	printf("%d", res.a[i]);
    }

    return 0;
}

Decimal mult_int(Decimal dec, unsigned int x)
{
    Decimal res;
    int i = 0, j = 0, a = 0, ost = 0, k = 0, l = 0, m = 0;

    res.n = dec.n;

    for(i = 0; x > 0; x /= 10, i++)
    {
        k = x % 10;
	l = 0;

        for(j = 0; j < res.n; j++)
        {
	    m = dec.a[j] * k;
	    res.a[i+j] += m % 10 + l;

	    if(res.a[i+j] > 0 && res.n < i + j + 1)
	    {
	        res.n = i + j + 1;
	    }

	    l = k / 10;

	//a = dec.a[dec.n - 1 - i] * x + ost;
	//ost = a / 10;
	//a %= 10;

	//res.a[i] = a;
        }

        if(l > 0)
	{
	    res.a[i+j] += l;
	    res.n++;
	}

    }

    for(i = 0; i < res.n; i++)
    {
	res.a[i+1] = res.a[i] / 10;
	res.a[i] = res.a[i] % 10;
    }
    /*if(ost > 0)
    {
        res.a[i] = ost;
	res.n = dec.n + 1;
    }
    else
    {
	res.n = dec.n;
    }*/

    return res;
}
