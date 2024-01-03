#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - function
 * @tree: arg
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if (tree->left != NULL)
		{
			binary_tree_delete(tree->left);
			tree->left = NULL;
		}

		if (tree->right != NULL)
		{
			binary_tree_delete(tree->right);
			tree->right = NULL;
		}

		free(tree);
	}
}
