#include "queue.h"

int main()
{
    List * list = NULL;
    int i = 0, k = 0, kills = 0, people = 0, y = 0;

    scanf("%d %d", &people, &kills);

    for(i = 1; i <= people; i++)
    {
	list = list_addElementToEnd(list, i);
    }

    while(!list_isEmpty(list))
    {
	k++;

	if(k == kills)
	{
	    list = list_deleteElementToStart(list);
	    k = 0;

	    if(list_length(list) == 1) break;
	}
	else
	{
	    y = list_first(list);
	    list = list_deleteElementToStart(list);
	    list = list_addElementToEnd(list, y);
	}
    }

    list_print(list);

    return 0;
}
