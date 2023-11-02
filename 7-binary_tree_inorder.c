#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_inorder - creates a binary tree node
 * @tree: parent of the node to create
 * @func: sas
 *
 * Return:
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree  == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
