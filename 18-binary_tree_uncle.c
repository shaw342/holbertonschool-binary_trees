#include "binary_trees.h"
/**
 * binary_tree_uncle - function
 * @node: node
 * Return: NULL or uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	if (node->parent)
	{

		node = node->parent;
		if (!node->parent)
			return (NULL);
		if (node->parent->left == node)
		{
			return (node->parent->left);
		}
		if (node->parent->right == node)
		{
			return (node->parent->right);
		}
	}
	return (NULL);
}
