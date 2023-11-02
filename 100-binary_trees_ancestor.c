#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 *
 * Return: pointer to the lowest common ancestor node of the two given nodes
 * NUll otherwise
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *tmp1, *tmp2;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);
	tmp1 = first->parent;
	tmp2 = second->parent;
	if (tmp1 == second || !tmp2 || (!tmp2->parent && tmp1))
		return (binary_trees_ancestor(tmp1, second));
	else if (tmp2 == first || !tmp1 || (!tmp1->parent && tmp2))
		return (binary_trees_ancestor(first, tmp2));
	return (binary_trees_ancestor(tmp1, tmp2));
}
