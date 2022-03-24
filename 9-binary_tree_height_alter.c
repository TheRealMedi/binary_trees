#include "binary_trees.h"

/**
 * binary_tree_height - measures tree's height
 * @tree: input tree
 * Return: tree's height
 *
*/

/* FIRST METHOD - RECURSIVE WAY */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t a, b;

	if (!tree)
		return (-1);
	
	a = binary_tree_height(tree->left);
	b = binary_tree_height(tree->right);
	return ((MAX(a, b) + 1));
}

/* SECOND METHOD - HELPER FUNCTION */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (_binary_tree_height(tree) - 1);
}

/* THIRD METHOD - PROVIDED _HEIGHT FUNC */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}

#define binary_tree_height(P) _height(P);