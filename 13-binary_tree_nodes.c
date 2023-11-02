#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 *
 * Return: number of nodes of tree, otherwise 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t tmp = 0;

	if (tree)
	{
		if (tree->left || tree->right)
			++tmp;
		tmp = tree->left ? tmp + binary_tree_nodes(tree->left) : tmp;
		tmp = tree->right ? tmp + binary_tree_nodes(tree->right) : tmp;
		return (tmp);
	}
	return (0);
}
