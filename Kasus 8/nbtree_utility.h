#ifndef NBTREE_UTILITY_H
#define NBTREE_UTILITY_H

#include "nbtree_type.h"

boolean Search(Isi_Tree P, infotype x);
int CountLeaf(Isi_Tree P);
int FindLevel(Isi_Tree P, infotype x);
int FindDepth(Isi_Tree P, address idx, int depth);

#endif
