#include "stack.h"

Stack * stack_create(Stack * stack)
{
    stack = (Stack *) calloc(1, sizeof(Stack));
    stack -> data = (Data *) calloc(1, sizeof(Data));

    stack -> size = 1;
    stack -> top = 0;

    return stack;
}

void stack_push(Stack * stack, Data x)
{
    if(stack -> top >= stack -> size)
    {
	stack -> data = (Data *) realloc(stack -> data, stack -> size + 1);
	stack -> size += 1;
    }

    (stack -> data)[(stack -> top)] = x;
    stack -> top += 1;
}

Data stack_pop(Stack * stack)
{
    Data a;

    if(stack -> top > 0)
    {
	a = (stack -> data)[stack -> top - 1];
	stack -> top -= 1;
	stack -> size -= 1;
	stack -> data = (Data *) realloc(stack -> data, stack -> size);

	return a;
    }

    return 0;
}

Data stack_get(Stack * stack)
{
    return stack -> data[stack -> size - 1];
}

void stack_print(Stack * stack)
{
    int i = 0;

    if(stack -> top > 0)
    {
        for(i = 0; i < stack -> top; i++)
	{
	    printf("%d ", (stack -> data)[i]);
	}

        puts("");	
    }
    else
    {
	puts("Empty stack");
    }    
}

int stack_size(Stack * stack)
{
    return stack -> top;
}

int stack_empty(Stack * stack)
{
    return stack -> top == 0 ? 0 : 1;
}

void stack_clear(Stack * stack)
{
    int i = 0;

    for(i = 0; i < stack -> top; i++)
    {
	(stack -> data)[i] = 0;
    }

    stack -> size = 0;
    stack -> top = 0;
}

void stack_destroy(Stack * stack)
{
    free(stack -> data);
    free(stack);
}
