#include <stdio.h>

int main() {
    int inteiro = 10, *pInteiro = &inteiro;
    float real = 3.14, *pReal = &real;
    char caractere = 'a', *pCaractere = &caractere;

    printf("Valores antes da modificacao:\n");
    printf("inteiro: %d\n", inteiro);
    printf("real: %.2f\n", real);
    printf("caractere: %c\n\n", caractere);

    *pInteiro = 20;
    *pReal = 6.28;
    *pCaractere = 'b';

    printf("Valores apos a modificacao:\n");
    printf("inteiro: %d\n", inteiro);
    printf("real: %.2f\n", real);
    printf("caractere: %c\n", caractere);
    
        return 0;
}
