#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

size_t max(size_t, size_t);

/**
 * binary_tree_height - function
 * @tree: arg
 * Return: size
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
	{
		return
		(1 + max(binary_tree_height(tree->left), binary_tree_height(tree->right)));
	}
	return (0);
}

/**
 * max - function
 * @num1: arg
 * @num2: arg
 * Return: max
 */
size_t max(size_t num1, size_t num2)
{
	if (num1 > num2)
		return (num1);
	else
		return (num2);
}
