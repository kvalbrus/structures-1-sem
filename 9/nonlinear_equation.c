#include "lab.h"

const double interval1 = 0.2;
const double interval2 = 8.2;

double nonlinear_equation(double *radioactivity, double *time, int N, double precision)
{
    double a = interval1;
    double b = interval2;
    double c = (interval1 + interval2) / 2;

    double aM = 0, bM = 0, cM = module(radioactivity, time, N, c);
    while(fabs(a-b) > precision)
    {
	c = (a+b)/2;
	aM = module(radioactivity, time, N, a);
        bM = module(radioactivity, time, N, b);
        cM = module(radioactivity, time, N, (a+b)/2);
	
	if((aM > 0 && cM > 0) || (aM < 0 && cM < 0))
	{
	    a = c;
	}

	if((bM > 0 && cM > 0) || (bM < 0 && cM < 0))
	{
	    b = c;
	}
    }

    return c;
}
