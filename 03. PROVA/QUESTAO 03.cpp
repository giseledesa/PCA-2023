#include <stdio.h>
#include <math.h>

float arctan(float x)
{
	int k;
    float termo, soma, eps;
  
  	eps = 0.0001;
  	termo = x;
  	soma = x;
  	k = 1;
  	while (termo*termo > eps*eps){
    	k = k+2;
    	termo = -termo*x*x*(k-2)/k;
    	soma = soma + termo;
  	}
  	printf("%.3f",soma);
}

float lerNumero(float num)
{
	int j = 0;
	do{
		printf("Digite um número inteiro no intervalo [0,1]: ");
		scanf("%f", &num);
		if (num >= 0 && num <= 1 )
		{
			j+=1;
			arctan(num);	
		}
	}while(j == 0);
}

main(){
	float num;
	num = lerNumero(num);
}
