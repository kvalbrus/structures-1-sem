#include "stack.h"

int main()
{
    int s = 0, element = 0;
    Stack * stack;

    do
    {
	printf("----------------------------------\n");
	printf("1) Create\n");
	printf("2) Add\n");
	printf("3) Delete\n");
	printf("4) Top element\n");
	printf("5) Size\n");
	printf("6) IsEmpty\n");
	printf("7) Printf\n");
	printf("8) Free\n");
	printf("9) Exit\n");
	printf("----------------------------------\n");

	scanf("%d", &s);

	switch(s)
	{
	    case 1:
                stack = stack_create(stack);
	        break;

	    case 2:
		puts("Enter element:");
		scanf("%d", &element);
		stack_push(stack, element);
		break;
	
	    case 3:
		stack_pop(stack);
		break;
		
	    case 4:
	        printf("Top element: %d\n", stack_get(stack));
	        break;
	    
	    case 5:
	        printf("Size: %d\n", stack_size(stack));
	        break;

	    case 6:
	       if(stack_empty(stack))
	       {
		   printf("Stack is not empty!\n");
	       }	       
	       else
	       {
		   printf("Stack is empty!\n");
	       }

	       break;
	   
	    case 7:
	       stack_print(stack);
	       break;

	    case 8:
	       stack_clear(stack);
	       stack_destroy(stack);
	       break;

	    case 9:
	       return 0;

            defautl:
	       break;

	}
    }
    while(s != 9);
}
