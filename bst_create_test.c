#include "bst.h"
#include <stdio.h>

int bst_create_test(int value);

int main() {
    int flag = 1;
    flag *= bst_create_test(5);
    flag *= bst_create_test(2);
    if (flag)
        printf("SUCCESS");
    else
        printf("FAIL");
}

int bst_create_test(int value) {
    int flag = 1;
    struct bin_tree *head = bstree_create_node(value);
    flag *= (head->value == value);
    free(head);
    return flag;
}
