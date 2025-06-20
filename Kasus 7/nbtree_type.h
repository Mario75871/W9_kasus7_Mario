#ifndef NBTREE_TYPE_H
#define NBTREE_TYPE_H

#include "boolean.h"

#define JML_MAKS 20
#define NIL 0

typedef char infotype;
typedef int address;

typedef struct {
    infotype info;
    address ps_fs;
    address ps_nb;
    address ps_pr;
} nbtree;

typedef nbtree Isi_Tree[JML_MAKS + 1];

#endif
