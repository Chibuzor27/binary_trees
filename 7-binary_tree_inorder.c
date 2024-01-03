#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_inorder - function
 * @tree: arg
 * @func: arg
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL || func != NULL)
	{
		if (tree->left != NULL)
			binary_tree_inorder(tree->left, func);
		printf("%d\n", tree->n);
		if (tree->right != NULL)
			binary_tree_inorder(tree->right, func);
	}
}
