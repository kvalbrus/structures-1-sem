#include <stdio.h>

struct Product
{
    int id;
    int count;
    int price;
};

void f(struct Product *, int);

void Print(struct Product *, int);

int main()
{
    struct Product pr[4] = {{1, 10, 55}, {2, 15, 99}, {3, 2, 154}, {4, 6, 44}};

    f(pr, 4);

    return 0;
}

void f(struct Product * pr, int n)
{
    int v = 0;
    Print(pr, n);

    puts("Enter id product:");
    while((scanf("%d", &v) == 1))
    {
	if(v > 0 && v <= n)
	{
	    int c = 0;

	    puts("Enter count:");
	    scanf("%d", &c);
	    pr[v-1].count = c;
	}
	else 
	{
	     puts("Invalid id!");
	}

	puts("Enter id product:");
    }

    Print(pr, n);
}

void Print(struct Product * pr, int n)
{
    int i = 0;

    for(i = 0; i < n; i++)
    {
	printf("%2d %2d %4d\n", pr[i].id, pr[i].count, pr[i].price); 
    }
}
