#include "binary_trees.h"
/**
 * height - height of a binary tree.
 *
 * @tree: pointer to root.
 *
 * Return: height.
 */
int height(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	left = height(tree->left);
	right = height(tree->right);
	if (left > right)
		return (left + 1);
	return (right + 1);
}
/**
 * binary_tree_balance - balance factor of a tree.
 *
 * @tree: pointer to root.
 *
 * Return: balance factor.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0;

	if (!tree)
		return (0);

	balance = height(tree->left) - height(tree->right);
	return (balance);
}
