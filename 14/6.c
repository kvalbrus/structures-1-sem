#include <stdio.h>
#include <stdlib.h>

int f(void * a, void * b, size_t s);

int main()
{
    char a, b;
    int c, d;
    scanf("%c %c", &a, &b);
    scanf("%d %d", &c, &d);

    f(&a, &b, sizeof(char));
    f(&c, &d, sizeof(int));
    printf("%c %c\n", a, b);
    printf("%d %d\n", c, d);

    return 0;
}

int f(void * a, void * b, size_t s)
{
    char t;
    size_t i = 0;

    for(i = 0; i < s; i++)
    {
	t = *((char *) b + i);
	*((char *) b + i) = *((char *) a + i);
	*((char *) a + i) = t;
    }

    return 0;
}
