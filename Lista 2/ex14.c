/* 14) Faça um algoritmo que leia números, até que seja digitado -1 e calcule a media desses
números. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int nNumero, qnt = 0, soma = 0;
	
		printf("Digite um número:");
		scanf("%d", &nNumero);	
		while(nNumero != -1)
		{
		
			soma = soma + nNumero;
			qnt++;
			printf("Digite um número:");
			scanf("%d", &nNumero);		
		} 

		printf("A soma dos números é %d. A quantidade é %d \n", soma, qnt);


	return 0;
}
