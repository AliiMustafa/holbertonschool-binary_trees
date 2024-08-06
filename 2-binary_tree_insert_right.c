#include "binary_trees.h"
/**
 * binary_tree_insert_right - function
 * @parent: pointer
 * @value: variable
 * Return: a pointer to the new node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = binary_tree_node(parent, value);
	if (new == NULL || parent == NULL)
	{
		free(new);
		return (NULL);
	}
	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;
	return (new);
}
