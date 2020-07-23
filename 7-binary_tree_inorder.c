#include "binary_trees.h"
/**
 * binary_tree_inorder - description wallah makit manekteb
 * @tree: pointeur
 * @func: variadic function
 * Return: nothing(mean true)
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (!tree || func == NULL)
	return;
binary_tree_inorder(tree->left, func);
func(tree->n);
binary_tree_inorder(tree->right, func);
}