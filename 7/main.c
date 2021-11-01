#include <stdio.h>

#include "lab.h"

int main()
{
    float resistance[100] = {0};
    int M = preparation(resistance);
    
    int K = data_select(M, resistance);
    float resistance_final = result(K, resistance);

    check(K, resistance, resistance_final);

    return 0;
}
