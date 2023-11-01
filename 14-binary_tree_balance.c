#include "binary_trees.h"
/**
 * binary_tree_balance - measuring balance factore of tree
 * @tree: pointer to root node of tree
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int bal_factor;
	int left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		left_height = binary_tree_balance(tree->left) + 1;
	if (tree->right)
		right_height = binary_tree_balance(tree->right) + 1;
	bal_factor = left_height - right_height;
	return (bal_factor);
}

