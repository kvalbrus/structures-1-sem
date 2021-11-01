#include <stdio.h>
#include <stdlib.h>

int f(void * a, void * b, size_t s);

int main()
{
    char a,b;
    scanf("%c %c", &a, &b);

    f(&a, &b, sizeof(char));

    printf("%c %c", a, b);

    return 0;
}

int f(void * a, void * b, size_t s)
{
    void * c;
    switch(s)
    {
	case sizeof(char):
	    *(char*) c = *(char*) a;
	    *(char*) a = *(char*) b;
	    *(char*) b = *(char*) c;
	    break; 
    }

    return 0;
}
