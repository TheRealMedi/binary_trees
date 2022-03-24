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
 * binary_tree_size - measures the tree's size
 * @tree: binary tree input
 * Return: number of descendant chid nodes
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 * @brief 
 * 
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    int y, z;

    if (!tree)
        return (0);
    y = (int)binary_tree_size(tree);
    z = binary_tree_height(tree);
    return (y == (2 << z) - 1);
}
