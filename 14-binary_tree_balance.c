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
		return (-1);

	left = binary_tree_balance(tree->left) + 1;
	right = binary_tree_balance(tree->right) + 1;
	if (left > right)
		return (left);
	return (right);
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

	if (!tree || (!tree->left && !tree->right))
		return (0);

	balance = height(tree->left) - height(tree->right) + 1;
	return (balance);
}
