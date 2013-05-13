/* Elaborar um algoritmo que lê um conjunto de 30 valores e os coloca em 2 vetores
conforme estes valores forem pares ou ímpares. O tamanho do vetor é de 5
posições. Se algum vetor estiver cheio, escrevê-lo. Terminada a leitura escrever o
conteúdo dos dois vetores. Cada vetor pode ser preenchido tantas vezes quantas for
necessário. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
//Comentário 
 
int main(){

int PAR[5], IMPAR[5], num, i;


for(i = 0; i < 30; i++)
	{
	printf("Digite um número:");	
	scanf("%d", &num);
	if(num % 2 == 0) 
		{
		PAR[i] = num;	
			if(i == 5)
			{
			for(i = 0; i < 6; i++)
			{
			printf("%d \n", PAR[i]);
			}

			}
		}
	else
		{
		IMPAR[i] = num;
		if(i == 5)
		{
		for(i = 0; i < 6; i++)
		{
		printf("%d \n", IMPAR[i]);
		}
		}
	}

	}
	

return 0;

}
