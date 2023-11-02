#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the root node to measure the depth
 *
 * Return: depth of node, otherwise 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t tmp = 0;

	if (!tree)
		return (0);
	return (tmp = tree->parent ? 1 + binary_tree_depth(tree->parent) : 0);
}
