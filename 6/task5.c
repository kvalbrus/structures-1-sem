#include <stdio.h>

int main()
{
    int num1[1000] = {0}, num2[1000] = {0};
    int i1 = 0, i2 = 0;

    puts("Enter numbers massiv #1:");
    for(; (scanf("%d", &num1[i1])) == 1; i1++) {}
    if((scanf("%lc", &num1[i1])) != 1); 
    puts("Enter numbers massiv #2:");
    for(; (scanf("%d", &num2[i2])) == 1; i2++) {}

    num1[i1] = 0;
    num2[i2] = 0;

    int num3[2000] = {0};

    int j1 = 0, j2 = 0, j3 = 0;
    
    for(; j3 < (i1 + i2); j3++)
    {
	
        if (num1[j1] < num2[j2] && j1 < i1)
	{
	    num3[j3] = num1[j1];
	    //
	    printf("1) %d\n", num1[j1]);
	    //
	    j1++;
	}
	else
	{
	    num3[j3] = num2[j2];
	    //
	    printf("2) %d\n", num2[j2]);
	    //
            j2++;
	}
    }


    int k = 0;
    for(; k < j3; k++)
    {
	printf("%d ", num3[k]);
    }

    return 0;
}
