#include "binary_trees.h"
/**
 * binary_tree_depth - function
 * @tree: tree
 * Return: a
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t a = 0;

	if (tree == NULL)
	{
		return (0);
	}

	while (tree->parent)
	{
		a++;
		tree = tree->parent;
	}
	return (a);
}
