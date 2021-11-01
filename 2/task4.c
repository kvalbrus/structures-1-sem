#include <stdio.h>
#include <math.h>

int main()
{
    const double PRICE = 10.54;

    int count1 = 0, count2 = 0, count3 = 0;
    double money1 = 0, money2 = 0, money3 = 0;

    printf("Enter numbers of products:\n");
    scanf("%d %d %d", &count1, &count2, &count3);

    printf("Enter how much each customer paid:\n");
    scanf("%lf %lf %lf", &money1, &money2, &money3);

    double change1 = money1 - (PRICE * count1);
    double change2 = money2 - (PRICE * count2);
    double change3 = money3 - (PRICE * count3);

    double remains1 = 0, remains2 = 0, remains3 = 0;
    double wholePart1 = 0, wholePart2 = 0, wholePart3 = 0;

    remains1 = modf(change1 * 10, &wholePart1);
    remains2 = modf(change2 * 10, &wholePart2);
    remains3 = modf(change3 * 10, &wholePart3);

    double total = remains1 / 10 + remains2 / 10 + remains3 / 10;

    printf("the store received: %.2lf\n", total);

    return 0;
}
