#include "binary_trees.h"
/**
 * binary_tree_height - measures height of binary tree
 * @tree: tree to measure
 * Return: height of tree or 0 otherwise
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h = 0, right_h = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		left_h = binary_tree_height(tree->left) + 1;
	if (tree->right)
		right_h = binary_tree_height(tree->right) + 1;
	return (max(left_h, right_h));
}
