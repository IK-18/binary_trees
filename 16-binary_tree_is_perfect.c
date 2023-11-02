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

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if tree is perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree)
	{
		if (!binary_tree_is_full(tree) ||
		(binary_tree_height(tree->left) != binary_tree_height(tree->right)) ||
		!binary_tree_is_full(tree->left) ||
		!binary_tree_is_full(tree->right))
			return (0);
		return (1);
	}
	return (0);
}
