#include "binary_trees.h"
/**
* binary_tree_node - create new node
* @parent: pointeur
* @value: int
* Return: binary_tree_t (mean true)
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *nouveau = malloc(sizeof(binary_tree_t));
if (nouveau != NULL)
{
nouveau->n = value;
nouveau->parent = parent;
nouveau->left = NULL;
nouveau->right = NULL;
return (nouveau);
}
return (NULL);
}