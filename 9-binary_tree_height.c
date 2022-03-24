#include "binary_trees.h"

/**
 * binary_tree_height - measures tree's height
 * @tree: input tree
 * Return: tree's height
 *
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t a, b;

	if (!tree)
		return (-1);

	a = binary_tree_height(tree->left);
	b = binary_tree_height(tree->right);
	return ((MAX(a, b) + 1));
}
