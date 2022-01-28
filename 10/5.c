#include <stdio.h>
#include <string.h>

#define N 100

struct _Decimal
{
    int a[N];
    int n[N];
    int l;
};

typedef struct _Decimal Decimal;

Decimal mult_int(Decimal a);
Decimal get(char * a1, char * a2);

int main()
{
    Decimal dec, res;
    int i = 0, x = 0;
    char a1[N], a2[N];
    for(i = 0; i < N; i++)
    {
	dec.a[i] = 0;
	dec.n[i] = 0;
    }

    puts("Enter x and mul");
    scanf("%s %s", a1, a2);

    dec = get(a1, a2);

    res = mult_int(dec);

    for(i = res.l - 1; i >= 0; i--)
    {
	printf("%d", res.a[i]);
    }

    if(res.l == 0)
    {
	printf("0");
    }

    puts("");

    return 0;
}

Decimal get(char * a1, char * a2)
{
    Decimal dec;
    int i = 0;

    for(i = 0; i < N; i++)
    {
	dec.a[i] = 0;
	dec.n[i] = 0;
    }

    for(i = strlen(a1) - 1; i >= 0; i--)
    {
	dec.a[strlen(a1) - i - 1] = (int) (a1[i] - '0');
    }

    dec.l = strlen(a1);

    for(i = strlen(a2) - 1; i >= 0; i--)
    {
	dec.n[strlen(a2) - i - 1] = (int) (a2[i] - '0');
    }

    return dec;
}

Decimal mult_int(Decimal dec)
{
    Decimal res;
    int i = 0, j = 0;

    for(i = 0; i < N; i++)
    {
	res.a[i] = 0;
    }

    res.l = 0;

    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N - i; j++)
	{
	    res.a[i + j] += dec.a[i] * dec.n[j];
	}
    }
    
    for(i = 0; i < N - 1; i++)
    {
	res.a[i + 1] += res.a[i] /10;
	res.a[i] %= 10;
    }

    for(i = N - 1; i >= 0; i--)
    {
	if(res.a[i] != 0)
	{
	    res.l = i + 1;
	    break;
	}
    }

    return res;
}
