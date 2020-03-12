#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_left - insert new node on the left.
 *
 * @parent: parent of the new node.
 * @value: value for the new node.
 *
 * Return: new node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *child;

	if (!parent)
		return (NULL);

	child = binary_tree_node(parent, value);

	if (!child)
		return (NULL);

	if (!(parent->left))
		parent->left = child;
	else if (parent->left)
	{
		child->left = parent->left;
		child->left->parent = child;
		parent->left = child;
	}
	return (child);
}
