#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_insert_right - creates a binary tree node
 * @parent: parent of the node to create
 * @value: value to store in new node
 *
 * Return: pointer to the new node
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
