#include <stdio.h>
#include <stdbool.h>
#include <string.h>

enum status
{
    NORTH,
    EAST,
    SOUTH,
    WEST,
    END
};

enum status hod(char * s);
void k(enum status st, int * x, int * y, int a);

int main()
{
    char s[20];
    int a = 0;
    int x = 0, y = 0;

    scanf("%s", s);
    while(hod(s) != END)
    {
        scanf("%d", &a);
        k(hod(s), &x, &y, a);

        scanf("%s", s);
    }

    printf("%d %d\n", x, y);

    return 0;
}

enum status hod(char * s)
{
    if(strlen(s) > 4)
    {
        if(s[0] == 'N' && s[1] == 'o' && s[2] == 'r' && s[3] == 't' && s[4] == 'h')
        {
            return NORTH;
        }

        if(s[0] == 'S' && s[1] == 'o' && s[2] == 'u' && s[3] && 't' && s[4] == 'h')
        {
            return SOUTH;
        }
    }

    if(strlen(s) > 3)
    {
        if(s[0] == 'E' && s[1] == 'a' && s[2] == 's' && s[3] == 't')
        {
            return EAST;
        }

        if(s[0] == 'W' && s[1] == 'e' && s[2] == 's' && s[3] == 't')
        {
            return WEST;
        }
    }

    return END;
}

void k(enum status st, int * x, int * y, int a)
{
    if(st == NORTH)
    {
        *y += a;
    }

    if(st == SOUTH)
    {
        *y -= a;
    }

    if(st == EAST)
    {
        *x += a;
    }

    if(st == WEST)
    {
        *x -= a;
    }
}
