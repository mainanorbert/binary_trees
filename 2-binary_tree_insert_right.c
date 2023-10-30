#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts node as right child of parent
 * @parent: pointer to node to insert right child
 * @value: the value to insert in right node
 * Return: pointer to created node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node, *current;

	if (parent == NULL)
		return (NULL);
	right_node = malloc(sizeof(binary_tree_t));
	if (right_node == NULL)
		return (NULL);
	right_node->parent = parent;
	right_node->n = value;
	right_node->left = NULL;
	right_node->right = NULL;
	if (parent->right != NULL)
	{
		current = parent->right;
		current->parent = right_node;
		right_node->right = current;
		parent->right = right_node;
	}
	parent->right = right_node;
	return (right_node);
}


