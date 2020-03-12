#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_node - add a new node to the tree.
 *
 * @parent: parent of the node we will add.
 * @value: the data we are storing in the node.
 *
 * Return: a pointer to the node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *child;

	child = malloc(sizeof(binary_tree_t));
	if (!child)
		return (NULL);

	child->left = NULL;
	child->right = NULL;
	child->parent = parent;
	child->n = value;

	return (child);
}

