#include <stdio.h>

void min_max(int *v, int n, int *min, int *max) {
    int i;

    *min = v[0];
    *max = v[0];

    for (i = 1; i < n; i++) {
        if (v[i] < *min) {
            *min = v[i];
        }

        if (v[i] > *max) {
            *max = v[i];
        }
    }
}

int main() {
    int v[] = {5, 2, 8, 1, 6, 4, 7, 3};
    int n = sizeof(v) / sizeof(int);
    int min, max;

    min_max(v, n, &min, &max);

    printf("minimo: %d\n", min);
    printf("maximo: %d\n", max);

    return 0;
}

