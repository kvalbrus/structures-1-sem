#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int g(char * ch);

int b(char * ch);

int comparator(const void * a, const void * b);

int main()
{
    char a[100][200], buffer[100];
    int i = 0, j = 0, j1 = 0, h = 0, max = 0, m = 0;

    for(h = 0; scanf("%s", a[h]); h++) 
    {
	if(a[h][0] == '*') break;
    }

    qsort(a, h - 1, sizeof(char *), comparator);

    for(i = 0; i < h; i++)
    {
        m = g(a[i]);

	max = m > max ? m : max;
    }

    for(i = 0; i < h; i++)
    {
	if(g(a[i]) == max)
	{
	    printf("%s\n", a[i]);
	}
    }

    puts("");

    for(i = 0; i < h; i++)
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
    char * s1 = (char *) a;
    char * s2 = (char *) b;
    int l1 = strlen(s1), l2 = strlen(s2);
    printf("%d %d\n", l1, l2);
    int i = 0;
    for(i = 0; i < l1; i++)
    {
	if(s1[i] < s2[i])
	{
	    return s1[i] - s2[i];
	}

	if(s1[i] > s2[i])
	{
	    return s1[i] - s2[i];
	}
    }

    return 0;
}
