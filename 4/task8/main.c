#include <stdio.h>

int main()
{
    int summ = 0, num = 0, i = 0;

    while(scanf("%d", &num))
    {
	summ += num;
	i++;
    }

    printf("Summ = %d, kol-vo = %d\n", summ, i);

    return 1;
}
