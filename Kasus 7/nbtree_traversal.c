#include <stdio.h>
#include "nbtree_traversal.h"

void PreOrder(Isi_Tree P) {
    void pre(address idx) {
        if (idx == 0) return;
        printf("%c ", P[idx].info);
        pre(P[idx].ps_fs);
        pre(P[idx].ps_nb);
    }
    pre(1);
}

void Level_order(Isi_Tree P, int Maks_node) {
    for (int i = 1; i <= Maks_node; i++) {
        printf("%c ", P[i].info);
    }
}

void InOrder(Isi_Tree P) {}
void PostOrder(Isi_Tree P) {}
