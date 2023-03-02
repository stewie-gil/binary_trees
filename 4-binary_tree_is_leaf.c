#include "binary_trees.h"
#include <stdio.h>
/**
* binary_tree_is_leaf- checks for leaf
* @node : node
* Return: Always 0 (success)
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node == NULL)
return (0);
if ((node->right == NULL) && (node->left == NULL))
{
return (1);
}
else
return (0);
}
