#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_postorder - postorder traversal
 * @tree: node to pass
 * @func : function
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree && func)
{
func(tree->n);
binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);
}
}
