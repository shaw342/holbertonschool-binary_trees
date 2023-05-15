#include "binary_trees.h"
/**
 * binary_tree_insert_left - function
 * @parent: parent
 * @value: value
 * Return: newNode
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t  *newNode;

	newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	if (newNode->left)
	{
		newNode->parent = parent->left;
		newNode->parent->left = newNode;
	}
	parent->left = newNode;
	return (newNode);

}
