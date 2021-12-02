#include "list.h"

int main()
{
    List * list;
    FILE * file;
    char name[100];
    int a = 0, element = 0;

    do
    {
	printf("-------------------------\n");
	printf("1) Create\n");
	printf("2) Add element to start\n");
	printf("3) Add element to end\n");
	printf("4) Add element before\n");
	printf("5) Add element after\n");
	printf("6) Delete start element\n");
	printf("7) Delete end element\n");
	printf("8) Delete element\n");
	printf("9) Print to file\n");
	printf("10) Print\n");
	printf("11) Free\n");
	printf("12) End\n");
	printf("--------------------------\n");

	scanf("%d", &a);

	switch(a)
	{
	    case 1:
                break;

	    case 2:
		puts("Enter element:");
		scanf("%d", &element);

		list_addElementToStart(list, element);
		break;

	    case 3:
	        puts("Enter element:");
	        scanf("%d", &element);

	        list_addElementToEnd(list, element);
	  
	    case 4:

	    case 5:


	    case 6:
		list_deleteElementToStart(list);
		break;

	    case 7:
	        list_deleteElementToEnd(list);
	        break;

	    case 9:
		puts("Enter file name:");
		scanf("%s", name);

		file = fopen(name, "r");

		list_printToFile(list, file);
		break;

	    case 10:	
		list_print(list);
		break;

	    case 11:	



	}

    }
}
