#include <stdio.h>
#include <stdlib.h>

int main(){
	int m[5][5], i, j, mAux[5][5], c, l, k;
	int dprincipal[5], dsecundaria[5];
	int linha4 = 0, col2 = 0;
	for (i = 0; i < 5; i++){
		for (j = 0; j < 5; j++){
			printf("m[%d][%d] = ", i, j);
			scanf("%d", &m[i][j]);
		}
	}
	
	for (i = 0; i < 5; i++){
		for (j = 0; j < 5; j++){
			k = (i + 1) + (j + 1); // visto q to comecando com 0
			if (i == j ){
				dprincipal[j] = m[i][j];	
			}
			if( k == 6){  // i + j == ordem + 1
				dsecundaria[j] = m[i][j];
			}
		}	
	}
	
	printf("\n\nDIAGONAL PRINCIPAL\n");
	for(i = 0; i < 5; i++){
		printf("%d\t", dprincipal[i]);
	}
	
	printf("\n\nDIAGONAL SECUNDARIA\n");
	for(j = 0; j < 5; j++){
		printf("%d\t", dsecundaria[j]);	
	}
	
	for ( l = 0; l < 5; l++){
		for(c = 0; c < 5; c++){
			if(l == 3){
				linha4 += m[l][c];
			}
			if(c == 1){
				col2 += m[l][c];
			}
		}	
	}		
	printf("\n\nSOMA DA LINHA 4 = %d", linha4);
	printf("\n\nSOMA DA COLUNA 2 = %d", col2);
	printf("\n\nMATRIZ SEM ELEMENTOS DA DIAGONAL PRINCIPAL\n");
	for (i = 0; i < 5; i++){
		for (j = 0; j < 5; j++){
			if(i!=j){
				printf("%d\t", m[i][j]);				
			}
		}
		printf("\n");
	}	
}
