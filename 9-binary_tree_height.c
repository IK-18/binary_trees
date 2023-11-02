#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height of binary tree, otherwise 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t tmp1 = 0, tmp2 = 0;

	if (tree)
	{
		tmp1 = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		tmp2 = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((tmp1 > tmp2) ? tmp1 : tmp2);
	}
	return (0);
}
