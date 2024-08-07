#include "binary_trees.h"

/**
 * binary_tree_leaves - function
 * @tree: pointer
 * Return: 0 or number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l, r;
	if (tree == NULL)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	l = binary_tree_leaves(tree->left);
	r = binary_tree_leaves(tree->right);
	return (l + r);
}

