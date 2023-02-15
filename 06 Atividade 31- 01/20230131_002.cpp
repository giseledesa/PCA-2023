#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
	int consumo[6];
	float mil[6];
	int i, tam, menor;
	char carro[6][10], carroLitros[10];
	for (i = 0; i < 5; i++){
		printf("\nMODELO: ");
		scanf("%s", carro[i]);
		printf("\nQUILOMETRO POR LITRO KM/L: ");
		scanf("%d", &consumo[i]);
		if (menor < consumo[i]){
			menor = consumo[i];
			strcpy(carroLitros,carro[i]);
		}
		mil[i] = 1000/(consumo[i]);
	}
	printf("\nMAIS ECONOMICO: \n");
	printf("%s", carroLitros);
	printf("\nA CADA 1000 km: \n");
	for (i = 0;i < 5; i++){
		printf("%s: ", carro[i]);
		printf("%.2f \n", mil[i]);
	}
}
