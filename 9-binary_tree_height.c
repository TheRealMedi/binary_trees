#include "binary_trees.h"

/**
 * @brief 
 * 
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t a, b, c;

    if (!tree)
        return (0);
    
    a = binary_tree_height(tree->left);
    b = binary_tree_height(tree->right);
    c = (MAX(a, b) + 1);
    return (c);
}

/**

size_t binary_tree_height(const binary_tree_t *tree)
{
    if (!tree)
        return (0);
    return (_binary_tree_height(tree)- 1);
}
*/