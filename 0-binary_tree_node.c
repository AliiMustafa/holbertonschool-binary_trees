#include "binary_trees.h"
/**
 * binary_tree_node - function
 * @parent: pointer
 * @value: variable
 * Return: a pointer to the new node or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
	{
		return (0);
	}
	if (parent == NULL)
	{
		new->parent = NULL;
	}
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	new->n = value;
	return (new);
}
