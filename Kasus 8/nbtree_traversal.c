#include <stdio.h>
#include "nbtree_traversal.h"

void PreOrder(Isi_Tree P, address idx) {
    if (idx == NIL) return;
    printf("%c ", P[idx].info);
    PreOrder(P, P[idx].ps_fs);
    PreOrder(P, P[idx].ps_nb);
}

void InOrder(Isi_Tree P, address idx) {
    if (idx == NIL) return;
    InOrder(P, P[idx].ps_fs);
    printf("%c ", P[idx].info);
    InOrder(P, P[idx].ps_nb);
}

void PostOrder(Isi_Tree P, address idx) {
    if (idx == NIL) return;
    PostOrder(P, P[idx].ps_fs);
    PostOrder(P, P[idx].ps_nb);
    printf("%c ", P[idx].info);
}

void LevelOrder(Isi_Tree P, int n) {
    for (int i = 1; i <= n; i++) {
        if (P[i].info != ' ') {
            printf("%c ", P[i].info);
        }
    }
}

void PrintTree(Isi_Tree P, address idx, int depth) {
    if (idx == NIL) return;
    for (int i = 0; i < depth; i++) printf("  ");
    printf("%c\n", P[idx].info);
    PrintTree(P, P[idx].ps_fs, depth + 1);
    PrintTree(P, P[idx].ps_nb, depth);
}
