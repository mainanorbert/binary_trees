#include "binary_trees.h"
/**
 * binary_tree_preorder - function that does preorder traversal
 * @tree: pointer to root node of pointer to traverse
 * @func: pointer to function calling each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	void (*f)(int) = func;

	if (tree == NULL || func == NULL)
		return;
	f(tree->n);
	binary_tree_preorder(tree->left, f);
	binary_tree_preorder(tree->right, f);
}
