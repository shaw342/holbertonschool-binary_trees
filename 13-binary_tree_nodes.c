#include "binary_trees.h"
/**
 * binary_tree_nodes - function
 * @tree: tree
 * Return: size_t
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL && tree->right != NULL)
	{
		return (1 + (binary_tree_nodes(tree->left) +
					binary_tree_nodes(tree->right)));
	}

	if (tree->left)
	{
		return (binary_tree_nodes(tree->left) + 1);
	}

	if (tree->right)
	{
		return (binary_tree_nodes(tree->right) + 1);
	}

	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));

}
