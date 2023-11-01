#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if binary tree is full
 * @tree: pointer to root node of tree
 * Return: 1 if full or 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int l_full, r_full;

	if (tree == NULL)
		return (0);

	if (!(tree->left) && !(tree->right))
		return (1);
	else if (tree->left && tree->right)
	{
		l_full = binary_tree_is_full(tree->left);
		r_full = binary_tree_is_full(tree->right);
		return (l_full && r_full);
	}
	return (0);
}
