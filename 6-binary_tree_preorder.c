#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_preorder - traverse in preorder
 * @tree: node being passed
 * @func: function
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL)
return;

func(tree->n);
binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);


}
