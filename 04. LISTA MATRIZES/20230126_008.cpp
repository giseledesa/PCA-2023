// 20230126_008 Faça uma função para multiplicar duas matrizes. 
//A função recebe como parâmetro as tres matrizes e as dimensões das duas primeiras matrizes e verificar se as matrizes podem ser multiplicadas e 
//apresentar uma mensagem de erro, caso não seja possível. 
//O resultado da multiplicação das duas primeiras matrizes deve ser armazenado na terceira matriz. 
//A função deve retornar falso se não for possível multiplicar as matrizes, e verdadeiro caso contrário.
//A função não deve ler as matrizes, imprimir o resultado, nem a mensagem de erro. Isto deve ser feito na função principal.

#include <stdio.h>
#include <stdlib.h>
#define tamanho 100

int multiplica_matriz(int l, int c, int x, int y, int m1[tamanho][tamanho], int m2[tamanho][tamanho], int m3[tamanho][tamanho]){
	int i, j,z;
	int aux2;
	for (i = 0; i < l; i++){
		aux2 = 0;
		for(j=0; j < y; j++){
			for(z=0; z < x; j++){ 
				aux2 += m1[i][z]*m2[z][j];
			}
		}
		m3[i][j] = aux2;
	}
	printf("\nMATRIZ RESULTADO: ");
	for (i = 0; i < l; i++){
		printf("\n");
		for(j = 0; j < y; j++){
			printf("%d\t", m3[i][j]);
		}
	}
}

int main(){
	int mat_um[tamanho][tamanho], mat_dois[tamanho][tamanho], mat_resultado[tamanho][tamanho];
	int i, j, linhas, colunas, l2, c2, aux = 0;
	
	do{
	//DIMENSOES DA MATRIZ
		printf("\nQUANTIDADE DE LINHAS DA MATRIZ 1: ");
		scanf("%d", &linhas);
		printf("\nQUANTIDADE DE COLUNAS DA MATRIZ 1: ");
		scanf("%d", &colunas);
		printf("\nQUANTIDADE DE LINHAS DA MATRIZ 2: ");
		scanf("%d", &l2);
		printf("\nQUANTIDADE DE COLUNAS DA MATRIZ 2: ");
		scanf("%d", &c2);
		if (colunas == l2){
			aux = 1;
			system("cls");
		}
		else if(colunas!=l2){
			printf("FALSO");
		}
	}while(aux != 1);
	//LENDO MATRIZ NA FUNÇÃO PRINCIPAL
	printf("VERDADEIRO\nPRIMEIRA MATRIZ: ");
	for (i = 0; i < linhas; i++){
		printf("\n");
		for (j = 0; j < colunas; j++){
			printf("MATRIZ UM [%d][%d] = ", i, j);
			scanf("%f", &mat_um[i][j]);
		}
	}
	printf("\nSEGUNDA MATRIZ: ");
	for (i = 0; i < l2; i++){
		printf("\n");
		for(j = 0; j < c2; j++){
			printf("MATRIZ DOIS [%d][%d] = ", i, j);
			scanf("%f", &mat_dois[i][j]);
		}
	}
	//CHAMA A FUNÇÃO
 	multiplica_matriz(linhas, colunas, l2, c2, mat_um, mat_dois, mat_resultado);
	}
	
	//multiplica_matriz(linhas, colunas, l2, c2, mat_um, mat_dois, mat_resultado);
