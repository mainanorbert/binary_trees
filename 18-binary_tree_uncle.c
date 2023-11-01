#include "binary_trees.h"
/**
 * binary_tree_uncle - finds uncle of a node
 * @node: pointer to node to find uncle
 * Return: pointer to uncle node or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *gp;

	if (node == NULL || !node->parent || !node->parent->parent)
		return (NULL);
	parent = node->parent;
	gp = parent->parent;
	if (gp->left == parent && gp->right)
		return (gp->right);
	else if (gp->right == parent && gp->left)
		return (gp->left);
	else
		return (NULL);

}
