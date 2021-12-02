#include <stdio.h>

int func_hyper(float x, float y)
{
    if(y >= 1/(x+4) - 3 && y >= -2 && x > -4)
    {
        return 1;
    }

    return 0;
}
