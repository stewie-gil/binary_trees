#include "binary_trees.h"
#include <stdlib.h>
/**
* binary_tree_insert_left - inserts a node to the left-child of another node
* 
*
* @value: n
* @parent: pointer to the parent node
* Return: newnode
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
/*creating new node*/
binary_tree_t *newnode;
binary_tree_t *temp;

newnode = binary_tree_node(parent, value);

if (newnode==NULL)
{
return NULL;
}


if (parent->left == NULL)
{

parent->left = newnode;
}
else
{
temp =	parent->left;
parent->left=newnode;
newnode->left = temp;
}

return newnode;


}
