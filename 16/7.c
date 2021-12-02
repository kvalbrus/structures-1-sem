#include "stack.h"

int days(Stack stack);

int main()
{
    Stack * stack;
    stack = stack_create(stack);
    int num[1000], i = 0, j = 0;

    while(scanf("%d", &num[i]))
    {
	i++;
    }

    for(j = i - 1; j >= 0; j--)
    {
	stack_push(stack, num[j]);
    }

    puts("DAY | TEMP | days");

    for(j = 0; j < i; j++)
    {
	printf("%3d | %4d | %d\n", j + 1, num[j], days(* stack));
	stack_pop(stack);
    }

    return 0;
}

int days(Stack stack)
{
    int i = 0, j = stack.top, num = 0;
    if(stack.top == 0) return 0;
    else
    {
	num = stack_pop(&stack);
	for(i = 0; i < j - 1; i++)
	{
	    if(num < stack_pop(&stack))
	    {
		num++;
		return num;
	    }
	    else
	    {
		num++;
	    }
	}

	return num;
    }
}
