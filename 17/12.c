#include "list.h"

//void alf(List * students);
Student * sta(List * students);
Student * ml(List * students);

int main()
{
    List * students;
    Student * st;
    Student * St, * Ml;
    int a = 0;

    do
    {
	puts("---------------------------------------");
	puts("1) Add steudent");
	puts("2) Alfavit");
	puts("3) Srednii ball po gruppam");
	puts("4) Starshii and mladshii");
	puts("5) Luchshii student");
	puts("6) End");
	puts("---------------------------------------");
	
	scanf("%d", &a);

	switch(a)
	{
	    case 1:
                st = (Student *) calloc(1, sizeof(Student));
	        puts("Enter Name:");
	        scanf("%s", st -> name);
	        puts("Enter year, course, number group:");
	        scanf("%d %d %d", &(st -> year), &(st -> course), &(st -> group));

	        puts("Enter scores:");
	        scanf("%d %d %d %d %d", &(st -> scores[0]), &(st -> scores[1]), &(st -> scores[2]),
		    &(st -> scores[3]), &(st -> scores[4]));
		
	        students = list_addElementToEnd(students, st);

		break;

	    case 2:
//	        alf(students);
		list_print(students);

		break;

	    case 4:
		St = sta(students);
		Ml = ml(students);

		printf("Starshii: %s %d\
		        Mladshii: %s %d\n", St -> name, St -> year, Ml -> name, Ml -> year);

		break;
	}

    }
    while(a != 6);
}

Student * sta(List * students)
{
    int max = 0;
    List * current = students;
    Student * student;

    while(current != NULL)
    {
	if(current -> element -> year > max)
	{
	    student = current -> element;
	    max = student -> year;
	}
    }

    return student;
}

Student * ml(List * students)
{
    int min = 0;
    List * current;
    Student * student;

    while(current != NULL)
    {
	if(current -> element -> year < min)
	{
	    student = current -> element;
	    min = student -> year;
	}
    }

    return student;
}
