#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int g(char * ch);

int b(char * ch);

int comparator(const void * a, const void * b);

int min(int a, int b);

int main()
{
    char a[100][200];
    int i = 0, j = 0, j1 = 0, h = 0, max = 0, m = 0;

    for(h = 0; scanf("%s", a[h]); h++) 
    {
	if(a[h][0] == '*') break;
    }

    qsort(a, h + 1, sizeof(char) * 200, comparator);

    for(i = 0; i < h; i++)
    {
        m = g(a[i]);

	max = m > max ? m : max;
    }

    for(i = 0; i < h + 1; i++)
    {
	if(g(a[i]) == max)
	{
	    printf("%s\n", a[i]);
	}
    }

    puts("");

    for(i = 0; i < h + 1; i++)
    {
	if(b(a[i]))
	{
	    printf("a) %s\n", a[i]);
	}
    }

    return 0;
}

int g(char * ch)
{
    int l = strlen(ch), i = 0, g = 0;
    for(i = 0; i < l; i++)
    {
	ch[i] = tolower(ch[i]);
	if(ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'y' || ch[i] == 'u')
	{
	    g++;
	}
    }

    return g;
}

int b(char * ch)
{
    int l = strlen(ch), i = 0, g = 0;

    for(i = 0; i < l; i++)
    {
	if(tolower(ch[i]) == 'a') g++;
    }

    return g >= 2 ? 1 : 0;
}

int comparator(const void * a, const void * b)
{
    char * a1 = (char *) a;
    char * b1 = (char *) b;
    int l1 = strlen(a1), l2 = strlen(b1);
    int i = 0;

    for(i = 0; i < min(l1,l2); i++)
    {
	if(a1[i] < b1[i])
	{
	    return a1[i] - b1[i];
	}
	else if(a1[i] > b1[i])
	{
	    return a1[i] - b1[i];
	}
    }

    return l1 - l2;
}

int min(int a, int b)
{
    return a > b ? b : a;
}
