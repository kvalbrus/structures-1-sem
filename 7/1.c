#include <stdio.h>
#include <math.h>

#include "lab.h"

int preparation(float *resistance) {
	for (int i = 0; i < 100; i++) {
		*(resistance+i) = 0;
	}
	int n = 0;
	float voltage[100] = {0}, current[100] = {0};
	while (scanf("%f%*c%f", &voltage[n], &current[n]) && n < 100) 
	{  
		resistance[n] = voltage[n] / current[n] * 1000;
		n++;
	}
	return n;
}
