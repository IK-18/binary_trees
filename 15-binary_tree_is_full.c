#include "binary_trees.h"

/**
 * is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 0 if tree is not full, 1 otherwise
 */
int is_full(const binary_tree_t *tree)
{
	if (tree)
	{
		if ((!tree->left && tree->right) ||
		    (!tree->right && tree->left) ||
		    (!is_full(tree->left)) ||
		    (!is_full(tree->right)))
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if the node is full, otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	is_full(tree);
}
