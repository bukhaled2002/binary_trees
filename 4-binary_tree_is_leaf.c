#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_is_leaf - creates a binary tree node
 * @node: parent of the node to create
 *
 * Return: 1 if 0 if not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
