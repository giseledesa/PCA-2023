#include <stdio.h>

int ordenar(int *a, int *b, int *c) {
    int temp;

    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }

    if (*a > *c) {
        temp = *a;
        *a = *c;
        *c = temp;
    }

    if (*b > *c) {
        temp = *b;
        *b = *c;
        *c = temp;
    }

    return (*a == *b && *b == *c);
}

int main() {
    int a, b, c;

    printf("Digite tres valores inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    if (ordenar(&a, &b, &c)) {
        printf("Os tres valores sao iguais: %d\n", a);
    } else {
        printf("Valores ordenados: %d %d %d\n", a, b, c);
    }

    return 0;
}
