#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 100

void imprimirPares(int v[], int tamanho){
    int i;
    for (i=0; i<tamanho; i++){
    	if(v[i]%2 == 0){
    		printf(" %d", v[i]);
		}
    }
}

int main()
{
    int v[TAMANHO];
    int num;
    int i;
    printf ("Quantidade de numeros: ");
    scanf("%d",&num);
    for (i=0; i < num; i++){
        printf("Digite o %d numero: ", i+1);
        scanf ("%d", &v[i]);
    }
    imprimirPares(v,num);
    return 0;
}


