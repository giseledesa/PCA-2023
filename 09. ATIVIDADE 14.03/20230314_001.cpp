#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void mediaDesvio(float *notas, int n, float *media, float *desvio) {
    float soma = 0.0, somaQuadrados = 0.0;
    int i;

    for (i = 0; i < n; i++) {
        soma += notas[i];
        somaQuadrados += notas[i] * notas[i];
    }

    *media = soma / n;
    *desvio = sqrt(somaQuadrados / n - (*media) * (*media));
}

int main() {
    int n, i;
    float *notas, media, desvio;

    printf("Digite a quantidade de alunos na turma: ");
    scanf("%d", &n);

    notas = (float *) malloc(n * sizeof(float));
    if (notas == NULL) {
        printf("Erro de alocação de memória!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%f", &notas[i]);
    }

    mediaDesvio(notas, n, &media, &desvio);

    printf("Média das notas: %.2f\nDesvio padrão das notas: %.2f\n", media, desvio);

    free(notas);

    return 0;
}
