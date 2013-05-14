/* 13) Faça um algoritmo que leia um número N (inteiro) e calcule e escreva o n-ézimo termo
da série: 1, 2, 4, 7, 11, ... */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int ntermo, i, nsoma = 1;

		printf("Digite o termo que gostaria de saber:");
		scanf("%d", &ntermo);
	
		for(i = 0; i < ntermo; i++)
		{
			nsoma = nsoma + i;
		}

		printf("O termo nº %d é %d \n", ntermo, nsoma);

	return 0;
}
