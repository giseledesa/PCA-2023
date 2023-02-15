#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define max 40


int main(){
	int i, j, op, aux2 = 0;
	char eqp[5][4][max], aux[max];

	
	for (i = 1; i <= 5; i++){
		printf("EQUIPE %d\n\t", i);
		for (j = 1; j <= 4; j++){
			gets(eqp[i][j]);
		}	
	}

	system("cls");
	printf("\nDeseja realizar uma busca?\nDigite: \n\t0 -  NAO\n\t1 - SIM\n");
	scanf("%d", &op);
	system("cls");
	if(op == 1 ){
		printf("\nDigite o nome completo do aluno: ");
		gets(aux);
		for (i = 1; i <= 5; i++){
			for (j = 1; j <= 4; j++){
				if(strcmp(aux, eqp[i][j]) == 0){
					aux2 = i;
					break;
				}	
			}
		}
	}
	
	
	if (aux2 == 0){
		printf("\n\nALUNO NAO ENCONTRADO");
	}
	else{
		printf("\n\n%s ESTA NA EQUIPE %d", aux, aux2);
	}
}
