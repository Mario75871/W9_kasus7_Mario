#ifndef NBTREE_TRAVERSAL_H
#define NBTREE_TRAVERSAL_H

#include "nbtree_type.h"

void PreOrder(Isi_Tree P, address idx);
void InOrder(Isi_Tree P, address idx);
void PostOrder(Isi_Tree P, address idx);
void LevelOrder(Isi_Tree P, int n);
void PrintTree(Isi_Tree P, address idx, int depth);

#endif
