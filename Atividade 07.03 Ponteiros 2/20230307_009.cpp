#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* encontrar_letra(char* str, char letra, int* tamanho) {
    int tamanho_str = strlen(str);
    int* indices = (int*) malloc(tamanho_str * sizeof(int));
    int i, j = 0;

    for (i = 0; i < tamanho_str; i++) {
        if (str[i] == letra) {
            indices[j] = i;
            j++;
        }
    }

    *tamanho = j;
    return indices;
}

int main() {
    char str[100];
    char letra;
    int* indices;
    int tamanho, i;

    printf("Digite uma string: ");
    scanf("%s", str);
    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    indices = encontrar_letra(str, letra, &tamanho);

    printf("A letra '%c' foi encontrada nas posicoes: ", letra);
    for (i = 0; i < tamanho; i++) {
        printf("%d ", indices[i]);
    }

    printf("\nTotal de letras encontradas: %d\n", tamanho);

    free(indices);

    return 0;
}
