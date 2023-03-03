#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/* checks height*/
int height(const binary_tree_t *tree)
{
	int a = 0;
	int b = 0;

	if (tree == NULL)
		return 0;

	a = height(tree->left);
	b = height(tree->right);

	if (a > b)
		return (a+1);
	else
		return (b+1);

}

/*uses height to check for balance*/
int balance_func(const binary_tree_t *tree)
{
	if (height(tree->left) == height(tree->right))
	{
		return (1);
	}
	else 
		return (0);
}




/*checks for full root nodes*/

int full_func(const binary_tree_t *tree)
{
	int a = 0;
	int b = 0;

	if (tree == NULL)
	{
		return 0;
	}

	if ((tree->left == NULL) && (tree->right == NULL))
		return (1);

	a = full_func(tree->left);
	b = full_func(tree->right);

	/* min (a,b) */
	if (a < b)
		return (a);
	else
		return b;
}




int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int balance = 0;
	int full = 0;

	/** balance function **/

	balance = balance_func(tree);

	full = full_func(tree);



	if ((balance == 1) && (full == 1))
	{
		return (1);
	}
	else 
		return (0);
}
