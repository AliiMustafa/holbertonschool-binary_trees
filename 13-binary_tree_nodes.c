#include "binary_trees.h"

/**
 * binary_tree_nodes - function
 * @tree: pointer
 * Return: 0 or number of nodes with at leats 1 child in tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t l, r;

	if (tree == NULL)
		return (0);
	if (tree->left || tree->right)
	{
		l = binary_tree_nodes(tree->left);
		r = binary_tree_nodes(tree->right);
	}
	else
		return (0);
	return (l + r + 1);
}

