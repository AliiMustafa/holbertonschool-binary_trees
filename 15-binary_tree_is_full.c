#include "binary_trees.h"

/**
 * binary_tree_is_full - function
 * @tree: pointer
 * Return: 0 or number of nodes with at leats 1 child in tree
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int l, r;

	if (tree == NULL)
		return (0);
	if ()
	{
		binary_tree_is_full(tree->left);
		binary_tree_is_full(tree->right);
	}
	else
		return (0);
	return (l + r + 1);
}

