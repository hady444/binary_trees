#include "binary_trees.h"
/**
 * binary_tree_node - create new node.
 * @parent: parent node.
 * @value: int value stored in node.
 * Return: pointer to the created node or NULL on failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->right = NULL;
	node->left = NULL;
	return (node);
}
