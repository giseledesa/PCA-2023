#include <stdio.h>

void troca(float *a, float *b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    float x = 2.5, y = 5.3;

    printf("Antes da troca: x = %.2f, y = %.2f\n", x, y);
    troca(&x, &y);
    printf("Depois da troca: x = %.2f, y = %.2f\n", x, y);

    return 0;
}
