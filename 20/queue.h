#include <stdio.h>
#include <stdlib.h>

typedef int Item;

typedef struct node
{
    Item element;
    struct node * next;
} Node;

typedef struct queue
{
    Node * front;
    Node * rear;
    int items;
} Queue;

Queue add(Queue * queue, Node * elem);
Queue remove(Queue * queue);
Item print(Queue * queue);
int size(Queue * queue);
void clear(Queue * Queue);
void freeQueue(Queue * queue);
