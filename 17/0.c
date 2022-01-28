#include "list.h"

int main()
{
    List * list = NULL;
    FILE * file;
    char name[100];
    int a = 0, element = 0, el = 0;

    do
    {
	printf("-------------------------\n");
	printf("1) isEmpty\n");
	printf("2) Add element to start\n");
	printf("3) Add element to end\n");
	printf("4) Add element before\n");
	printf("5) Add element after\n");
	printf("6) Delete start element\n");
	printf("7) Delete end element\n");
	printf("8) Delete element\n");
	printf("9) Print to file\n");
	printf("10) Print\n");
	printf("11) Size\n");
	printf("12) Free\n");
	printf("13) End\n");
	printf("--------------------------\n");

	scanf("%d", &a);

	switch(a)
	{
	    case 1:
		if(list_isEmpty(list))
		{
		    printf("List is empty!\n");
		}
		else
		{
		    printf("List isn't empty!\n");
		}

                break;

	    case 2:
		puts("Enter element:");
		scanf("%d", &element);

		list = list_addElementToStart(list, element);
		break;

	    case 3:
	        puts("Enter element:");
	        scanf("%d", &element);

	        list = list_addElementToEnd(list, element);
		break;
	  
	    case 4:
		puts("Enter new element:");
		scanf("%d", &element);

		puts("Enter element:");
		scanf("%d", &el);

		list = list_addElementBefore(list, element, el);
		break;

	    case 5:
		puts("Enter new element:");
		scanf("%d", &element);
		
		puts("Enter element:");
		scanf("%d", &el);

		list = list_addElementAfter(list, element, el);
		break;

	    case 6:
		list = list_deleteElementToStart(list);
		break;

	    case 7:
	        list = list_deleteElementToEnd(list);
	        break;

	    case 8:
		puts("Enter element:");
		scanf("%d", &element);

		list = list_deleteElement(list, element);
		break;

	    case 9:
		puts("Enter file name:");
		scanf("%s", name);

		file = fopen(name, "w");

		list_printToFile(list, file);
		break;

	    case 10:	
		list_print(list);
		break;

	    case 11:
	        printf("size = %d\n", list_length(list));	
		break;

	    case 12:
	        list = list_delete(list);
	        break;	
	}

    }
    while(a != 13);

    list_delete(list);

    return 0;
}
