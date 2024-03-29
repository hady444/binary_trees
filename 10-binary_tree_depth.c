#include "binary_trees.h"
/**
 * binary_tree_depth - function calculate height of tree
 * @tree: pointer of tree.
 * Return: height of tree.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree || tree->parent == NULL)
		return (0);
	return (1 + binary_tree_depth(tree->parent));
}
