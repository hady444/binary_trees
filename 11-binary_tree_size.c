#include "binary_trees.h"
/**
 * binary_tree_size - calculate size of tree started from passed node.
 * @tree: passed node.
 * Return: size (number of nodes).
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree || tree->left || tree->right)
		return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
	else
		return (0);
}
