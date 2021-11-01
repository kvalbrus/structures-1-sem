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

    stack_create(stack);

    for(j = 0; j < i; j++)
    {
	if(isSkob(a[j]))
	{
		puts("[1]");
	    printf("%c\n", a[j]);
	    stack_push(stack, a[j]);
puts("[2]");
	    if(stack -> top > 1 && (stack -> data[stack -> top - 2]) == reverse(stack -> data[stack -> top - 1]))
	    {
		    puts("[2.1]");
		printf("%c\n", stack_pop(stack));
		printf("%c\n", stack_pop(stack));
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
