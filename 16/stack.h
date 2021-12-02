#include <stdio.h>
#include <stdlib.h>

typedef int Data;
typedef struct stack Stack;

struct stack
{
    int size;
    int top;
    Data * data;
};

Stack * stack_create(Stack * stack);
void stack_push(Stack * stack, Data x);
Data stack_pop(Stack * stack);
Data stack_get(Stack * stack);
void stack_print(Stack * stack);
int stack_size(Stack * stack);
int stack_empty(Stack * stack);
void stack_clear(Stack * stack);
void stack_destroy(Stack * stack);
