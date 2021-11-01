#include <stdio.h>

struct Student
{
    char surname[50];
    char name[30];
    int group;
    int year;
    char ball[5];
};

void f(struct Student *, struct Student);

int main()
{
    struct Student st[3] = {{"Ivanov", "Ivan", 131, 2003, {4,3,4,4,5}},
	                    {"Petrov", "Petr", 141, 2002, {5,5,5,5,5}},
			    {"Sergeev", "Sergey", 151, 2003, {5,4,5,4,5}}}; 

    struct Student student;
    int i = 0;

    puts("Enter student info:");
    puts("Surname, name, group, year, ball:");

    scanf("%s %s %d %d", student.surname, student.name, &student.group, &student.year);

    for(i = 0; i < 5; i++)
    {
	scanf("%d", &student.ball[i]);
    }
    
    f(st, student);

    return 0;
}

void f(struct Student * st, struct Student student)
{
    int i = 0, j = 0, k = 0;

    for(i = 0; i < 4; i++)
    {
	k = 1;
	if(i == 3)
	{
	    for(j = 0; j < 5; j++)
	    {
		if(5 != student.ball[j])
		{
		    k = 0;
		}
	    }

	    if(k) printf("Otlichnick: %s %c.\n", student.surname, student.name[0]);
	}

	for(j = 0; j < 5; j++)
	{
	    if(5 != st[i].ball[j]) k = 0;
	}

	if(k) printf("Otlichnick: %s %c.\n", st[i].surname, st[i].name[0]);
    }

    for(i = 0; i < 3; i++)
    {
	if(st[i].year == student.year)
	{
	    printf("%s %c. %d\n", st[i].surname, st[i].name[0], st[i].year);
	}
    }

}
