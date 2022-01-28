#include <stdio.h>
#include <stdlib.h>
#define N 100019

enum Color
{
    RED,
    BLUE,
};

typedef struct hashnode
{
    int x;
    int y;
    enum Color color;
    struct hashnode * next;
} Hashnode;

int hash(int x);
void Paint(int x, int y, enum Color color, Hashnode ** a);
void Query(int x, int y, Hashnode ** a);

int main()
{
    Hashnode * table[N];
    int o = 0, x = 0, y = 0, i = 0;
    char c = 0;
    enum Color color;

    for(i = 0; i < N; i++)
    {
	table[i] = NULL;
    }

    do
    {
	puts("*********************");
	puts("1) Paint");
	puts("2) Query");
	puts("3) Exit");
	puts("*********************");
	scanf("%d", &o);

	switch(o)
	{
	    case 1:
		puts("Enter x, y:");
		scanf("%d %d", &x, &y);
		puts("Enter color B - (blue), R - (red):");
		scanf("%*c%c", &c);

		if(c == 'B') color = BLUE;
		else color = RED;

		Paint(x, y, color, table);
		break;

	    case 2:
		puts("Enter x, y:");
		scanf("%d %d", &x, &y);
		
		Query(x, y, table);
		break;

	    case 3:
		break;
	}

    } while(o != 3);

    return 0;
}

int hash(int x)
{
    return x % N;
}

void Paint(int x, int y, enum Color color, Hashnode ** a)
{
    int h = hash(x);
    Hashnode * b;
    Hashnode * c;

    if(a[h] == NULL)
    {
	a[h] = (Hashnode *) calloc(1, sizeof(Hashnode));
	a[h] -> x = x;
	a[h] -> y = y;
	a[h] -> color = color;
	a[h] -> next = NULL;
    }
    else
    {
	 b = a[h];

	 if(b -> x == x && b -> y == y)
	 {
	     b -> color = color;

	     return;
	 }

	 for(; b -> next != NULL && !(b -> next -> x == x && b -> next -> y == y); b = b -> next) {}

	 if(b -> next == NULL)
	 {
	      c = (Hashnode *) calloc(1, sizeof(Hashnode));
	      c -> x = x;
	      c -> y = y;
	      c -> color = color;
	      c -> next = NULL;
	      
	      b -> next = c;
	 }
	 else
	 {
	     b -> next -> color = color;
	 }
    }
}

void Query(int x, int y, Hashnode ** a)
{
    int h = hash(x);
    Hashnode * b = a[h];

    for(;b != NULL && !(b -> x == x && b -> y == y); b = b -> next) {}

    if(b == NULL) puts("N");
    else
    {
	if(b -> color == BLUE) puts("B");
	else puts("R");
    }
}
