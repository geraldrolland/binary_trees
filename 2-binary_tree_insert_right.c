#include "binary_trees.h"

/**
 * binary_tree_insert_right - binary_tree_insert_right
 * @parent: pointer to the parent node
 * @value: value to insert to the new node
 * Return: new_node on success or NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = NULL, *new_node = NULL;

	if (parent == NULL)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	if (parent->right != NULL)
	{
		temp = parent->right;
		parent->right = new_node;
		new_node->right = temp;
		temp->parent = new_node;
		new_node->parent = parent;
		return (new_node);
	}
	parent->right = new_node;
	new_node->parent = parent;
	return (new_node);
}
