#include <stdio.h>

struct Point
{
    int x;
    int y;
};

struct Rect
{
    struct Point lt;
    struct Point rb;
};

void f(struct Rect * first, struct Rect * second);

int main()
{
    struct Rect first;
    struct Rect second;

    puts("Enter 1 koordinats x, y");
    scanf("%d %d", &first.lt.x, &first.lt.y);
    
    puts("Enter 2 koordinats x, y");
    scanf("%d %d", &first.rb.x, &first.rb.y);

    f(&first, &second);

    printf("x:%d y:%d\n", second.lt.x, second.lt.y);
    printf("x:%d y:%d\n", second.rb.x, second.rb.y);
    return 0;	
}

void f(struct Rect * first, struct Rect * second)
{
    second -> lt.x = - first -> lt.y;
    second -> lt.y = first -> rb.x;
    second -> rb.x = - first -> rb.y;
    second -> rb.y = first -> lt.x;
}
