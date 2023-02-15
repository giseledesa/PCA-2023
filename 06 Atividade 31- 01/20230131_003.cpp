#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main(){
	char data[11];
	int i, d, m, a;
	printf("\nDATA: ");
	scanf("%s", &data);
	for(i = 0; i < 11; i++){
		if('/' != data[2] || '/' != data[5]){
			printf("\nDATA: ");
			scanf("%s", data);
		}
	}
	char *cut = strtok(data, "/");
	d = atoi(cut);
	for (i = 0; cut != NULL; i++){
		printf( "%s\n", cut );
        cut = strtok(NULL, "/");
        if (i == 0){
        	m = atoi(cut);
		}
		if (i == 1){
			a = atoi(cut);
		}
	}
	printf( "%d\n", d);
	printf( "%d\n", m);
	printf( "%d\n", a);
}
