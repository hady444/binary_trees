#include "binary_trees.h"
/**
 * binary_tree_inorder - goes through a binary tree using pre-order traversal
 * @tree: pointer to tree.
 * @func: pointer to function passed.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
}