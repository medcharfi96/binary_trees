#include "binary_trees.h"
/**
 * binary_tree_height - Height of a Binary tree
 *
 * @tree: Pointer to the root node
 * Return: rh or lh
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t somme;

	somme = 0;
	if (tree == NULL)
	return (0);
	else
	{
		if (tree->left != NULL)
		{
			somme = somme + 1;
		}
		if (tree->right != NULL)
		{
			somme += 1;
		}
	}
	return (somme);
}