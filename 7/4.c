#include <stdio.h>
#include <math.h>

#include "lab.h"

const float EPS = 1e-6;

int check(int K, float *resistance, float resistance_final)
{
	
	float sum = 0;
	int i;
	for (i = 0; i < K; i++)
	{
	    sum = sum + (resistance[i] - resistance_final);
	}
	
	printf("mean deviation: %g\n", fabsf(sum/K));
	
	return (fabs(sum / K) < EPS) ? 1 : 0;
}
