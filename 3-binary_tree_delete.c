#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: pointer to the root node of the binary tree
 * Return: void
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if (tree->parent == NULL && (tree->left == NULL && tree->right == NULL))
			free(tree);
		if (tree->left != NULL)
		{
			binary_tree_delete(tree->left);
			free(tree->left);
			tree->left = NULL;
			if (tree->right != NULL)
			{
				binary_tree_delete(tree->right);
				free(tree->right);
				tree->right = NULL;
				return;

			}
			return;
		}
		if (tree->right != NULL)
		{
			binary_tree_delete(tree->right);
			free(tree->right);
			tree->right = NULL;
			if (tree->left != NULL)
			{
				binary_tree_delete(tree->left);
				free(tree->left);
				tree->left = NULL;
				return;
			}
			return;
		}
		tree->parent = NULL;
		return;
	}
}
