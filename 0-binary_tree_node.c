#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the created node
 * @value: value of the new node
 * Return: parent 
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	if (parent != NULL)
		return (parent);
	parent = malloc(sizeof(binary_tree_t));
	if (parent == NULL)
		return (NULL);
	parent->n = value;
	parent->left = NULL;
	parent->right = NULL;
	return (parent);
}
