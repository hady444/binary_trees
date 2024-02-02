#include "binary_trees.h"
/**
 * tree_test_perfect - if a tree is perfect or not
 * the same levels in left and right, and
 * each node has to have 2 nodes or none
 * @tree: pointer to tree
 * Return: 0 if is not a perfect or NULL or not the same levels.
 */
int tree_test_perfect(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree->left && tree->right)
	{
		left = 1 + tree_test_perfect(tree->left);
		right = 1 + tree_test_perfect(tree->right);
		if (right == left && right != 0 && left != 0)
			return (right);
		return (0);
	}
	else if (!(tree->left) && !(tree->right))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * binary_tree_is_perfect - checks tree is perfect (interior nodes
 * have two children and all leaves have the same depth or same level)
 * @tree: pointer to tree.
 * Return: 0 in NULL or not perfect, 1 if perfect.
 *
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int res = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		res = tree_test_perfect(tree);
		return (res != 0 ? 1 : 0);
	}
}
