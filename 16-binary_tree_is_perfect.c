#include "binary_trees.h"
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
/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: pointer to root node of tree to check
 * Return: 1 if perfect and 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t l_h, r_h;
	/*int x;*/

	if (tree == NULL)
		return (0);
	l_h = binary_tree_height(tree->left);
	r_h = binary_tree_height(tree->right);
	if (l_h == r_h)
	{
		if (binary_tree_is_full(tree))
			return (1);

	}
	return (0);
}
