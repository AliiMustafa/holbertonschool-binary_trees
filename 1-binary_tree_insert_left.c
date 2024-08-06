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

	new = binary_tree_node(parent, value);
	if (new == NULL || parent == NULL)
	{
		free(new);
		return (NULL);
	}
	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
		parent->left = new;
	}
	else
	{
		parent->left = new;
	}
	return (new);
}
