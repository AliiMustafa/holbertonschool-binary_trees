#include "binary_trees.h"

/**
 * binary_tree_depth - function
 * @tree: pointer
 * Return: 0 or depth of node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d;

	if (tree == NULL)
		return (0);
	if (tree->parent)
	{
		d = binary_tree_depth(tree->parent) + 1;
	}
	else
		return (0);
	return (d);
}

