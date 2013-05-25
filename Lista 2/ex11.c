// 11) Faça um algoritmo que leia um número N e escreva uma lista de seus divisores. 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int num1, i, resto;

		printf("Digite um numero:");
		scanf("%d", &num1);
		
		printf("Os divisores do número %d são:", num1);
		for(i = 1; i <= num1; i++)
			{
			if(num1 % i == 0)
				{		
				printf("[%d]", i);
				}
			}
		printf("\n");	


	return 0;
}
