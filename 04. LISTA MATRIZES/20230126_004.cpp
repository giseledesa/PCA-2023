#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {
  int i, j,z,x = 0;
  int** matriz;
  int linhas = 3, colunas = 3;

  // Alocar memória para as linhas da matriz
  matriz = (int**)malloc(linhas * sizeof(int*));

  // Alocar memória para as colunas de cada linha
  for (i = 0; i < linhas; i++) {
    matriz[i] = (int*)malloc(colunas * sizeof(int));
  }

  // Inicializar a matriz com valores
  for (i = 0; i < linhas; i++) {
    for (j = 0; j < colunas; j++) {
    	scanf("%f", &matriz[i][j]);
    }}
    
    
    scanf("%f", &x);
    
    
    for(int k = 0; k <3; k++){
		for(int l = 0; l < 3; l++){
			if(x == matriz[k][l]){
				printf("O numero pode ser encontrado na posicao:\n\t linha: %d\n \tcoluna: %d\n", k, l);
				z=1;	
			}
		}
	}
	
	if(z == 0){
		printf("\nVALOR NAO ENCONTRADO");
	}
    
  }
  
  
  
  
