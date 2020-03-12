#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_right - insert new node on the right.
 *
 * @parent: parent of the new node.
 * @value: value for the new node.
 *
 * Return: new node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *child;

	if (!parent)
		return (NULL);

	child = binary_tree_node(parent, value);

	if (!child)
		return (NULL);

	if (!(parent->right))
		parent->right = child;
	else if (parent->right)
	{
		child->right = parent->right;
		child->right->parent = child;
		parent->right = child;
	}
	return (child);
}
