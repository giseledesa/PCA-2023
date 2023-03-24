//Desenvolva um programa que calcule a soma de duas matrizes MxN de números reais (double). 
//A implementação deste programa deve considerar as dimensões fornecida pelo usuário
//(Dica: represente a matriz através de variáveis do tipo double **, usando alocação dinâmica 
//de memória)
#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n;
    printf("Digite as dimensoes das matrizes (M x N): ");
    scanf("%d %d", &m, &n);

    // Alocação dinâmica das matrizes
    double **matriz1 = (double **) malloc(m * sizeof(double *));
    double **matriz2 = (double **) malloc(m * sizeof(double *));
    double **matrizSoma = (double **) malloc(m * sizeof(double *));

    for(int i = 0; i < m; i++) {
        matriz1[i] = (double *) malloc(n * sizeof(double));
        matriz2[i] = (double *) malloc(n * sizeof(double));
        matrizSoma[i] = (double *) malloc(n * sizeof(double));
    }

    // Leitura das matrizes
    printf("Digite os elementos da primeira matriz:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%lf", &matriz1[i][j]);
        }
    }

    printf("Digite os elementos da segunda matriz:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%lf", &matriz2[i][j]);
        }
    }

    // Soma das matrizes
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            matrizSoma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    // Impressão da matriz soma
    printf("Matriz soma:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("%.2lf ", matrizSoma[i][j]);
        }
        printf("\n");
    }

    // Liberação de memória
    for(int i = 0; i < m; i++) {
        free(matriz1[i]);
        free(matriz2[i]);
        free(matrizSoma[i]);
    }
    free(matriz1);
    free(matriz2);
    free(matrizSoma);

    return 0;
}
