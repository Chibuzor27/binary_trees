#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

int height(binary_tree_t *);
int max(int, int);

/**
 * binary_tree_balance - function
 * @tree: arg
 * Return: int
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (abs(height(tree->left) - height(tree->right)));
}

/**
 * height - function
 * @tree: arg
 * Return: int
 */
int height(binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + max(height(tree->left), height(tree->right)));
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
