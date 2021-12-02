#include "stack.h"
#include <stdbool.h>

bool isSkob(char a);
char reverse(char a);

int main()
{
    Stack * stack;
    char a[100];
    int i = 0, j = 0;

    puts("Enter:");
    for(i = 0;; i++)
    {
	scanf("%c", &a[i]);

	if(a[i] == '*')
	{
	    break;
	}
    }

    stack = stack_create(stack);

    for(j = 0; j < i; j++)
    {
	if(isSkob(a[j]))
	{
	    stack_push(stack, a[j]);

	    if(stack -> top > 1 && (stack -> data[stack -> top - 2]) == reverse(stack -> data[stack -> top - 1]))
	    {
		stack_pop(stack);
		stack_pop(stack);
	    }
	}
    }

    if(stack -> top == 0)
    {
	puts("Correct!");
    }
    else
    {
	puts("Incorrect!");
    }

    return 0;
}

bool isSkob(char a)
{
    if(a == '(' || a == ')' || a == '<' || a == '>' || a == '{' || a == '}' || a == '[' || a == ']')
    {
	return true;
    }

    return false;
}

char reverse(char a)
{
    switch (a)
    {
	case ')':
	    return '(';
	    
        case ']':
	    return '[';
	
	case '}':
	    return '{';

	case '>':
            return '<';

        default:
            return '\0';	    
    }
}
