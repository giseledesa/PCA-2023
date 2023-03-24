#include <stdio.h>
#include <stdlib.h>

int* lerVetor(int n) {
    int* vetor = (int*) malloc(n * sizeof(int)); // aloca um vetor de n inteiros
    printf("Digite os %d valores do vetor:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]); // lê cada valor do vetor
    }
    return vetor; // retorna o vetor preenchido
}

void obterMaiorEMenor(int* vetor, int n, int* maior, int* menor) {
    *maior = vetor[0]; // assume que o primeiro valor é o maior
    *menor = vetor[0]; // assume que o primeiro valor é o menor
    for (int i = 1; i < n; i++) {
        if (vetor[i] > *maior) { // se o valor atual for maior que o maior valor anterior
            *maior = vetor[i]; // atualiza o valor do maior
        } else if (vetor[i] < *menor) { // se o valor atual for menor que o menor valor anterior
            *menor = vetor[i]; // atualiza o valor do menor
        }
    }
}

int main() {
    int n, *vetor, maior, menor;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    vetor = lerVetor(n); // aloca e preenche o vetor
    obterMaiorEMenor(vetor, n, &maior, &menor); // obtém o maior e o menor valor do vetor
    printf("Maior valor: %d\nMenor valor: %d\n", maior, menor); // imprime os resultados
    free(vetor); // libera a memória alocada pelo vetor
    return 0;
}
