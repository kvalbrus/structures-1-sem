#include "list.h"

// ready
void list_print(List * list)
{
    List * current = list;

    while(current != NULL)
    {
	printf("%d ", current -> element);
	if(current -> next == NULL) puts("");

	current = current -> next;
    }
}

bool list_isEmpty(List * spisok)
{
    return spisok != NULL ? true : false;
}

List * list_nextTransfer(List * spisok)
{
    return spisok != NULL ? spisok -> next : spisok;
}

bool list_isLastElement(List * spisok)
{
    return spisok -> next == NULL ? true : false;
}

int list_length(List * list)
{
    int length = 0;

    while(list != NULL) length++;

    return length;
}
// ready
List * list_deleteElementToStart(List * list)
{
    List * current = list;
    if(current != NULL)
    {
	list = list -> next;
	free(current);
    }

    return list;
}

// ready
List * list_deleteElementToEnd(List * list)
{
    List * current = list;
    List * prev;

    if(current != NULL)
    {
        while(current -> next != NULL)
        {
	    prev = current;
	    current = current -> next;
        }

        free(current);
        prev -> next = NULL;
    }

    return list;
}

// ready
void list_printToFile(List * list, FILE * file)
{
    List * current = list;

    while(current != NULL)
    {
	fprintf(file, "%d ", current -> element);
	current = current -> next;
    }
}

void list_deleteElement(List * spisok, Element element)
{
    List * current;
    List * previous;

    current = spisok;

    while(current != NULL)
    {
	if(current -> element == element)
	{
	    if(current -> next == NULL)
	    {
		free(current);
		previous -> next = NULL;
	    }
	    else
	    {
		previous -> next = current -> next;
	    }

	    return;
	}

	previous = current;
	current = current -> next;
    }

    printf("Element %d not found!\n", element);
}

// ready
List * list_addElementToStart(List * list, Element element)
{
    List * newElement = (List *) calloc(1, sizeof(List));
    newElement -> element = element;
    newElement -> next = list;

    return newElement;
}

List * list_addElementToEnd(List * list, Element element)
{
    List * newElement = (List *) calloc(1, sizeof(List));
    List * current = list;
    newElement -> element = element;
    newElement -> next = NULL;
    
    while(current -> next != NULL)
    {
	current = current -> next;
    }

    current -> next = newElement;

    return list;
}

List * list_addElementAfter(List * list, Element new, Element element)
{
    List * newElement = (List *) calloc(1, sizeof(List));
    newElement -> element = new;

    List * current = list;

    while(current -> element != element && current != NULL)
    {
	current = current -> next;
    }

    if(current -> element == element)
    {
        newElement -> next = current -> next;
	current -> next = newElement;
    }

    return list;
}

List * list_addElementBefore(List * list, Element new, Element element)
{

}

void list_delete(List * list)
{
    List * next = list -> next;
    while(next != NULL)
    {
	free(list);

	list = next;
    }
}

