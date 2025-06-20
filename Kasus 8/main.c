#include <stdio.h>
#include "nbtree_core.h"
#include "nbtree_traversal.h"
#include "nbtree_utility.h"

int main() {
    Isi_Tree T1, T2;
    CreateTree(T1);
    CreateTree(T2);

    int choice;
    char x;
    do {
        printf("\nMenu:\n");
        printf("1. Traversal PreOrder\n");
        printf("2. Traversal InOrder\n");
        printf("3. Traversal PostOrder\n");
        printf("4. Traversal LevelOrder\n");
        printf("5. Print Tree\n");
        printf("6. Search Node\n");
        printf("7. Jumlah Daun\n");
        printf("8. Level Node\n");
        printf("9. Kedalaman Tree\n");
        printf("10. Bandingkan Tree\n");
        printf("0. Exit\n");
        printf("Pilih: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: PreOrder(T1, 1); break;
            case 2: InOrder(T1, 1); break;
            case 3: PostOrder(T1, 1); break;
            case 4: LevelOrder(T1, 8); break;
            case 5: PrintTree(T1, 1, 0); break;
            case 6: printf("Masukkan info node: "); scanf(" %c", &x);
                    if (Search(T1, x)) printf("Node ditemukan\n");
                    else printf("Node tidak ditemukan\n");
                    break;
            case 7: printf("Jumlah daun: %d\n", CountLeaf(T1)); break;
            case 8: printf("Masukkan info node: "); scanf(" %c", &x);
                    printf("Level node %c = %d\n", x, FindLevel(T1, x)); break;
            case 9: printf("Kedalaman = %d\n", FindDepth(T1, 1, 0)); break;
            case 10: if (IsEqual(T1, T2)) printf("Tree sama\n");
                     else printf("Tree berbeda\n"); break;
        }
    } while (choice != 0);

    return 0;
}
