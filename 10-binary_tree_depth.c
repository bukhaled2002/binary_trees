#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_depth - node in a binary tree
 * @tree: pointer to the node
 * Return: height or NULL if tree is e
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth_node = 0;

	if (tree != NULL && tree->parent != NULL)
	{
		depth_node = binary_tree_depth(tree->parent) + 1;
		return (depth_node);
	}
	return (0);
}
