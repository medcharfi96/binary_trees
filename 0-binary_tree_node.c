#include "binary_trees.h"
/**
* binary_tree_node - create new node
* @parent: pointeur
* @value: int
* Return: binary_tree_t (mean true)
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *newnode = malloc(sizeof(binary_tree_t));
if (newnode != NULL)
{
newnode->n = value;
newnode->parent = parent;
newnode->left = NULL;
newnode->right = NULL;
return (newnode);
}
return (NULL);
}