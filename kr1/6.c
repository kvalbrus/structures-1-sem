#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Point
{
    int x;
    int y;
};

struct Uchastok
{
    int S;
    int P;
    struct Point lv;
    struct Point pn;    
};

int comporator(const void * a, const void * b);

int main()
{
    struct Uchastok uc[10];
    int i = 0, j = 0;

    puts("Enter number");
    scanf("%d", &i);

    for(j = 0; j < i; j++)
    {
	printf("Enter %d koordinats x,y  x,y:", j + 1);
	scanf("%d %d %d %d", &uc[j].lv.x, &uc[j].lv.y, &uc[j].pn.x, &uc[j].pn.y);

	uc[j].S = fabs(uc[j].lv.x - uc[j].pn.x) * fabs(uc[j].lv.y - uc[j].pn.y);
	uc[j].P = 2 * fabs(uc[j].lv.x - uc[j].pn.x) + 2 * fabs(uc[j].lv.y - uc[j].pn.y);
    }

    qsort(uc, i, sizeof(struct Uchastok), comporator);

    for(j = 0; j < i; j++)
    {
	printf("%d %d %d %d\n", uc[j].lv.x, uc[j].lv.y, uc[j].pn.x, uc[j].pn.y);
    }

    return 0;
}

int comporator(const void * a, const void * b)
{
    struct Uchastok u1 = *(struct Uchastok *) a;
    struct Uchastok u2 = *(struct Uchastok *) b;
	
    int S1 = u1.S;
    int S2 = u2.S;

    int P1 = u1.P;
    int P2 = u2.P;

    if(S1 != S2) return S2 - S1;
    
    if(P1 != P2) return P1 - P2;

    return fabs(u2.lv.y - u2.pn.y) - fabs(u1.lv.y - u1.pn.y);
}
