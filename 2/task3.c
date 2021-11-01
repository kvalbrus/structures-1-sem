#include <stdio.h>

int main()
{
    printf("Enter hours, minutes, seconds:\n");

    int hours = 0, minutes = 0, seconds = 0;

    scanf("%d %d %d", &hours, &minutes, &seconds);

    printf("%02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
