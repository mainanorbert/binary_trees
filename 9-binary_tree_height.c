#include "binary_trees.h"
/**
 * binary_tree_height - measures height of binary tree
 * @tree: tree to measure
 * Return: height of tree or 0 otherwise
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (tree == NULL)
		return (0);
	else
	{
		left_h= binary_tree_height(tree->left);
		right_h = binary_tree_height(tree->right);
		if (left_h >= right_h)
			return (left_h + 1);
		else
			return (right_h + 1);
	}
}
