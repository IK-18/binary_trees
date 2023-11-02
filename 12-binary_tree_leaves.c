#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 *
 * Return: number of leaves of tree, otherwise 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t tmp = 0;

	if (tree)
	{
		if (!tree->left && !tree->right)
			return (++tmp);
		tmp = tree->left ? tmp + binary_tree_leaves(tree->left) : tmp;
		tmp = tree->right ? tmp + binary_tree_leaves(tree->right) : tmp;
		return (tmp);
	}
	return (0);
}
