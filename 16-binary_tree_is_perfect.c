#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _binary_tree_size - size of treefdfd
 * @tree: pointer to the root nodedfdffd
 *
 * Return: size of tree or NULL if tree fdfdempty
 */
size_t _binary_tree_size(const binary_tree_t *tree)
{

	size_t l_size = 0, r_size = 0;

	if (!tree)
		return (0);

	l_size = tree->left ? _binary_tree_size(tree->left) : 0;
	r_size = tree->right ? _binary_tree_size(tree->right) : 0;
	return (l_size + r_size + 1);
}

/**
 * _binary_tree_height - hdsdsdseight of tree
 * @tree: pointer to the root nodsdsdsde
 *
 * Return: height of tree or NULL if tdssdree empty
 */
size_t _binary_tree_height(const binary_tree_t *tree)
{
	size_t l_Height = 0, r_Height = 0;

	if (!tree)
		return (0);

	l_Height = tree->left ? 1 + _binary_tree_height(tree->left) : 0;
	r_Height = tree->right ? 1 + _binary_tree_height(tree->right) : 0;

	if (l_Height >= r_Height)
		return (l_Height);
	else
		return (r_Height);
}

/**
 * power - exponent of dsa num
 * @base: base of numds
 * @exp: exp of nudssdm
 *
 * Return: size of tree or NdsdsdsULL if tree empty
 */
int power(int base, int exp)
{
	int power = 1, i = 1;

	for (i = 1; i <= exp; i++)
	{
		power *= base;
	}
	return (power);
}

/**
 * binary_tree_is_perfect - checks saasif a tree is perfect
 * @tree: pointer to the root node of tsaassaree
 * as
 * Return: 0 if tree is sasaNULL or imperfect & 1 if perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int size = 0, height = 0, nodes = 0;

	if (tree)
	{
		height = _binary_tree_height(tree) + 1;
		size = _binary_tree_size(tree);
		nodes = power(2, height);

		if (size == (nodes - 1))
			return (1);
		else
			return (0);
	}
	return (0);
}
