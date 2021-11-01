#include <stdio.h>
#include <math.h>

double f(double x);

int main()
{
    double left = 0, right = 0;
    double epsilon = 0, middle = 0;

    printf("Enter: [a,b] and Epsilon:\n");
    scanf("%lf %lf %lf", &left, &right, &epsilon);

    for(;fabs(middle - left) > epsilon || fabs(middle - right) > epsilon;)
    {
	middle = (left + right) / 2;
	
	if (f(left) * f(middle) < 0) {
	    right = middle;
	}
	else
	{
            left = middle;
	}
    }

    printf("x = %lf\n", middle);
    return 0;
}

double f(double x)
{
    return pow(x, 2) + 6 * x - 16;
}
