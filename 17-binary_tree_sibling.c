#include "binary_trees.h"
/**
 * binary_tree_sibling - finding sibling of a node
 * @node: pointer to node to find sibling
 * Return: pointer to sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	parent = node->parent;
	if (parent->left == node && parent->right)
		return (parent->right);
	else if (parent->right == node && parent->left)
		return (parent->left);
	else
		return (NULL);
}
