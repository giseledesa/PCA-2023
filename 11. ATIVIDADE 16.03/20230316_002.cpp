#include <stdio.h>
#include <stdlib.h>

int main() {
    int m = 2, n = 3;
    int **MAT;
    MAT = (int**)malloc(m * sizeof(int*));
    for (int i = 0; i < m; i++) {
        MAT[i] = (int*)malloc(n * sizeof(int));
    }
    MAT[0][0] = 1;
    MAT[0][1] = 2;
    MAT[0][2] = 3;
    MAT[1][0] = 4;
    MAT[1][1] = 5;
    MAT[1][2] = 6;
   	printf("Aritmética de ponteiros:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", *(*(MAT + i) + j));
        }
        printf("\n");
    }
    printf("\nIndexes:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", MAT[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < m; i++) {
        free(MAT[i]);
    }
    free(MAT);

    return 0;
}
