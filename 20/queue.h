#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int Element;

struct list
{
    Element element;
    struct list * next;
};


typedef struct list List;

Element list_first(List * list);
void list_print(List * list);
bool list_isEmpty(List * spisok);
List * list_addElementToEnd(List * list, Element element);
List * list_deleteElementToStart(List * list);
int list_length(List * list);
List * list_delete(List * list);
