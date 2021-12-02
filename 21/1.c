#include "tree.h"

int main()
{
    Node * tree = NULL;
    Data a = 0;

    puts("Enter trees:");
    while(scanf("%d", &a) == 1)
    {
	tree = tree_add(tree, a);
    }

    tree_print_direct(tree);

    return 0;
}
