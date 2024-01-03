#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

int depth(binary_tree_t *);
int max(int, int);

/**
 * binary_tree_is_perfect - function
 * @tree: arg
 * Return: size
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if ((tree->left != NULL && tree->right == NULL) ||
		(tree->left == NULL && tree->right != NULL))
		return (0);

	if (tree->left != NULL && tree->right != NULL)
	{
		if (depth(tree->left) != depth(tree->right))
			return (0);

		return (
			binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right)
			);
	}

	return (1);
}

/**
 * depth - function
 * @tree: arg
 * Return: int
 */
int depth(binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + max(depth(tree->left), depth(tree->right)));
}

/**
 * max - function
 * @num1: arg
 * @num2: arg
 * Return: int
 */
int max(int num1, int num2)
{
	if (num1 > num2)
		return (num1);
	else
		return (num2);
}
