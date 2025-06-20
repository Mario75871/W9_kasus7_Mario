#include <stdio.h>
#include "nbtree_core.h"
#include "nbtree_traversal.h"

int main() {
    Isi_Tree tree;
    Create_tree(tree, 8);
    printf("PreOrder Traversal:\n");
    PreOrder(tree);
    printf("\nLevel Order Traversal:\n");
    Level_order(tree, 8);
    return 0;
}
