#include "binary_trees.h"
/**
 * binary_tree_insert_left - function
 * @parent: pointer
 * @value: variable
 * Return: a pointer to the new node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL || parent == NULL)
	{
		return (0);
	}
	if (parent->left != NULL)
	{
		new = binary_tree_node(parent, value);
		new->left = parent->left;
		parent->left->parent = new;
		parent->left = new;
	}
	else
	{
		parent->left = binary_tree_node(parent, value);
	}
	return (new);
}
