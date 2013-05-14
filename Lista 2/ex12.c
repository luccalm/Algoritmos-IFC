/* 12) Faça um algoritmo que leia um número N (inteiro) calcule e escreva a seguinte soma
com N termos: S = 1/10 + 2/15 + 3/20 + 4/25 + ... */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int ntermos, i = 1, multi = 10;
	float soma;

		printf("Digite a quantidade de termos:");
		scanf("%d", &ntermos);
	
		while(ntermos > 0)
		{
			soma = ((float) i / multi) + soma; 
			i++;
			multi = multi + 5;
			ntermos--;
		}

		printf("%f", soma);

	return 0;
}
