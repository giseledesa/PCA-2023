#include <stdio.h>

#define TAM 8

int main() {
    int array[TAM], *p;

    printf("Digite %d numeros inteiros:\n", TAM);

    for (p = array; p < array + TAM; p++) {
        scanf("%d", p);
        *p *= 2;
        if (*p % 2 == 0) {
            printf("Endereco de %d: %p\n", *p, p);
        }
    }

    printf("Valores do array dobrados:\n");

    for (p = array; p < array + TAM; p++) {
        printf("%d ", *p);
    }
    printf("\n");

    return 0;
}
