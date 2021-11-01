#include <stdio.h>

int main()
{
    double x = 0, y = 0;

    printf("Enter x, y:\n");
    scanf("%lf %lf", &x, &y);

    if (x > 0)
    {
	if (y > 0)
	{
	    printf("1 quarter\n");
	}
	else 
	{
	    printf("4 quarter\n");
	}
    }
    else
    {
	if (y > 0)
	{
	    printf("2 quarter\n");
	}
	else
	{
	    printf("3 quarter\n");
	}
    }

    return 0;
}
