#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], c;
    int i = 0, p = 0;

    scanf("%s", a);

    for(i = 0; i < strlen(a) - 1; i++)
    {
	

	if(a[i-p] == a[i+1]) 
	{
	    a[i+1] = ' ';
	    p++;
	}
	else p = 0;
    }
    
    printf("%s\n", a);

    return 0;
}
