#include <stdio.h>
#include <stdlib.h>

typedef int Data;

typedef struct Node Node;

struct Node
{
    Data val;
    Node * left;
    Node * right;
};

Node * tree_add(Node * tree, Data x);
void tree_print_symmetric(Node * tree);
void tree_print_direct(Node * tree);
void tree_destroy(Node * tree);
