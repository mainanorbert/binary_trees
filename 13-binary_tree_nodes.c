#include "binary_trees.h"
/**
 * binary_tree_nodes - counts nodes with atleast one child
 * @tree: pointer to root node of tree
 * Return: no of nodes with atleast one leave
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t no_of_nodes = 0;

	if (tree == NULL)
		return (0);
	if (tree->left || tree->right)
		no_of_nodes++;
	no_of_nodes += binary_tree_nodes(tree->left);
	no_of_nodes += binary_tree_nodes(tree->right);
	return (no_of_nodes);
}
