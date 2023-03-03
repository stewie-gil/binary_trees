#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *nparent;
	binary_tree_t *nleft;
	binary_tree_t *nright;


	if (node == NULL)
	{
		return (NULL);
	}

	if (node->parent == NULL)
	{
		return (NULL);
	}

	nparent = node->parent;

	if (nparent->left == NULL)
		return NULL;
	else
	{
		
		nleft = nparent->left;

	}
	if (nparent->right == NULL)
		return NULL;
	else
		nright = nparent->right;



	if (nright == node)
		return nleft;
	else
		return nright;

}
