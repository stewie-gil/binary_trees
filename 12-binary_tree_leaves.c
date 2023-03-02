#include "binary_trees.h"
#include <stdlib.h>
/**
* binary_tree_leaves - count leaves
* @tree: node
* Return: size_t
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}

binary_tree_leaves(tree->left);
binary_tree_leaves(tree->right);

if ((tree->left == NULL) && (tree->right == NULL))
{
return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right) + 1);
}
else
return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
