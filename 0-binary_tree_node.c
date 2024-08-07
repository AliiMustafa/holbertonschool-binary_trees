#include "binary_trees.h"

/**
 * binary_tree_node - function
 * @parent: pointer
 * @value: variable
 * Return: a pointer to the new node or NULL
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
	{
		return (0);
	}
	if (parent == NULL)
	{
		newnode->parent = NULL;
	}
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;
	newnode->n = value;
	return (newnode);
}
