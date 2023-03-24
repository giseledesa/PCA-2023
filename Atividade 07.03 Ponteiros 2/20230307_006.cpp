#include <stdio.h>

int soma_arrays(int *a, int *b, int *c, int tam) {
    int i;

    for (i = 0; i < tam; i++) {
        c[i] = a[i] + b[i];
    }

    return 1;
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {5, 4, 3, 2, 1};
    int c[5];
    int tam_a = sizeof(a) / sizeof(int);
    int tam_b = sizeof(b) / sizeof(int);

    if (tam_a != tam_b) {
        printf("Tamanho dos arrays diferentes.\n");
        return 0;
    }

    if (soma_arrays(a, b, c, tam_a)) {
        int i;

        printf("Resultado da soma dos arrays: ");

        for (i = 0; i < tam_a; i++) {
            printf("%d ", c[i]);
        }

        printf("\n");
    } else {
        printf("Erro ao somar os arrays.\n");
    }

    return 0;
}

