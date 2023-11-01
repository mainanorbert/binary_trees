#include "binary_trees.h"
int tree_height(binary_tree_t *tree);
/**
 * binary_tree_balance - measuring balance factore of tree
 * @tree: pointer to root node of tree
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int bal_factor;
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);
	left_height = tree_height(tree->left);
	right_height = tree_height(tree->right);
	bal_factor = left_height - right_height;
	return (bal_factor);
}

/**
 * tree_height - measures height of tree
 * @tree: pointer to root node of tree to measure
 * Return: returns height of tree
 */

int tree_height(binary_tree_t *tree)
{
	int l_h, r_h;

	if (tree == NULL)
		return (0);
	l_h = tree_height(tree->left) + 1;
	r_h = tree_height(tree->right) + 1;
	if (l_h >= r_h)
		return (l_h);
	else
		return (r_h);
}
