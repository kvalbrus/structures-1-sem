#include "list.h"
#define NAME "8.txt"

int main()
{
    List * list = NULL;
    List * current;
    List * prev;
    FILE * file = fopen(NAME, "w");
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

    list_printToFile(list, file);

    return 0;
}
