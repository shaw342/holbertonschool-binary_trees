#include "binary_trees.h"
/**
 * binary_tree_insert_right - function
 * @parent: parent
 * @value: value
 * Return: newNode
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
	{
		return (NULL);
	}
	newNode = malloc(sizeof(binary_tree_t));

	newNode->parent =  parent;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;

	if (parent->right != NULL)
	{
		newNode->right = parent->right;
		newNode->right->parent = newNode;
	}
	parent->right = newNode;
	return (newNode);
}
