#include "binary_trees.h"

/**
 * binary_tree_delete - function
 * @tree: pointer
 * Return: Nothing
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->left == NULL && node->right == NULL)
		return (1);
	if (node == NULL)
		return (0);
	return (0);
}
