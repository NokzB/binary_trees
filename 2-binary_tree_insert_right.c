#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a new node to the right
 *				of another in a binary tree
 * @parent: Pointer to the first node
 * @value: the value to store in a new node
 *
 * Return: Pointer to the new node
 *	Otherwise - NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;
	return (new_node);
}
