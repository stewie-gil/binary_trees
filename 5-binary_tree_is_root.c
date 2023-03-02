#include "binary_trees.h"
#include <stdlib.h>
int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL)
return (0);

if ((node->left != NULL) && (node->right != NULL) && (node->parent == NULL))
{
return (1);
}
else
{
return (0);
}
}
