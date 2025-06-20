#include "nbtree_utility.h"

boolean Search(Isi_Tree P, infotype x) {
    for (int i = 1; i <= JML_MAKS; i++) {
        if (P[i].info == x) return true;
    }
    return false;
}

int CountLeaf(Isi_Tree P) {
    int count = 0;
    for (int i = 1; i <= JML_MAKS; i++) {
        if (P[i].info != ' ' && P[i].ps_fs == NIL) count++;
    }
    return count;
}

int FindLevel(Isi_Tree P, infotype x) {
    for (int i = 1; i <= JML_MAKS; i++) {
        if (P[i].info == x) {
            int level = 0, parent = P[i].ps_pr;
            while (parent != NIL) {
                level++;
                parent = P[parent].ps_pr;
            }
            return level;
        }
    }
    return -1;
}

int FindDepth(Isi_Tree P, address idx, int depth) {
    if (idx == NIL) return depth - 1;
    int max = depth;
    address child = P[idx].ps_fs;
    while (child != NIL) {
        int d = FindDepth(P, child, depth + 1);
        if (d > max) max = d;
        child = P[child].ps_nb;
    }
    return max;
}
