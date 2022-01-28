#include "stack.h"


bool list_isEmpty(List * spisok)
{
    return spisok == NULL ? true : false;
}

void list_print(List * list)
{
    if(list == NULL)
    {
	printf("Stack is empty!\n");
	return;
    }

    List * current = list;

    while(current != NULL)
    {
	printf("%d ", current -> element);
	if(current -> next == NULL) puts("");

	current = current -> next;
    }
}

int list_length(List * list)
{
    int length = 0;

    while(list != NULL)
    {
	length++;
	list = list -> next;
    }

    return length;
}

List * list_deleteElementToStart(List * list)
{
    List * current;

    if(list == NULL)
    {
	return list;
    }

    current = list -> next;

    free(list);

    return current;
}

List * list_addElementToStart(List * list, Element element)
{
    if(list == NULL)
    {
	list = (List *) calloc(1, sizeof(List));
	list -> element = element;
	list -> next = NULL;

	return list;
    }

    List * newElement = (List *) calloc(1, sizeof(List));
    newElement -> element = element;
    newElement -> next = list;

    return newElement;
}

List * list_delete(List * list)
{
    if(list == NULL) return list;

    List * next = list -> next;
    List * current = list;

    while(current != NULL)
    {
	free(current);
	current = next;

	if(next != NULL)
	{
	    next = next -> next;
	}
    }

    return current;
}
