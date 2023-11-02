#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if the node is full, otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree)
	{
		if ((!tree->left && tree->right) ||
		    (!tree->right && tree->left) ||
		    (!binary_tree_is_full(tree->left)) ||
		    (!binary_tree_is_full(tree->right)))
			return (0);
	}
	return (1);
}

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 *
 * Return: pointer to the sibling node, otherwise NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (binary_tree_is_full(node->parent))
	{
		if (node == node->parent->left)
			return (node->parent->right);
		else
			return (node->parent->left);
	}
	return (NULL);
}
