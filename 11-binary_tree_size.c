#include "binary_trees.h"
/**
 * binary_tree_size - function
 * @tree: tree
 * Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
	}
}
