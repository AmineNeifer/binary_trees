#include "binary_trees.h"
/**
 * binary_tree_depth - looks for tree depth.
 *
 * @tree: root.
 *
 * Return: depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree->parent || !tree)
		return (0);

	return (binary_tree_depth(tree->parent) + 1);
}
