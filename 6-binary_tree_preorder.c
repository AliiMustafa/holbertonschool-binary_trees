#include "binary_trees.h"

/**
 * binary_three_preorder - function
 * @tree: pointer
 * @func: function pointer
 * Return: Nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree->left)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	
	}
	else if (tree->right)
	{
		binary_tree_preorder(tree->right, func);
	}
	else
	{
		func(tree->n);
	}
}

