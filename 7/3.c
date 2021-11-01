#include <stdio.h>
#include <math.h>

#include "lab.h"

float result(int k, float resistance[]) {
	float res_final = 0;
	int i;
	for (i = 0; i < k; i++)
		res_final += resistance[i];
	res_final /= k;
		
	float deviation = 0;
	for (i = 0; i < k; i++)
	{
	    deviation += ((resistance[i] - res_final) * (resistance[i] - res_final));
	}
	deviation = sqrt(deviation);
	deviation /= k;
	
	printf("resistance: %f\nroot mean deviated: %f\n", res_final, deviation);

	return res_final;
}
