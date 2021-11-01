#include <stdio.h>
#include <math.h>
#include <stdbool.h>

struct circle
{
    int x;
    int y;
    int r;
};

int main()
{
    struct circle o1 = {0, 0, 0};
    struct circle o2 = {0, 0, 0};
    bool ino1 = false, ino2 = false;
    int x = 0, y = 0, rX1 = 0, rY1 = 0, rX2 = 0, rY2 = 0;

    printf("Enter x, y, r Circle #1:\n");
    scanf("%d %d %d", &o1.x, &o1.y, &o1.r);

    printf("Enter x, y, r Circle #2:\n");
    scanf("%d %d %d", &o2.x, &o2.y, &o2.r);

    printf("Enter X, Y:\n");
    scanf("%d %d", &x, &y);

    rX1 = fabs(o1.x - x);
    rY1 = fabs(o1.y - y);
    rX2 = fabs(o2.x - x);
    rY2 = fabs(o2.y - y);

    ino1 = rX1 * rX1 + rY1 * rY1 <= o1.r * o1.r ? true : false;
    ino2 = rX2 * rX2 + rY1 * rY2 <= o2.r * o2.r ? true : false;

    if (ino1 && ino2)
    {
	printf("[x,y] in o1 and o2\n");
    } 
    else if (ino1)
    {
	printf("[x,y] in o1\n");
    } 
    else if (ino2)
    {
	printf("[x,y] in o2\n");
    }
    else
    {
        printf("[x,y] not in o1 and not in o2\n");
    }

    return 0;
}
