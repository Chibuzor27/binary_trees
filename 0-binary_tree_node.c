#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - function
 * @parent: parent node
 * @value: node value
 *
 * Return: binary tree
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (parent);

	node->n = value;

	if (parent == NULL)
		return (node);

	if (value <= parent->n)
		parent->left = node;
	else
		parent->right = node;

	node->parent = parent;
	return (node);
}
