#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], c;
    int i = 0;
    
    while((c = getchar()) != '\n')
    {
        if(c == ' ') a[i] = '\n';
	else a[i] = c;
	i++;
    }

    printf("%s\n", a);

    return 0;
}
