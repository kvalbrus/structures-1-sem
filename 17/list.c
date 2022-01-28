#include "list.h"

// ready
void list_print(List * list)
{
    if(list == NULL)
    {
	printf("List is empty!\n");
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

bool list_isEmpty(List * spisok)
{
    return spisok == NULL ? true : false;
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

    while(list != NULL)
    {
	length++;
	list = list -> next;
    }

    return length;
}
// ready
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

// ready
List * list_deleteElementToEnd(List * list)
{
    List * current = list;
    List * prev;

    if(list == NULL)
    {
	return list;
    }

    if(list -> next == NULL)
    {
	free(list);
	list = NULL;

	return list;
    }

    while(current -> next != NULL)
    {
	prev = current;
	current = current -> next;
    }

    free(current);
    prev -> next = NULL;
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

List * list_deleteElement(List * list, Element element)
{
    List * current;
    List * previous;

    if(list == NULL)
    {
	return list;
    }

    current = list;

    if(list -> element == element)
    {
	previous = list;
	list = list -> next;
	free(previous);

	return list;
    }

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

	    return list;
	}

	previous = current;
	current = current -> next;
    }

    printf("Element %d isn't found!\n", element);

    return list;
}

// ready
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

List * list_addElementToEnd(List * list, Element element)
{
    if(list == NULL)
    {
	list = (List *) calloc(1, sizeof(List));
	list -> element = element;
	list -> next = NULL;

	return list;
    }

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
    if(list == NULL)
    {
	printf("Element isn't found!\n");

	return list;
    }

    List * newElement;

    List * current = list;

    while(current -> element != element && current != NULL)
    {
	current = current -> next;
	if(current == NULL) break;
    }

    if(current == NULL)
    {
	printf("Element isn't found!\n");

	return list;
    }

    if(current -> element == element)
    {
	newElement = (List *) calloc(1, sizeof(List));
	newElement -> element = new;
        newElement -> next = current -> next;
	current -> next = newElement;
    }

    return list;
}

List * list_addElementBefore(List * list, Element new, Element element)
{
    if(list == NULL)
    {
	printf("Element isn't found!\n");
	
	return list;
    }	    

    List * current = list;
    List * prev;
    List * newElement;

    while(current != NULL && current -> element != element)
    {
	prev = current;
	current = current -> next;
	if(current == NULL) break;
    }

    if(current == NULL)
    {
	printf("Element isn't found!\n");

	return list;
    }

    if(current -> element == element)
    {
        newElement = (List *) calloc(1, sizeof(List));
	newElement -> element = new;
	newElement -> next = current;
	prev -> next = newElement;
    }

    return list;
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
