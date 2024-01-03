#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - function
 * @parent: arg
 * @value: arg
 * Return: new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->left = NULL;
	node->right = NULL;
	node->parent = NULL;

	if (parent->right != NULL)
	{
		parent->right->parent = node;
		node->right = parent->right;
	}
	node->parent = parent;
	parent->right = node;
	return (node);
}
