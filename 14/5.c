#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    char fio[100];
    int group;
    char ball[5];
};

int comparator(const void * a, const void * b);

int main()
{
    struct student st[4] = {{"Ivanov Petr Ivanovich", 345, {'4','5','3','4','4'}},
	                    {"Petrov Petr Petrovich", 344, {'5','4','3','4','5'}},
			    {"Bobrov Ival Olegovich", 330, {'5','5','5','5','4'}},
			    {"Ivanov Ivan Olegovich", 654, {'4','4','4','4','4'}}};
    int i = 0;

    qsort(st, 4, sizeof(struct student), comparator);

    for(i = 0; i < 4; i++)
    {
	printf("%s\n", st[i].fio);
    }

    return 0;
}

int comparator(const void * a, const void * b)
{
    int i = 0;
    const char * x1;
    const char * x2;
    
    x1 = ((struct student*)a) -> fio;
    x2 = ((struct student*)b) -> fio;
    
    return strcmp(x1,x2);
}

