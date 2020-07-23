#include "binary_trees.h"
/**
*binary_tree_insert_left - insert in left
*@parent: pointeur
*@value: int
*Return: binary_tree(mean true)
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *nouveau;
if (parent == NULL)
return (NULL);
nouveau = malloc(sizeof(binary_tree_t));
if (nouveau != NULL)
{
	if (parent->left != NULL)
	{
		nouveau->left = parent->left;
		parent->left = nouveau;
	}
parent->left = nouveau;
}
return (NULL);
}