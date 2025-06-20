#include <stdio.h>
#include "nbtree_core.h"

void Create_tree(Isi_Tree X, int Jml_Node) {
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
