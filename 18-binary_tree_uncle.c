#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of node
 * @node: pointer to node to find its uncle.
 * Return: pointer to uncle.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !(node->parent) || !(node->parent->parent))
		return (NULL);
	if (node->parent->parent->right == node->parent)
		return (node->parent->parent->left);
	return (node->parent->parent->right);
}
