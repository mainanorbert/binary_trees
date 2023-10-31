#include "binary_trees.h"
/**
 * binary_tree_size - measures size of binary tree
 * @tree: pointer to root node of tree to measure
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size, right_size, size;

	if (tree == NULL)
		return (0);
	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);
	size = left_size + right_size + 1;
	return (size);
}
