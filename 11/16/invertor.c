#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char buffer[1000];
    char a;
    int i = 0, j = 0, k = 0;

    scanf("%c", &buffer[i]);
    for(i = 1; buffer[i - 1] != '\n'; i++)
    {
        scanf("%c", &buffer[i]);
    }

    buffer[i] = '\0';

    for(i = 0; i < strlen(buffer); i++)
    {
        for(j = 0; isalpha(buffer[i]); j++, i++)
        {
        }

        for(k = i - 1; k >= i - (j / 2); k--)
        {
            a = buffer[k];
            buffer[k] = buffer[2*i - j - k - 1];
            buffer[2*i - j - k - 1] = a;
        }
    }

    printf("%s", buffer);

    return 0;
}
