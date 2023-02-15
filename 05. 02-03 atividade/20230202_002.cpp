#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define max 20

void imprime_nomes(char name[max][120], int x){
	int i;
	for (i = 1; i <= x; i++){
		printf("%d Nome: %s\n", i, name[i]);
	}
}

char elimina_nome(char name[max][120], int x){
	char aux[120];
	int i, j; 
	printf("INSIRA O NOME A SER DELETADO: ");
	scanf("%s",&aux);
	for (i = 1; i <= x; i++){
		if(strcmp(aux, name[i])== 0){
			for(j = 1; j < x; j++){
				strcpy(aux[i], name[i]);
			}
			break;
		}
		else{
			printf("\nNAO ENCONTRADO");
		}
		
	}
	
}

char copia_nome(char name[max][120], int x){
	int i;
	char aux[max][120];
	for (i = 1; i <= x; i++){
		strcpy(aux[i], name[i]);
	}

}



int main(){
	char nome[max][120], aux[120];
	int j, n, op;
	printf("QUANTIDADE DE NOMES A SEREM LID0S: ");
	scanf("%d", &n);
	printf("\nLISTA DE NOMES\n");
	fflush(stdin);
	for (j = 1; j <= n; j++){
		gets(nome[j]);
	}
	
	system("cls");
	
	printf("\nINSIRA A OPERAÇÃO");
	printf("\n\t1 - IMPRIMIR NOMES\n\t2 - ELIMINAR NOME\n\t3 - IMPRIMIR EM ORDEM ALFABETICA\n\t4 - COPIAR LISTA");
	scanf("%d", &op);
	switch(op){
		case 1:
			system("cls");
			imprime_nomes(nome,n);
			break;
		case 2:
			system("cls");
			elimina_nome(nome, n);
			break;
		case 3:
		//	imprime_ordem(nome);
			break;
		case 4:
	//		copia_nome(nome);
			break;
	}	
}
