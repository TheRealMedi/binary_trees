#include "binary_trees.h"

/**
 * binary_tree_is_root - Check if a the given node is a root one
 * @node: Pointer to input node
 * Return: 1 if True
 *         0 if False
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if(!node)
		return (0);
	return(!node->parent);
}
