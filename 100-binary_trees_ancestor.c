#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_trees_ancestor - finds txxxhe lowest common ancestor of two nodes
 * @first: is a pointer to the first xnode
 * @second: is a pointer to the secondx node
 * Return: pointer to the lowest commonxx ancestor node of the two given nodes
 * If no common ancestor was found, your function must return NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *reload;

	if (!first && !second)
		return (NULL);

	while (first)
	{
		reload = (binary_tree_t *)second;
		while (second)
		{
			if (first == second)
				return ((binary_tree_t *)first);
			if (second->parent)
				second = second->parent;
			else
				break;
		}
		second = reload;
		if (first->parent)
			first = first->parent;
		else
			break;
	}
	return (NULL);
}
