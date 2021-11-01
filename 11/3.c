#include <stdio.h>

struct str
{
    char s[70];
    int a;
    char t;
};

int main()
{
    struct str m[2];
    int i = 0;

    for(i = 0; i < 2; i++)
    {
	scanf("%s%*c%c%*c%d", m[i].s, &m[i].t, &m[i].a);
    }

    for(i = 0; i < 2; i++)
    {
	printf("%s %d %c\n", m[i].s, m[i].a, m[i].t);
    }


    return 0;
}
