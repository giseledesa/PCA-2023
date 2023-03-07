#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define max 50



int main(){
	char nome[2][max][30] = {
		{"giulia", "guilherme", "gabriel", "gisele", "bruna", "elias"}, 
		{"aurora", "lorena", "jose", "luisa", "daniela", "felipe"}
	};
	char sexo[2][max] = {
		{'f', 'm', 'm','f', 'f', 'm'}, 
		{'f','f', 'm', 'f', 'f','m'}
	};
	float notas[2][max] = {
		{8.5, 9.0, 6.5,7.0, 8.5, 8.0}, 
		{9.0, 8.5, 8.5, 8.8, 9.5, 8.0}
	};
	int i,j, m1 = 0, m2 = 0, maior = 0;
	char equipe[2][max][30];
	
	for (i = 0; i < 2; i++) {		//percorre a linha
        for ( j = 0; j < max; j++) {		//percorre a coluna
        	for (int k = 0; k < strlen(nome[i][j]); k++) {		//percorre cada caracter
        		nome[i][j][k]= toupper(nome[i][j][k]);			// strlen serve para contar a quantidade de caracteres de cada string
			}													//toupper é da biblioteca ctype.h. serve para deixar cada caracter em maiusculo
        }
   }
   
   for (i = 0; i < 2; i++) {
   		for ( j = 0; j < max; j++) {
			if  (sexo[0][j]== 'f'){	//verifica se é mulher
				 
				if(notas[0][j] >= 8.0){							//verifica nota
					strcpy(equipe[0][j], nome[0][j]);
				}
				m1 +=1;
				
			}
			if (sexo[1][j]== 'f'){	//verifica se é mulher
				 
				if(notas[1][j] >= 8.0){							//verifica nota
					strcpy(equipe[1][j], nome[1][j]);
				}
				m2 +=1;
			}
   		}
   }
   
   for (i = 0; i < 2; i++) {				//imprime as equipes
		printf("EQUIPE %d:", i+1);
		for ( j = 0; j < max; j++) {
			printf(" %s", nome[i][j]);
		}
		printf("\n");
   }
   
   if(m1>m2){
		printf("\nA EQUIPE 1 TEM O MAIOR NUMERO DE MULHERES\n");
		maior = m1;
   }else if(m2>m1){
		printf("\nA EQUIPE 2 TEM O MAIOR NUMERO DE MULHERES\n");
		maior = m2;
   }else if(m1==m2){
		printf("\nAMBAS EQUIPES TEM O MESMO NUMERO DE MULHERES\n");
   		maior = m1;
	}
	
	for (i = 0; i < 2; i++) {				//imprime as equipes
		printf("PARTICIPANTES DO PROJETO EQUIPE %d:", i+1);
		for ( j = 0; j < maior; j++) {
			fflush(stdin);
			if(equipe[i][j] != "\0"){
				printf(" \n%s", equipe[i][j]);
			}
			
			
		};
		printf("\n");
   }
	
	
	
}
