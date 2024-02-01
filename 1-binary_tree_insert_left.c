#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: parent node.
 * @value: int value stored in node.
 *
 * Return: Created node or NULL on failure.
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);
	node = binary_tree_node(parent, value);
	if (parent->left != NULL)
	{
		node->left = parent->left;
		node->left->parent = node;
	}
	parent->left = node;
	return (node);
}
