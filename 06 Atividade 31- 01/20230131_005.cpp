#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#define m 200


int main(){
	int i, tam, maiusc;
	char p[m];

	printf("\nFRASE: ");
	gets(p);
	
	for (i = 0; i < m; i++){
		if (p[i] == '\0'){
			tam = i;
			break;
		}
	}
	
	for (i = 0; i < tam; i++){
		maiusc = p[i] - ('a'-'A');
		maiusc += 3;
		printf("%c", maiusc);
	}
	
	
	return 0;
}
