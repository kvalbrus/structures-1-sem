#include "queue.h"

Queue * add(Queue * queue, Node * elem)
{
    queue -> rear = elem;
    elem -> next = NULL;

    return queue;
}

Queue * remove(Queue * queue)
{
    Node * a = queue -> front;
    queue -> front = a -> next;

    free(a);

    return queue;
}

void print(Queue * queue)
{
    printf("%d\n", queue -> front -> elem);
}

int size(Queue * queue)
{
    int size = 0;
    Node * a = queue -> front;

    while(a != NULL)
    {
	size++;
	a = a -> next;
    }

    return size;
}

void clear(Queue * queue)
{
    
}
