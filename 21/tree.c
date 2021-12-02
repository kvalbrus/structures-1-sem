#include "tree.h"

Node * tree_add(Node * tree, Data x)
{
    if(tree == NULL)
    {
		tree = (Node *) calloc(1, sizeof(Node));
		tree -> val = x;
		tree -> left = NULL;
		tree -> right = NULL;
    }
	else if(x < tree -> val)
	{
		tree -> left = tree_add(tree -> left, x);
	}
	else if(x > tree -> val)
	{
		tree -> right = tree_add(tree -> right, x);
	}

	return tree;
}

void tree_print_symmetric(Node * tree)
{
	if(tree == NULL)
	{
		return;
	}

	tree_print_symmetric(tree -> left);
	printf("%d ", tree -> val);
	tree_print_symmetric(tree -> right);
}

void tree_print_direct(Node * tree)
{
	if(tree == NULL)
	{
		return;
	}

	printf("%d ", tree -> val);
	tree_print_direct(tree -> left);
	tree_print_direct(tree -> right);
}

void tree_destroy(Node * tree)
{
	if(tree != NULL)
	{
		tree_destroy(tree -> left);
		tree_destroy(tree -> right);
		free(tree);
	}
}
