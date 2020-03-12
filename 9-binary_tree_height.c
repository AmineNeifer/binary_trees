#include "binary_trees.h"
/**
 * binary_tree_height - looks for tree height.
 *
 * @tree: root.
 *
 * Return: height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_height = 0;
	size_t left_height = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
	{
		right_height = binary_tree_height(tree->right) + 1;
		left_height = binary_tree_height(tree->left) + 1;
	}

	if (left_height > right_height)
		return (left_height);
	return (right_height);
}
