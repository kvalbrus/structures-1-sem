#include "list.h"

List * f(List * list);

int main()
{
    List * list = NULL;
    List * current;
    List * prev;
    int n = 0, i = 0, num = 0;

    puts("Enter number:");
    scanf("%d", &n);

    if(n > 0) puts("Enter list");
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


    return 0;
}

List * f(List * list)
{
    List * current = list;
    List * current2 = list;

    while(current != NULL)
    {
        current2 = current;
        while(current2 != NULL)
	{
	    current2 = current2 -> next;
	}	

	current2 -> next = 
    }
}
