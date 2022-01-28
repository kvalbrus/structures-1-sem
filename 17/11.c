#include "list.h"

List * f(List * list);

int main()
{
    List * list = NULL;
    List * a = NULL;
    List * b, * c;

    int n = 0, i = 0, x = 0;

    puts("Enter number");
    scanf("%d", &n);

    puts("Enter list:");
    for(i = 0; i < n; i++)
    {
	scanf("%d", &x);

	list = list_addElementToEnd(list, x);
    }

    for(b = list; b != NULL; b = b -> next)
    {
	a = list_addElementToEnd(a, b -> element);

	for(c = list; c != b; c = c -> next)
	{
	    a = list_addElementToEnd(a, c -> element);
	}
    }

    list_print(a);

    return 0;
}
