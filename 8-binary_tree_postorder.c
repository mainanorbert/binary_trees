#include "binary_trees.h"
/**
 * binary_tree_postorder - going through a tree using posttraversal
 * @tree: root node to tree
 * @func: pointer to function calling each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
