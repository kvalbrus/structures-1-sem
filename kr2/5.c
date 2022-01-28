#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n = 0, i = 0, j = 0, hod = 0;
    int * s1, * s2, a1 = 0, a2 = 0;
    int k = 0;

    scanf("%d", &n);
    s1 = (int *) calloc(n, sizeof(int));
    s2 = (int *) calloc(n, sizeof(int));

    for(i = 0; i < n; i++)
    {
        scanf("%d", &s1[i]);
    }
    
    for(i = 0; i < n; i++)
    {
        scanf("%d", &s2[i]);
    }

    a1 = n;
    a2 = n;

    for(hod = 0; hod < pow(10, 6) && a1 != 0 && a2 != 0; hod++)
    {
        if((s1[0] > s2[0] && s2[0] != 0) || s1[0] == 0)
	{
            s1 = (int *) realloc(s1, (a1+1) * sizeof(int));
	    a1 = a1 + 1;
	    k = s1[0];

	    for(j = 0; j < a1 - 2; j++)
	    {
                s1[j] = s1[j+1];
	    }

	    s1[a1-2] = k;
	    s1[a1-1] = s2[0];

	    for(j = 0; j < a2-1; j++)
	    {
		s2[j] = s2[j+1];
	    }

	    s2 = (int *) realloc(s2, (a2-1) * sizeof(int));
	    a2 = a2 - 1;
	}
	else
	{
	    s2 = (int *) realloc(s2, (a2+1) * sizeof(int));
	    a2 = a2 + 1;
	    k = s2[0];

	    for(j = 0; j < a2 - 2; j++)
	    {
		s2[j] = s2[j+1];
	    }

	    s2[a2-2] = s1[0];
	    s2[a2-1] = k;

	    for(j = 0; j < a1-1; j++)
	    {
		s1[j] = s1[j+1];
	    }

	    
	    s1 = (int *) realloc(s1, (a1-1) * sizeof(int));
	    a1 = a1 - 1;
	}
    }

    if(hod < pow(10, 6))
    {
        printf("hod: %d\n", hod);

	if(a1 == 0)
	{
	    printf("second\n");
	}
	else
	{
	    printf("first\n");
	}
    }
    else
    {
	printf("nobody\n");
    }

    return 0;
}
