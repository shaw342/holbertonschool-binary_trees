#include "binary_trees.h"
#include "binary_trees.h"
/**
 * binary_tree_height - function
 * @tree: tree
 * Return: a or b
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t a = 0, b = 0;


	if (tree == NULL)
	{
		return (0);
	}

	a = binary_tree_height(tree->left);
	b = binary_tree_height(tree->right);

	if (a > b)
	{
		return (a + 1);
	}
	else
	{
		return (b + 1);
	}

}
/**
 * binary_tree_balance - function
 * @tree: tree
 * Return: left - right
 */
int binary_tree_balance(const binary_tree_t *tree)
{

	if (!tree)
		return (0);

	return (binary_tree_height(tree->left) -
			binary_tree_height(tree->right));
}
