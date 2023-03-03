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

if (node == NULL)
{
return NULL;
}

grandparent = node->parent->parent;

if(grandparent == NULL)
{
return NULL;
}

if((grandparent->left == NULL) || (grandparent->right == NULL))
{
return NULL;
}


if (grandparent->right == node->parent)
return grandparent->left;
else 
return grandparent->right;


}
