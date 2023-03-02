#include "binary_trees.h"
#include <stdlib.h>
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	binary_tree_nodes(tree->left);
	binary_tree_nodes(tree->right);

	if((tree->left != NULL) || (tree->right != NULL))
		return(binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
	else
		return(binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
