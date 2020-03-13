#include "binary_trees.h"
/**
 * binary_tree_nodes - computes number of nodes in a tree.
 *
 * @tree: pointer to the root.
 *
 * Return: number of nodes.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->right && !tree->left))
		return (0);
	if (!tree->left)
		return (binary_tree_nodes(tree->right) + 1);
	if (!tree->right)
		return (binary_tree_nodes(tree->left) + 1);
	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}
