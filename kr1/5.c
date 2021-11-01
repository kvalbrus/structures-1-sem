#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char a[100];
    int i = 0, j = 0, plus = 0, minus = 0, b = 0;
    char * k = 0;

    scanf("%s", a);
    i = strlen(a);

    for(;strchr(a,'-');)
    {
	*(strchr(a, '-')) = '.';
	
	minus++;
    }

    for(;strchr(a, '+');)
    {
	*strchr(a, '+') = '.';
	
	plus++;
    }
    
    for(;strchr(a, '0');)
    {
	if(*(strchr(a, '0')-1) == '.') b++;
	*strchr(a, '0') = ',';
    }

    printf("minus: %d, plus: %d, symbols: %d\n", minus, plus, b);

    return 0;
}
