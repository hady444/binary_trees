#include "binary_trees.h"
/**
 * binary_tree_height - function calculate height of tree
 * @tree: pointer of tree.
 * Return: height of tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left)
		return (1 + binary_tree_height(tree->left));
	else if (tree->right)
		return (1 + binary_tree_height(tree->right));
	else
		return (0);
}
