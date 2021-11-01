#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comparator(const void * a, const void * b);

int main()
{
    char a[1000], b = '0';
    int i = 0, j = 0;

    scanf("%s", a);
    i = strlen(a);

    qsort(a, i - 1, sizeof(char), comparator);

    for(j = 0; j < i; j++)
    {
	printf("%c", a[j]);
    }

    return 0;
}

int comparator(const void * a, const void * b)
{
//    if(*(char*) b == '.' || *(char*) a == '.') return 0;

    return *(char*) a - *(char*) b;
}
