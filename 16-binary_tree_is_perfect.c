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

	a = (tree->left) ? (int)binary_tree_height(tree->left) : -1;
	b = (tree->right) ? (int)binary_tree_height(tree->right) : -1;

	return (a - b);
}

/**
 * binary_tree_is_perfect -Checks if binary tree is perfect
 * @tree: pointer to the head of the tree
 * Return: 0 or NULL if tree not exist.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int balance, left, right;

	balance = binary_tree_balance(tree);

	if (!tree)
		return (0);
	if (balance == 0)
	{
		left = binary_tree_is_perfect(tree->left);
		right = binary_tree_is_perfect(tree->right);

		if (left == right)
			return (1);
	}
	return (0);
}
