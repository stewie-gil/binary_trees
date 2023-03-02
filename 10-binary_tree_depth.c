#include "binary_trees.h"
#include <stdlib.h>
/**
* binary_tree_depth - checks the depth
* @tree: a node
* Return: size_t
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
if (tree->parent == NULL)
return (0);

binary_tree_depth(tree->parent);
return (binary_tree_depth(tree->parent) + 1);
}
