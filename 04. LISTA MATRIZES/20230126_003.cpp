#include <stdio.h>
#include <stdlib.h>


int main(){
	int i, j, k, x[3][3], prod[3][3];
	printf("\nMatriz 1: \n");
	for (i = 0; i <  3; i++){
		for (j = 0; j < 3; j++){
			scanf("%d", &x[i][j]);
		}
	}
	printf("\nESCALAR: ");
	scanf("%d", &k);
	
	
	for (i = 0; i <  3; i++){
		for (j = 0; j < 3; j++){
			prod[i][j] = x[i][j] * k;
		}
	}
	for (i = 0; i <  3; i++){
		for (j = 0; j < 3; j++){
			printf("%d\t", prod[i][j]);
		}
		printf("\n");
	}
}
