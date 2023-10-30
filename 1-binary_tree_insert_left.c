#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserting node as left chile of another node
 * @parent - parent node of node to inserted
 * @value: value of the left node
 * @Return: pointer to inserted node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node, *current;

	if (parent == NULL)
		return (NULL);
	left_node = malloc(sizeof(binary_tree_t));
	if (left_node == NULL)
		return (NULL);
	left_node->n = value;
	left_node->parent = parent;
	left_node->left = NULL;
	left_node->right = NULL;
	if (parent->left != NULL)
	{
		current = parent->left;
		current->parent = left_node;
		left_node->left = current;
	}
	parent->left = left_node;
	return (left_node);
}
