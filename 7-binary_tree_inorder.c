#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_inorder - traverse inorder
 * @func: function
 * @tree:node being passed
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{

if (tree == NULL)
{
return;
}
if (func == NULL)
return;

binary_tree_inorder(tree->left, func);
func(tree->n);
binary_tree_inorder(tree->right, func);
}
