#include "stack.h"

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
	printf("2) Add element\n");
	printf("3) Delete element\n");
	printf("4) Print\n");
	printf("5) Size\n");
	printf("6) Free\n");
	printf("7) End\n");
	printf("--------------------------\n");

	scanf("%d", &a);

	switch(a)
	{
	    case 1:
		if(list_isEmpty(list))
		{
		    printf("Stack is empty!\n");
		}
		else
		{
		    printf("Stack isn't empty!\n");
		}

                break;

	    case 2:
	        puts("Enter element:");
	        scanf("%d", &element);

	        list = list_addElementToStart(list, element);
		break;

	    case 3:
		list = list_deleteElementToStart(list);
		break;

	    case 4:	
		list_print(list);
		break;

	    case 5:
	        printf("size = %d\n", list_length(list));	
		break;

	    case 6:
	        list = list_delete(list);
	        break;	
	}

    }
    while(a != 7);

    list_delete(list);

    return 0;
}
