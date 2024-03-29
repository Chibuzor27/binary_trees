#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - function
 * @parent: arg
 * @value: arg
 * Return: new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	if (parent->left != NULL)
	{
		parent->left->parent = node;
		node->left = parent->left;
	}
	node->parent = parent;
	parent->left = node;
	return (node);
}
