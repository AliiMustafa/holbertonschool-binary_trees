#include "binary_trees.h"
#include "15-binary_tree_is_full.c"

/**
 * binary_tree_balance - function
 * @tree: pointer
 * Return: 0 or balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
	{
		return (0);
	}
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (left == right)
		return (1);
	else
		return (0);
}
/**
 * binary_tree_height - function
 * @tree: pointer
 * Return: 0 or height of node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);

	left += binary_tree_height(tree->left);
	right += binary_tree_height(tree->right);
	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}
/**
 * binary_tree_is_perfect - function
 * @tree: pointer
 * Return: 0 or 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_balance(tree) && binary_tree_is_full(tree));
}
