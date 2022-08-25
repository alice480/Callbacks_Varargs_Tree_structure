#ifndef SRC_BST_H_
#define SRC_BST_H_
#include <stdlib.h>

struct bin_tree {
    int value;
    struct bin_tree *left;
    struct bin_tree *right;
    struct bin_tree *parent;
};

struct bin_tree *bstree_create_node(int val);
struct bin_tree *bstree_insert(struct bin_tree *root, int val);

#endif  // SRC_BST_H_
