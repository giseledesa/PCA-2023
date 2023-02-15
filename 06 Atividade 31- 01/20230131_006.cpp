#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#define m 20


int main(){
	int i, tam,count = 0;
	char w[m],palavra[m];

	printf("\nFRASE:  ");
	gets(w);
	
	for (i = 0; i < m; i++){
		if (w[i] == '\0'){
			tam = i;
			break;
		}
	}
	strcpy(palavra, w);
	strrev(palavra);
	count = strcmp(w, palavra);

	if (count == 0){
	   printf("\nEH PALINDROMO");
	}
	else{
		 printf("\nNAO EH PALINDROMO");
	}
}
