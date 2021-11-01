#include <stdio.h>
#include <math.h>

int main()
{
    const long int        MIN_CHAR = 0;
    const long int        MAX_CHAR = pow(2, 8) - 1;
    const long int        MIN_INT = - pow(2, 32) / 2;
    const long int        MAX_INT = pow(2, 32) / 2 - 1;
    const long int        MIN_UNSIGNED_INT = 0;
    const long int        MAX_UNSIGNED_INT = pow(2, 32) - 1;
    const long double     MIN_FLOAT = - pow(2, 32) / 2;
    const long double     MAX_FLOAT = pow(2, 32) / 2 -1;
    const long int        MIN_LONG_LONG_INT = - pow(2, 64) / 2;
    const long double     MAX_LONG_LONG_INT = pow(2, 64) / 2 - 1;

    printf("Type            Size Min                       Max\n\n");
    
    printf("Char            %ld    %-25ld %ld\n", sizeof(char), MIN_CHAR, MAX_CHAR);
    printf("Int             %ld    %-25ld %ld\n", sizeof(int), MIN_INT, MAX_INT);
    printf("Unsigned int    %ld    %-25ld %ld\n", sizeof(unsigned int), MIN_UNSIGNED_INT, MAX_UNSIGNED_INT);
    printf("Float           %ld    %-25Le %Le\n", sizeof(float), MIN_FLOAT, MAX_FLOAT);
    printf("Long long int   %ld    %-25ld %.0Lf\n\n", sizeof(long long int), MIN_LONG_LONG_INT, MAX_LONG_LONG_INT);

    return 0;
}

