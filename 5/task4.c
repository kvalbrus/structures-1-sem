#include <stdio.h>

int main()
{
    double massa = 0;
    int num = 0;

    printf("Enter massa, number:\n");
    scanf("%lf %d", &massa, &num);

    switch(num)
    {
	case 1:
	    break;

	case 2:
	    massa /= 1000000;
	    break;

	case 3:
	    massa /= 1000;
	    break;

	case 4:
	    massa *= 1000;
	    break;

	case 5:
	    massa *= 100;
	    break;    
    };

    printf("kg = %lf\n", massa);

    return 0;
}
