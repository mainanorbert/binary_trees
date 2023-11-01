#include "binary_trees.h"

/**
 * full_tree - checks if tree is full
 * @tree: pointer to node of a tree
 * Return: returns 1 if full and 0 otherwise
 */
int full_tree(const binary_tree_t *tree)
{
	int l_f, r_f;

	if (tree == NULL)
		return (0);
	if (!(tree->left) && !(tree->right))
		return (1);
	if (tree->left && tree->right)
	{
		l_f = full_tree(tree->left);
		r_f = full_tree(tree->right);
		return (l_f && r_f);
	}
	return (0);
}
/**
 * tree_height - measures height of tree
 * @tree: pointer to root node of tree
 * Return: height of tree or 0 otherwise
 */
size_t tree_height(const binary_tree_t *tree)
{
	size_t l_height, r_height;

	if (tree == NULL)
		return (0);
	if (tree->left)
		l_height = tree_height(tree->left) + 1;
	if (tree->right)
		r_height = tree_height(tree->right) + 1;
	return (max(l_height, r_height));
}

/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: pointer to root node of tree to check
 * Return: 1 if perfect and 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t l_h, r_h;
	int x;

	if (tree == NULL)
		return (0);
	x = full_tree(tree);
	l_h = tree_height(tree->left);
	r_h = tree_height(tree->right);
	if ((l_h == r_h) && x)
		return (1);
	return (0);
}