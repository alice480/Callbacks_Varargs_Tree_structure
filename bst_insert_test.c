#include "bst.h"
#include <stdio.h>

int bst_insert_test(struct bin_tree *head, int value);

int main() {
    int flag = 1;
    struct bin_tree *head = bstree_create_node(5);
    flag *= bst_insert_test(head, 3);
    flag *= bst_insert_test(head, 6);
    if (flag)
        printf("SUCCESS");
    else
        printf("FAIL");
    free(head);
}

int bst_insert_test(struct bin_tree *head, int value) {
    int flag = 1;
    bst_insert_test(head, value);
    // if (value < head->value && head->left->value == value)
    //     printf("hh");
    free(head);
    return flag;
}
