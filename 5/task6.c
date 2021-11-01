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

int main()
{
    struct Rect pr;

    printf("Enter Point #1 [x,y]:\n");
    scanf("%d %d", &pr.lt.x, &pr.lt.y);

    printf("Enter Point #2 [x,y]:\n");
    scanf("%d %d", &pr.rb.x, &pr.rb.y);

    pr.lt.y = - pr.lt.y;
    pr.rb.y = - pr.rb.y;

    printf("Point #1: x = %d, y = %d\n", pr.lt.x, pr.lt.y);
    printf("Point #2: x = %d, y = %d\n", pr.rb.x, pr.rb.y);
    
    return 0;
}
