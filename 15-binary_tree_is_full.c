#include "binary_trees.h"
/**
 * binary_tree_is_full - checks tree is full (each node has 0 or 2 children)
 * @tree: pointer to tree.
 * Return: 0 in NULL or not full, 1 if full.
 *
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!(tree->left) && !(tree->right))
		return (1);
	else if ((tree->left && tree->right))
		return (1 && binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));
	else
		return (0);
}
