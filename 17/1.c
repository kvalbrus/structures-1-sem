#include "list.h"

int main()
{
    List * list = NULL;
    List * current;
    List * prev;

    int i = 0;

    for(i = 0; i < 10; i++)
    {
	current = (List *) calloc(1, sizeof(List));
	current -> next = NULL;
	scanf("%d", &current -> element);

	if(list == NULL) list = current;
	else prev -> next = current;	

	prev = current;
    }
 
    list_print(list);

    free(prev);

    return 0;
}
