#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char inverso(char word[20]){
	int i, n;
	n = sizeof(word);
	for (i = n; i >= 0; --i){
		printf("%c",word[i]);
	}
}

char maiusculo(char word[20]){
	int i, n;
	char aux[20];
	n = sizeof(word);
	
	for (i = 0; i < n; i++){
		aux[i] = toupper(word[i]);
	}

	printf("%s",aux);	
}

char semVogal(char word[20]){
	int i, n, y;
	char aux[20], c;
	n = sizeof(word);
	
	
	for(i = 0; i < n; i++ ){
		c = toupper(word[i]);
		if((c != 'A') && (word[i] != 'E') && (word[i] != 'I') && (word[i] != 'O') && (word[i] != 'U')){
			aux[i] = word[i];
		}	
	}
	printf("%s",aux);	

}

char repetirCaracter(char word[20]){
	int i, n, cont = 0;
	char aux[20], busca;
	n = sizeof(word);

	printf("\nINSIRA O CARACTERE: ");
	scanf(" %c", &busca);

	
	for (i = 0; i < n; i++){
		if (word[i] == busca){
			cont+=1;
		}
	}
	
	printf("\nO caractere repetiu %d vezes", cont);
}


int main(){
	char palavra[20];
	int op;
	printf("\nInsira uma palavra: \n");
	scanf("%s", &palavra);
	printf("\nInsira Operacao: ");
	printf("\n\t0 - IMPRIMIR O INVERSO \n\t1 - PALAVRA MAIUSCULA\n\t2 - SEM VOGAIS\n\t3 - REPETICAO DE CARACTERE\n\t4 - APAGAR CARACTERE\n\n");
	scanf("%d", &op);
	switch(op){
		case 0:
			inverso(palavra);
			break;
		case 1: 
			maiusculo(palavra);
			break;
		case 2:
			semVogal(palavra);
			break;
		case 3:
			repetirCaracter(palavra);
			break;
	}
	
}
