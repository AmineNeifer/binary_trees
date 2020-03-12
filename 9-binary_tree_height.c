#include "binary_trees.h"
/**
 * max - return the bigger number.
 *
 * @one: first value.
 * @two: second value.
 *
 * Return: the bigger number.
 */
int max(int one, int two)
{
	if (one > two)
		return (one);
	return (two);
}
/**
 * binary_tree_height - looks for tree height.
 *
 * @tree: root.
 *
 * Return: height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int right_height;
	int left_height;

	if (!tree)
		return (-1);

	right_height = binary_tree_height(tree->right);
	left_height = binary_tree_height(tree->left);
	return (max(right_height, left_height) + 1);
}
