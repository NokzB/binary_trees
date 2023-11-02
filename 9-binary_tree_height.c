#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure.
 *
 * Return: 0 if tree is NULL
 */	Otherwise - height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		lft = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		rgt = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((lft > rgt) ? lft : rgt);
	}
	return (0);
}
