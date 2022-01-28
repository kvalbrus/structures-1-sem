#include <stdio.h>
#include <stdio.h>

struct _Decimal
{
    int a[100]; // number is a[0]*10^0 + a[1]*10^1 + ..+ a[n]*10^n
    int n; // наибольшая степень десяти
};

typedef struct _Decimal Decimal;

void fmul(Decimal * res, Decimal a, int mul)
{
    int add = 0, i;
    for(i = 0; i <= a.n; i++)
    {
        res->a[i] = (a.a[i] * mul + add) % 10;
        if(a.a[i] * mul + add >= 10)
        {
            add = (a.a[i] * mul + add) / 10;
        }
        else
        {
            add = 0;
        }
    }
    if (add != 0)
    {
        res->a[(res->n)] = add;
    }
    else
    {
        res->a[(res->n)] = 0;
    }
}

int main()
{
    Decimal a;
    Decimal res;
    int mul;
    scanf("%d%*c", &a.n);
    res.n = a.n + 1;
    for(int i = a.n; i >= 0; i--)
    {
        scanf("%c", &a.a[i]);
	a.a[i] -= 48;
    }
    scanf("%d", &mul);
    fmul(&res, a, mul);
    if(res.a[res.n] != 0)
        printf("%d", res.a[res.n]);
    for(int i = res.n - 1; i >= 0; i--)
    {
        printf("%d", res.a[i]);
    }
    return 0;
}
