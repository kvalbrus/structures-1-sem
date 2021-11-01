#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Pos
{
    int x;
    int y;
};

int fo(struct Pos * ferz, struct Pos * hod);

int main(int argc, char * argv[])
{
    struct Pos ferz;
    struct Pos hod;

    ferz.x = atoi(argv[1]);
    ferz.y = atoi(argv[2]);

    hod.x = atoi(argv[3]);
    hod.y = atoi(argv[4]);

    if(fo(&ferz, &hod)) printf("YES\n");
    else printf("NO\n");
}

int fo(struct Pos * ferz, struct Pos * hod)
{
    if(ferz -> x == hod -> x || ferz -> y == hod -> y) return 1;
    if(fabs(ferz -> x - hod -> x) == fabs(ferz -> y - hod -> y)) return 1;

    return 0;
}
