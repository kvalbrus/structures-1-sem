#include "list.h"

int main()
{
    List * list = NULL;
    List * current;
    List * prev;
    int n = 0, i = 0, num = 0;

    puts("Enter number:");
    scanf("%d", &n);

    puts("Enter list");
    for(i = 0; i < n; i++)
    {
	current = (List *) calloc(1, sizeof(List));
	current -> next = NULL;
	scanf("%d", &current -> element);

	if(list == NULL) list = current;
	else prev -> next = current;

	prev = current;
    }

    list_print(list);

    puts("Enter number to list of start");
    scanf("%d", &num);

    list = list_addElementToStart(list, num);
    list_print(list);

    return 0;
}
