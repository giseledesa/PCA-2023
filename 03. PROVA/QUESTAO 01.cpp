#include <stdio.h>

 
int main(){
    float menor, maior, media,cont, soma, numero;
    maior=0;
    media=0;
    soma=0;
    cont=0;
    printf("Uma media: ");
    scanf ("%f",&numero);
    menor=numero;
    while(numero >= 0){
        if (numero > maior)
            maior=numero;
        if (numero < menor)
            menor = numero;
        soma += numero;
        cont += 1;
        printf("Uma media: ");
        scanf ("%f",&numero);
    }
    printf ("\nMenor: %f", menor < 0 ? 0 : menor);
    printf ("\nMaior: %f", maior);
    printf ("\nMedia: %f", cont > 0 ? (soma/cont):0);
}
