#include "bst.h"

struct bin_tree *bstree_create_node(int val) {
    struct bin_tree *node = malloc(sizeof(struct bin_tree));
    node->value = val;
    node->parent = NULL;
    node->left = NULL;
    node->right = NULL;
    return node;
}

struct bin_tree *bstree_insert(struct bin_tree *root, int val) {
    struct bin_tree *root2 = root, *root3 = NULL;
    struct bin_tree *node = malloc(sizeof(struct bin_tree));
    node->value = val;
    while (root2 != NULL) {
        root3 = root2;
        if (val < root2->value)
            root2 = root2->left;
        else
            root2 = root2->right;
    }
    node->parent = root3;
    node->left = NULL;
    node->right = NULL;
    if (val < root3->value)
        root3->left = node;
    else
        root3->right = node;
    return root;
}
