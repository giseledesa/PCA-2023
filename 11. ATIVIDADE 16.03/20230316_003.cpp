//Desenvolva um programa que calcule a soma de duas matrizes MxN de n�meros reais (double). 
//A implementa��o deste programa deve considerar as dimens�es fornecida pelo usu�rio
//(Dica: represente a matriz atrav�s de vari�veis do tipo double **, usando aloca��o din�mica 
//de mem�ria)
#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n;
    printf("Digite as dimensoes das matrizes (M x N): ");
    scanf("%d %d", &m, &n);

    // Aloca��o din�mica das matrizes
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

    // Impress�o da matriz soma
    printf("Matriz soma:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("%.2lf ", matrizSoma[i][j]);
        }
        printf("\n");
    }

    // Libera��o de mem�ria
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
