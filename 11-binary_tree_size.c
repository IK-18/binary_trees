#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Return: size of tree, otherwise 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t tmp = 1;

	if (tree)
	{
		tmp = tree->left ? tmp + binary_tree_size(tree->left) : tmp;
		tmp = tree->right ? tmp + binary_tree_size(tree->right) : tmp;
		return (tmp);
	}
	return (0);
}
