#include<stdio.h>
#include<math.h>

#include "lab.h"

int data_select(int M, float *resistance)
{
	int i;
	float resistance_average;
	float precision = 0.03;
	int K = 0;

	for (i = 0; i < M; i++)
	{
		resistance_average += resistance[i];
	}
	resistance_average = resistance_average / M;

	for (i = 0; i < M; i++)
	{
		if (((fabs(resistance[i] - resistance_average)) / resistance_average) > precision )
		{
			resistance[i] = 0;
		}
		else
		{
			int j = i;
			if (resistance[j] == 0)
				break;
			while (j != 0 && resistance[j-1] == 0)
			{
				resistance[j-1] = resistance[j];
				resistance[j] = 0;
				j -= 1;
					
			}
			K+=1;
		}
	}
	return K;
}

