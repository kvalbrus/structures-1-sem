#include <stdio.h>
#include <math.h>

void Calculates(long double x);

int main()
{
    Calculates(1.0);
    Calculates(0.5);
    Calculates(-0.5);    

    return 0;
}

void Calculates(long double x)
{
    long double answer = 0, numerator = 0, denominator = 0;

    numerator = pow(sin(x), 2) + cos(pow(x, 5));
    denominator = sqrt(M_PI + (tan(pow((x + 5), 3) / x)));

    answer = sqrt(numerator / denominator);

    printf("x = %Lf; f(x) = %Lf\n", x, answer);
}
