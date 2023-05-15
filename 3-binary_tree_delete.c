#include "binary_trees.h"
void binary_tree_delete(binary_tree_t *tree)
{
	if(tree == NULL)
		return;

	binary_tree_delete(parent->left);
	binary_tree_delete(parent->right);
	free(tree);
}
