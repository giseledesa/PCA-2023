#include <stdio.h>
#include <stdlib.h>
#define tamanho 100

int main(){
	int m[tamanho][tamanho], n_linhas, n_col;
	int dsecundaria[tamanho], dprincipal[tamanho];
	int soma_linha[tamanho], soma_col[tamanho], soma_dPrincipal = 0, soma_dsecundaria = 0;
	int k, i, j, col, lin, aux = 0, aux2 = 0; // contadores
	printf("INSIRA QUANTIDADE DE LINHAS DA MATRIZ: ");
	scanf("%d", &n_linhas);
	printf("\nINSIRA QUANTIDADE DE COLUNAS DA MATRIZ: ");
	scanf("%d", &n_col);	
	printf("\nELEMENTOS DA MATRIZ");
	for (i = 0; i < n_linhas; i++){
		printf("\n");
		for (j = 0; j < n_col; j++){
			printf("m[%d][%d] = ", i, j);
			scanf("%d", &m[i][j]);
		}
	}	
	// SOMA DIAGONAIS
	for (i = 0; i < n_linhas; i++){
		for (j = 0; j < n_col; j++){
			k = (i + 1) + (j + 1);			// visto q to comecando com 0
			if (i == j ){					//diagonal principal
				dprincipal[i] = m[i][j];
				soma_dPrincipal += m[i][j];	
			}
			if( k == n_col + 1){  // i + j == ordem + 1 //diagonal secundaria
				dsecundaria[i] = m[i][j];
				soma_dsecundaria += m[i][j];    
			}
			soma_linha[j]=0;
			soma_col[j]=0;
		}	
	}
	//VERIFICAR QUAL A DIAGONAL	
	printf("\n\nDIAGONAL PRINCIPAL\n");
	for(i = 0; i < 5; i++){
		printf("%d\t", dprincipal[i]);
	}
	
	printf("\n\nDIAGONAL SECUNDARIA\n");
	for(j = 0; j < 5; j++){
		printf("%d\t", dsecundaria[j]);	
	}
	printf("\nSOMA DIAGONAL PRINCIPAL: %d\nSOMA DA DIAGONAL SECUNDARIA: %d", soma_dPrincipal, soma_dsecundaria );	
	//zerando os vetores das somas
	for (i = 0; i  < n_linhas; i++){
		soma_linha[i] = 0;
		soma_col[i] = 0;
	}
	for (lin = 0; lin  < n_linhas; lin++){
		for (col = 0; col < n_col; col++){
			soma_linha[lin] += m[lin][col];
			soma_col[col] += m[lin][col];
		}	
	}
	printf("\nSOMA DAS LINHAS: ");
	for (lin = 0; lin  < n_linhas; lin++){
		printf("\nLINHA[%d] = %d", lin, soma_linha[lin]);
		if(soma_linha[lin] == soma_linha[lin+1]){
			aux += 1;
		}
	}
	printf("\nSOMA DAS COLUNAS: ");
	for (col = 0; col < n_col; col++){
		printf("\nCOLUNA[%d] = %d", col, soma_col[col]);
		if(soma_col[col] == soma_col[col+1]){
			aux2 += 1;
		}	
	}
	if((aux == n_linhas-1)&&(aux2 == n_col-1)){
		if ( soma_dPrincipal ==  soma_dsecundaria){
			printf("\n\nEH UM QUADRADO MAGICO");
		}
	}
	else{
			printf("\n\nNAO EH UM QUADRADO MAGICO");
		}  
}
