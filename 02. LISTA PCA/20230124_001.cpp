#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 100

int main(){
	int v[TAMANHO];
    int num;
    int i;
    printf ("Quantidade de numeros: ");
    scanf("%d",&num);
    for (i=0; i < num; i++){
        printf("Digite o %d numero: ", i+1);
        scanf ("%d", &v[i]);
    }
    for (i=num-1; i>=0; i--){
        printf(" %d", v[i]);
    }	
}
