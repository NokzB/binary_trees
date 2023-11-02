#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a new node to the right
 *				of another in a binary tree
 * @parent: Pointer to the first node
 * @value: the value to store in a new node
 *
 * Return: Pointer to the new node
 * 	Otherwise - NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;
	return (new);
}
