#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 100

int fatorial(int v, int tamanho){
    int i, fat = 1;
    for(i = v; i > 0; i--){
    	fat *= i;
	}
	return fat;
    
}

int main()
{
    int v[TAMANHO], fat[TAMANHO];
    int num, aux;
    int i;
    printf ("Quantidade de numeros: ");
    scanf("%d",&num);
    for (i=0; i < num; i++){
        printf("Digite o %d numero: ", i+1);
        scanf ("%d", &v[i]);
        aux = v[i];
        fat[i] = fatorial(aux, num);
    }
    printf("\nFATORIAL");
    for (i=0; i < num; i++){
    	printf("\nsequencia inicial: {%d}", v[i]);
	}
	for (i=0; i < num; i++){
		printf("\nsequencia final: {%d}", fat[i]);
	}
    return 0;
}


