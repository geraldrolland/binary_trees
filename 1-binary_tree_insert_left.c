#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the parent node
 * @value: value to insert to the new node
 * Return: new_node on success or NULL on failure 
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = NULL;
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
		return NULL;
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return NULL;
	new_node->n = value;
	if (parent->left != NULL)
	{
		temp = parent->left;
		parent->left = new_node;
		new_node->left = temp;
		temp->parent = new_node;
		new_node->right = NULL;
		new_node->parent = parent;
		return new_node;
	}
	parent->left = new_node;
	new_node->right = NULL;
	new_node->left = NULL;
	new_node->parent = parent;
	return new_node;
}
