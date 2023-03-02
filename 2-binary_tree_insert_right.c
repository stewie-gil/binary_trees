#include "binary_trees.h"
#include <stdlib.h>
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
/*create new node*/

binary_tree_t *newnode;
binary_tree_t *temp;

newnode = binary_tree_node(parent, value);

if (newnode == NULL)
{
return NULL;
}

if (parent->right == NULL)
{
  parent->right = (newnode);

}
else
{
temp = parent->right;
parent->right = newnode;
newnode->right = temp;
}
 return (newnode);

}
