#include "tree.h"

Node * tree_add(Node * tree, Data x)
{
    if(tree == NULL)
    {
	tree = (Node *) calloc(1, sizeof(Node));
	tree -> right = NULL;
	tree -> left = NULL;
	tree -> val = x;
    }
    else if(tree -> val > x)
    {
	tree -> left = tree_add(tree -> left, x);
    }
    else if(tree -> val < x)
    {
	tree -> right = tree_add(tree -> right, x);
    }

    return tree;
}

Node * tree_search(Node * tree, Data x)
{
    if(tree -> val == x) return tree;

    if(tree -> left == NULL && tree -> right != NULL)
    {
	if(tree -> right -> val == x)
	{
	    return tree;
	}
	else
	{
	    tree = tree_search(tree -> right, x);
	}
    }
    else if(tree -> left != NULL && tree -> right == NULL)
    {
	if(tree -> left -> val == x)
	{
	    return tree;
	}
	else
	{
            tree = tree_search(tree -> right, x);	
	}
    }
    else
    {
	if(tree -> right -> val == x || tree -> left -> val == x)
	{
	    return tree;
	}
	else if(tree -> val > x)
	{
	    tree = tree_search(tree -> left, x);
	}
	else if(tree -> val < x)
	{
	    tree = tree_search(tree -> right, x);
	}
    }

    return tree;
}

Node * tree_delete(Node * root, Data x)
{
    if(root == NULL)
    {
	puts("Not found!");
	
	return root;
    }

    if(root -> val == x)
    {
	free(root);
	root = NULL;

	return root;
    }

    root = tree_search(root, x);

    if(root == NULL)
    {
	puts("Not found!");
	
	return root;
    }

    if(root -> right -> val == x)
    {
	free(root -> right);
	root -> right = NULL;
    }  
    else
    {
	free(root -> left);
	root -> left = NULL;
    }

    return root;
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
    if(tree != NULL)
    {
        printf("%d ", tree -> val);
        tree_print_direct(tree -> left);
        tree_print_direct(tree -> right);
    }
}

void tree_print_reverse(Node * tree)
{
    if(tree == NULL)
    {
	return;
    }

    tree_print_reverse(tree -> left);
    tree_print_reverse(tree -> right);
    printf("%d ", tree -> val);
}

Node * tree_destroy(Node * tree)
{
    if(tree != NULL)
    {
        tree_destroy(tree -> left);
	tree_destroy(tree -> right);
	free(tree);
	tree = NULL;
    }

    return tree;
}

bool tree_isEmpty(Node * tree)
{
    return tree == NULL ? true : false;
}

int tree_dept(Node * tree)
{
    int max = 0, i = 0, j = 0;

    if(tree == NULL) return -1;
    if(tree -> left != NULL)
    {
	i = tree_dept(tree -> left);
    }
    else
    {
	i = -1;
    }

    if(tree -> right != NULL)
    {
	j = tree_dept(tree -> right);
    }
    else
    {
	j = -1;
    }

    max = i > j ? i : j;

    return max + 1;
}

bool isBalanced(Node * tree)
{
    if(tree == NULL) return true;

    if(tree -> left == NULL && tree -> right == NULL) return true;

    if(tree -> left == NULL && tree -> right != NULL)
    {
	if(tree -> right -> left == NULL && tree -> right -> right == NULL)
	{
	    return true;
	}
	else return false;
    }

    if(tree -> left != NULL && tree -> right == NULL)
    {
	if(tree -> left -> right == NULL && tree -> left -> left == NULL)
	{
            return true;
	}
	else return false;
    }

    if(tree -> left != NULL && tree -> right != NULL)
    {
	return (isBalanced(tree -> left) && isBalanced(tree -> right));
    }
}

void tree_print_depth(Node * tree, int depth)
{
    if(tree == NULL) return;

    if(depth == 0)
    {
        printf("%d ", tree -> val);
    }

    if(depth > 0)
    {
        if(tree -> left != NULL)
	{
	    tree_print_depth(tree -> left, depth - 1);
	}

	if(tree -> right != NULL)
	{
            tree_print_depth(tree -> right, depth - 1);
	}
    }
}
