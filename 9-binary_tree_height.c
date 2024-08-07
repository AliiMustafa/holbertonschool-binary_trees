#include "binary_trees.h"

/**
 * binary_tree_height - function
 * @tree: pointer
 * Return: 0 or height of node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left || tree->right)
	{
		return (binary_tree_height(tree->left) + 1);
		return (binary_tree_height(tree->right) + 1);
	}
	else
		return (0);
}

