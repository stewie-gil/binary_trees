#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root of node to the tree to check
 * Return: an int
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
int a = 0;
int b = 0;

if (tree == NULL)
{
return (0);
}
if ((tree->left == NULL) && (tree->right == NULL))
{
return (1);
}
a = binary_tree_is_full(tree->left);
b = binary_tree_is_full(tree->right);
/* min (a,b) */
if (a < b)
return (a);
else
return (b);
}
