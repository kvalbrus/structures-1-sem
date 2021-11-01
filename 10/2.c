#include <stdio.h>

struct Date
{
    int month;
    int year;
};

void f(struct Date *);

int main()
{
    struct Date dates[3] = {{1, 2000}, {3, 2002}, {0,0}};
    f(dates);
}

void f(struct Date * dates)
{
    puts("Enter date: month and year:");
    scanf("%d %d", &dates[2].month, &dates[2].year);

    int date1 = (dates[0].year * 10) + dates[0].month;
    int date2 = (dates[1].year * 10) + dates[1].month;
    int date3 = (dates[2].year * 10) + dates[2].month;

    if(date1 > date2)
    {
	if(date3 <= date1 && date3 >= date2)
	{
	    puts("YES");
	}
	else
	{
	    puts("NO");
	}
    }
    else
    {
	if(date3 <= date2 && date3 >= date1)
	{
	    puts("YES");
	}
	else
	{
	    puts("NO");
	}
    }
}
