#include "stack.h"

int main()
{
    Stack * stack;
    stack = stack_create(stack);


    printf("%p\n", stack);

    stack_push(stack, 'a');
    printf("%p\n", stack);

    return 0;
}
