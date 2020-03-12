#include "binary_trees.h"
/**
 * binary_tree_postorder - postorder traversing
 *
 * @tree: pointer to the root.
 * @func: pointer to a printing function.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!func || !tree)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
