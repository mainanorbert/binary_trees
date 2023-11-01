#include "binary_trees.h"
/**
 * binary_tree_leaves - counts leaves in binary tree
 * @tree: pointer to root node of tree
 * Return: Returns no of leafs or 0 otherwise
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t no_leaves;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)	/*checks has children*/
		return (1);

	no_leaves = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	return (no_leaves);
}
