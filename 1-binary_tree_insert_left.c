#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_insert_left - creates a binary tree node
 * @parent: parent of the node to create
 * @value: value to store in new node
 *
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_child, *temp;

	if (parent == NULL)
		return (NULL);
	left_child = binary_tree_node(parent, value);
	if (left_child == NULL)
		return (NULL);
	if (parent->left == NULL)
	{
		parent->left = left_child;
		return (left_child);
	}
	temp = parent->left;
	parent->left = left_child;
	left_child->left = temp;
	temp->parent = left_child;

	return (left_child);
}
