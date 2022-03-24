#include "binary_trees.h"

/**
 * _binary_tree_height - Helper function
 * @tree: input tree
 * Return: tree's height
 *
*/
size_t _binary_tree_height(const binary_tree_t *tree)
{
	size_t a, b;

	if (!tree)
		return (0);

	a = _binary_tree_height(tree->left);
	b = _binary_tree_height(tree->right);
	return ((MAX(a, b) + 1));
}

/**
 * binary_tree_height - Measures tree's height
 * @tree: input tree
 * Return: Tree's height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (_binary_tree_height(tree) - 1);
}

/**
 * binary_tree_balance - Measures tree's balance factor
 * @tree: tree's input
 * Return: descendant balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int a, b;

	if (!tree)
		return (0);
	a = (tree->left)
		? (int)binary_tree_height(tree->left)
		: -1;
	b = (tree->right)
		? (int)binary_tree_height(tree->right)
		: -1;
	return (a - b);
}
