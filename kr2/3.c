#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define size 100

union u
{
    char data[size];
    long double ldb;
    double db;
    float fl;
};

int main()
{
    char a[size];
    union u ch;
    int i = 0, j = 0;

    scanf("%s", a);

    if(!strcmp(a, "float"))
    {
	scanf("%f", &ch.fl);

	for(i = sizeof(float) - 1; i >= 0; i--)
	{
	    for(j = 7; j >= 0; j--)
	    {
		if(((ch.data[i] >> j) & 1) == 1)
		{
		    printf("1");
		}
		else
		{
		    printf("0");
		}

		if(j == 4)
		{
		    printf(" ");
		}
	    }

	    printf(" ");
	}
    }
    else if(!strcmp(a, "double"))
    {
	scanf("%lf", &ch.db);

	for(i = sizeof(double) - 1; i >= 0; i--)
	{
	    for(j = 7; j >= 0; j--)
	    {
		if(((ch.data[i] >> j) & 1) == 1)
		{
		    printf("1");
		}
		else
		{
		    printf("0");
		}

		if(j == 4)
		{
		    printf(" ");
		}
	    }

	    printf(" ");
	}
    }
    else if(!strcmp(a, "long"))
    {
	scanf("%s", a);
	scanf("%Lf", &ch.ldb);

	for(i = sizeof(long double) - 1; i >= 0; i--)
	{
	    for(j = 7; j >= 0; j--)
	    {
		if(((ch.data[i] >> j) & 1) == 1)
		{
		    printf("1");
		}
		else
		{
		    printf("0");
		}

		if(j == 4)
		{
		    printf(" ");
		}
	    }

	    printf(" ");
	}
    }

    puts("");

    return 0;
}
