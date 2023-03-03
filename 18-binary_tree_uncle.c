#include "binary_trees.h"
#include <stdlib.h>
/**
* binary_tree_uncle - finds the uncle of a node
* @node: pointer to the node to find the uncle
* Return: pointer to a node
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{

binary_tree_t *grandparent;
binary_tree_t *leftgrandson;
binary_tree_t *rightgrandson;

if (node == NULL)
{
return (NULL);
}
if (node->parent == NULL)
return (NULL);

grandparent = node->parent->parent;

if (grandparent == NULL)
{
return (NULL);
}

if ((grandparent->left == NULL) || (grandparent->right == NULL))
{
return (NULL);
}
else
{
leftgrandson = grandparent->left;
rightgrandson = grandparent->right;
}

if (grandparent->right == node->parent)
return (leftgrandson);
else
return (rightgrandson);
}
