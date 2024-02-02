#include "binary_trees.h"
/**
 * binary_tree_height_balanced - height of a binary tree for a balanced tree
 * @tree: pointer to tree
 * Return: height
 */
size_t binary_tree_height_balanced(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			if (tree->left)
				left = 1 + binary_tree_height_balanced(tree->left);
			else
				left = 1;
			if (tree->right)
				right = 1 + binary_tree_height_balanced(tree->right);
			else
				right = 1;
		}
		return ((left > right) ? left : right);
	}
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to tree.
 * Return: balance factor or 0 in failure.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int r = 0, l = 0, total = 0;

	if (tree)
	{
		l = (int) binary_tree_height_balanced(tree->left);
		r = (int) binary_tree_height_balanced(tree->right);
		total = l - r;
	}
	return (total);
}
