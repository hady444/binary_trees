#include "binary_trees.h"
size_t max(size_t a, size_t b);
/**
 * binary_tree_height - function calculate height of tree
 * @tree: pointer of tree.
 * Return: height of tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left || tree->right)
		return (1 + max(binary_tree_height(tree->left),
					binary_tree_height(tree->right)));
	else
		return (0);
}
/**
 * max - get max of two.
 * @a: first number
 * @b: second number
 * Return: max
 */
size_t max(size_t a, size_t b)
{
	if (a < b)
		return (b);
	return (a);
}
