#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 100

int main(){
	int i, n, c1 = 0 , c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0;
	int dado[TAMANHO];
	printf("Insira o numero de vezes que o dado foi lancado: ");
	scanf("%d", &n);
	printf("____________LANCAMENTO______________\n");
	for (i = 1; i <= n; i++){
		printf("%d face: ", i);
		scanf("%d",&dado[i]);
		if(dado[i] == 1){
			c1 += 1;
		}
		else if(dado[i] == 2){
			c2 += 1;
		}
		else if(dado[i] == 3){
			c3 += 1;
		}
		else if(dado[i] == 4){
			c4 += 1;
		}
		else if(dado[i] == 5){
			c5 += 1;
		}
		else if(dado[i] == 6){
			c6 += 1;
		}
		else{
			i-=1;
		}
	}
	printf("\nA face 1 foi resultado do lancamento {%d} vezes", c1);
	printf("\nA face 2 foi resultado do lancamento {%d} vezes", c2);
	printf("\nA face 3 foi resultado do lancamento {%d} vezes", c3);
	printf("\nA face 4 foi resultado do lancamento {%d} vezes", c4);
	printf("\nA face 5 foi resultado do lancamento {%d} vezes", c5);
	printf("\nA face 6 foi resultado do lancamento {%d} vezes", c6);
}
