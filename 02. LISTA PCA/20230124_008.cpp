#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 100

int produtoEscalar(int t){
	int x[TAMANHO], y[TAMANHO];
	int i, prod = 0;
	printf("\nVETOR 1: \n");
	for (i = 0; i <  t; i++){
		scanf("%d", &x[i]);
	}
	printf("\nVETOR 2: \n");
	for (i = 0; i <  t; i++){
		scanf("%d", &y[i]);
	}
	for (i = 0; i < t; i++){
		prod +=  x[i]*y[i];
	}
	printf("\nPRODUTO ESCALAR = %d", prod);
} 


int main(){

	int i, num;
	printf("Insira a quantidade de elementos dos vetores: ");
	scanf("%d", &num);
	
	produtoEscalar(num);
}
