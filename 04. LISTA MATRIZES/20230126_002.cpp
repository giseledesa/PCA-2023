#include <stdio.h>
#include <stdlib.h>


int soma(float v1[][5], float v2[][5]){
	int i, j ;
	float soma[3][5] ;
	for (i = 0; i <  3; i++){
		for (j = 0; j < 5; j++){
			soma[i][j] = v1[i][j] + v2[i][j];
		}
	}
	for (i = 0; i <  3; i++){
		for (j = 0; j < 5; j++){
			printf("%.2f\t", soma[i][j]);
		}
		printf("\n");
	}

} 


int main(){
	int i, j;
	float x[3][5], y[3][5];
	printf("\nMatriz 1: \n");
	for (i = 0; i <  3; i++){
		for (j = 0; j < 5; j++){
			scanf("%f", &x[i][j]);
		}
	}
		printf("\nMatriz 2: \n");
	for (i = 0; i <  3; i++){
		for (j = 0; j < 5; j++){
			scanf("%f", &y[i][j]);
		}
	}
	
	soma(x,y);
}
