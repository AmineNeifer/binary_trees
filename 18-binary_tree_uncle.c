#include "binary_trees.h"
/**
 * sibling - looks for the sibling node.
 *
 * @node: pointer to a node.
 *
 * Return: node of the sibling.
 */
binary_tree_t *sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
/**
 * binary_tree_uncle - looks for the uncle node.
 *
 * @node: pointer to a node.
 *
 * Return: node of the uncle.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	return (sibling(node->parent));
}
