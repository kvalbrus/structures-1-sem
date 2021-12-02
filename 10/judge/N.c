#include <stdio.h>
#include <string.h>

int main()
{
    char ch[1002];
    int i = 0, summ = 0;
    scanf("%s", ch);

    for(i = 0; i < strlen(ch); i++)
    {
        summ += (ch[i] - 48);
    }

    if(summ % 3 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
