#include "tree.h"

int main()
{
    Node * tree = NULL;
    Data a = 0;
    int s = 0, el = 0;
    char t = 0;

    do
    {
	puts("----------------------------");
        puts("1) IsBalanced");	
	puts("2) Print (direct)");
	puts("3) Print (symmetrical)");
	puts("4) Print (reverse)");
	puts("5) Add element");
	puts("6) Delete element");
	puts("7) IsEmpty");
	puts("8) Delete tree");
	puts("9) Dept");
	puts("10) Print depth");
	puts("11) Exit");
	puts("----------------------------");

	scanf("%d", &s);

	switch(s)
	{	
	    case 1:
		if(isBalanced(tree))
		{
		    puts("YES");
		}
		else
		{
		    puts("NO");
		}

		break;

	    case 2:
		tree_print_direct(tree);
		puts("");

		break;

	    case 3:
		tree_print_symmetric(tree);
		puts("");

		break;

	    case 4:
		tree_print_reverse(tree);
		puts("");

		break;

	    case 5:
		puts("Enter element:");
		scanf("%d", &el);
		tree = tree_add(tree, el);

		break;

	    case 6:
		puts("Enter element:");
		scanf("%d", &el);
		tree = tree_delete(tree, el);

		break;

	    case 7:
		if(tree_isEmpty(tree))
		{
		    puts("Tree is empty!");
		}
		else
		{
		    puts("Tree isn't empty!");
		}

		break;

	    case 8:
		tree = tree_destroy(tree);

		break;

	    case 9:
		el = tree_dept(tree);
		printf("dept = %d\n", el);

		break;

	    case 10:
		puts("Enter depth:");
		scanf("%d", &el);
		tree_print_depth(tree, el);

		break;

	    case 11:
		return 0;
	}

    } while(s != 11);

    return 0;
}
