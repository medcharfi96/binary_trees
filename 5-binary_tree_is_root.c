#include "binary_trees.h"
/**
*binary_tree_is_root - root or not
*@node: pointeur
* Return: 1 (mean true)
*/
int binary_tree_is_root(const binary_tree_t *node)
{
if (!node)
return (0);
if (node->parent == NULL)
return (1);
return (0);
}