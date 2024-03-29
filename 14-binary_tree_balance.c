#include "binary_trees.h"
#include <stdlib.h>
/**
 * height_of_tree - measures the height of the tree
 * @tree: a pointer to the root of the node
 * Return: size_t
 */
size_t height_of_tree(const binary_tree_t *tree)
{
size_t l = 0;
size_t r = 0;

if (tree == NULL)
{
return (0);
}


l = height_of_tree(tree->left);
r = height_of_tree(tree->right);

if (l > r)
{
return (l + 1);
}
else
{
return (r + 1);
}
}

/**
 * binary_tree_balance - measures the height of the tree
 * @tree: a pointer to the root of the node
 * Return: integer
 */
int binary_tree_balance(const binary_tree_t *tree)
{
if (tree)
{
return (height_of_tree(tree->left) - height_of_tree(tree->right));
}
return (0);
}
