#include <stdio.h>
#include <math.h>

double sinX(int x, double E);

int main()
{
    int x = 0;
    double epsilon = 0;

    printf("Enter x, Epsilon:\n");
    scanf("%d %lf", &x, &epsilon);
    while (x > 2 * M_PI)
    {
        x -= 2 * M_PI;
    }

    double sin_x = sinX(x, epsilon);

    printf("sin(x) (c) = %lf  sin(x) my function = %lf\n", sin(x), sin_x);
}

double sinX(int x, double epsilon)
{
    double Sk = x, X = x;

    int i = 0;
    double originalSin = sin(x);
    for(i = 2; fabs(originalSin - X) > epsilon; i += 2)
    {
	double numerator = x * x;
	double determinator = i * (i + 1);
	double dmn = - (numerator / determinator);

	Sk *= dmn;

	X += Sk;
    }	    

    return X;
}
