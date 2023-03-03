#include "binary_trees.h"
#include <stdlib.h>

int height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return 0;
	}
	int l = height(tree->left);
	int r = height(tree->right);

	if (l > r)
	{
		return (l + 1 );
	}
	else 
	{
		return (r + 1); 
	}

	return 0;
}

int binary_tree_balance(const binary_tree_t *tree)
{
  if (tree)
    {
  return height(tree->left) - height(tree->right);
    }
  return 0;
}
