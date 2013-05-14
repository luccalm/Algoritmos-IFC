// 11) Faça um algoritmo que leia um número N e escreva uma lista de seus divisores. 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int num1, i = 2;
	div_t dividendo;

		printf("Digite um numero:");
		scanf("%d", &num1);
	
		while(num1 > 1)
		{
			if(num1 % i == 0)
				{
			dividendo = div(num1, i);
			printf("%d \n", dividendo.quot);
			num1 = dividendo.quot;
				}
		else
				{
			i++;
				}
		}

	return 0;
}
