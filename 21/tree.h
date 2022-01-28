#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int Data;

typedef struct Node Node;

struct Node
{
    Data val;
    Node * left;
    Node * right;
};

Node * tree_add(Node * tree, Data x);
Node * tree_search(Node * tree, Data x);
Node * tree_delete(Node * tree, Data x);
void tree_print_symmetric(Node * tree);
void tree_print_direct(Node * tree);
void tree_print_reverse(Node * tree);
Node * tree_destroy(Node * tree);
bool tree_isEmpty(Node * tree);
int tree_dept(Node * tree);
bool isBalanced(Node * tree);
void tree_print_depth(Node * tree, int depth);
