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
/**
 * binary_tree_is_perfect - function
 * @tree: tree
 * Return: false
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int is_perfect;

	is_perfect = binary_tree_balance(tree);
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL && is_perfect == 0)
		return (binay_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));

	return (0);
}
