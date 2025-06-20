#include <stdio.h>
#include "nbtree_core.h"

void CreateTree(Isi_Tree X) {
    X[1] = (nbtree){'A', 2, 0, 0};
    X[2] = (nbtree){'B', 4, 3, 1};
    X[3] = (nbtree){'C', 6, 0, 1};
    X[4] = (nbtree){'D', 0, 5, 2};
    X[5] = (nbtree){'E', 0, 0, 2};
    X[6] = (nbtree){'F', 0, 7, 3};
    X[7] = (nbtree){'G', 0, 8, 3};
    X[8] = (nbtree){'H', 0, 0, 3};
}

boolean IsEmpty(Isi_Tree P) {
    return P[1].info == ' ';
}

boolean IsEqual(Isi_Tree A, Isi_Tree B) {
    for (int i = 1; i <= JML_MAKS; i++) {
        if (A[i].info != B[i].info ||
            A[i].ps_fs != B[i].ps_fs ||
            A[i].ps_nb != B[i].ps_nb ||
            A[i].ps_pr != B[i].ps_pr) {
            return false;
        }
    }
    return true;
}
