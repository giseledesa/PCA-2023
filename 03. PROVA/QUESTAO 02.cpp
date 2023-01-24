#include <stdio.h>
#include <math.h>

int hiperfatorial(int n){
	int i, aux = 1;
	if( n == 0 || n == 1)
	{
		printf("Hiperfatorial(%d) = 1", n);
	}
	else
	{
		for(i = 0; i <= n; i++)
		{
			aux *= pow(i,i);
		}
		printf("Hiperfatorial(%d) = %d", n, aux);
	}
}


int lerNumero(int num)
{
	int j = 0;
	do{
		printf("Digite um número inteiro: ");
		scanf("%d", &num);
		if (num>=0)
		{
			hiperfatorial(num);
			j+=1;
		}
	}while(j == 0);
}

main(){
	int num;
	num = lerNumero(num);
}
