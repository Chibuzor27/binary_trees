#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - function
 * @tree: arg
 * Return: size
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL)
	{
		size += binary_tree_leaves(tree->left);
	}

	if (tree->right != NULL)
	{
		size += binary_tree_leaves(tree->right);
	}

	return (size);
}
